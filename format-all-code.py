#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# Copyright © 2017 Martin Ueding <dev@martin-ueding.de>

import argparse
import glob
import subprocess


def main():
    options = _parse_args()

    for filename in glob.glob('*.tex'):
        format_file(filename)


def format_file(filename):
    with open(filename) as f:
        lines = list(f)

    result = []
    code = []

    within_code = False

    for line in lines:
        if line.strip() == r'\end{lstlisting}':
            within_code = False

            with open('.formatter.cpp', 'w') as f:
                f.write(''.join(code))
            subprocess.call(['clang-format', '-i', '.formatter.cpp'])
            with open('.formatter.cpp') as f:
                code = list(f)
            result += code
            code = []

        if within_code:
            code.append(line)
        else:
            result.append(line)

        if line.strip() == r'\begin{lstlisting}':
            within_code = True

    with open(filename, 'w') as f:
        f.write(''.join(result))



def _parse_args():
    '''
    Parses the command line arguments.

    :return: Namespace with arguments.
    :rtype: Namespace
    '''
    parser = argparse.ArgumentParser(description='')
    options = parser.parse_args()

    return options


if __name__ == '__main__':
    main()
