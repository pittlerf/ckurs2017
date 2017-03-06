programmierkurs_fpcu.pdf: speichernausdrucken.tex definitions.tex intro.tex kontrollstrukturen.tex pointersarrays.tex programmierkurs_fpcu.tex variablen.tex Makefile
	latex programmierkurs_fpcu.tex
	latex programmierkurs_fpcu.tex
	dvips programmierkurs_fpcu.dvi
	ps2pdf programmierkurs_fpcu.ps
