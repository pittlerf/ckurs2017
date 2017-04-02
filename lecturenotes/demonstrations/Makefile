SOURCES := $(wildcard *.c)

all: $(basename $(SOURCES))

$(basename $(SOURCES)): % : %.c
	gcc -Wall -Wpedantic -o $@ $<
