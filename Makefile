TUTORIALS=tutorial1 tutorial3 tutorial4 tutorial5

all: programmierkurs_fpcu.pdf $(addsuffix .pdf, $(TUTORIALS))

programmierkurs_fpcu.pdf: speichernausdrucken.tex definitions.tex intro.tex kontrollstrukturen.tex pointersarrays.tex programmierkurs_fpcu.tex variablen.tex Makefile endprojekt.tex einfuegesortieren.tex dynamischespeicherverwaltung.tex complexdatatypen.tex dateinverarbeitung.tex stapelspeicher.tex funktionen.tex standartbibliothek.tex
	latex programmierkurs_fpcu.tex
	latex programmierkurs_fpcu.tex
	dvips programmierkurs_fpcu.dvi
	ps2pdf programmierkurs_fpcu.ps

tutorial%.pdf: tutorial%.tex
	latexmk -pdf -pdflatex="pdflatex -interaction=nonstopmode" -use-make $<

