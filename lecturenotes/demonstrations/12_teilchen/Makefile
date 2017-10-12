SOURCES := $(wildcard *.c)
HEADERS := $(wildcard *.h)
OBJECTS := $(SOURCES:.c=.o)
PROGRAMS := teilchen
LIBS := -lm -lgsl

all: $(OBJECTS) $(PROGRAMS)

# Das/die main-Modul(e) ha[t,ben] keine Headerdateien, haengen aber von
# (fast) allen andere Headerdateien ab
$(addsuffix .o, $(PROGRAMS)): % : $(HEADERS) Makefile
	gcc -Wall -Wpedantic -std=c99 -c $(patsubst %.o, %.c, $@)

# Jedes Modul hat eine Headerdatei
%.o: %.c %.h Makefile
	gcc -Wall -Wpedantic -std=c99 -c $<

$(PROGRAMS): % : $(OBJECTS) Makefile
	gcc -o $@ $< $(OBJECTS) $(LIBS)

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(PROGRAMS)
