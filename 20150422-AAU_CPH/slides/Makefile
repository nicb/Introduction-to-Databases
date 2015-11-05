#
# $Id: Makefile 145 2015-04-22 09:22:42Z nicb $
#
#
# there should be nothing to be changed below here
#

#
# $Id: Makefile 145 2015-04-22 09:22:42Z nicb $
#
PRINTMODE=beamer
TARGET=slides.pdf 


DVI=$(TARGET:.pdf=.dvi)
SRC=$(TARGET):.pdf=.dvi)
AUX=$(TARGET):.pdf=.aux)
IMAGEDIR=../../images
BEAMERDIR=../../../latex/beamer/sme-ccppd
TEXINPUTS=".:$(BEAMERDIR):$(IMAGEDIR):"
PDFLATEX=TEXINPUTS=$(TEXINPUTS) pdflatex

BIBTEX=bibtex
all: $(TARGET)

$(TARGET):	images

%.pdf:	%.tex
	$(PDFLATEX) '\newcommand{\printmode}{$(PRINTMODE)}\input{$<}'
	$(RM) $@
#	$(BIBTEX) $* 
	$(PDFLATEX) '\newcommand{\printmode}{$(PRINTMODE)}\input{$<}'
	$(RM) $@
	$(PDFLATEX) '\newcommand{\printmode}{$(PRINTMODE)}\input{$<}'

images:
	$(MAKE) -C $(IMAGEDIR) -$(MAKEFLAGS)

distclean:
	$(RM) *~ *.aux *.dvi *.out *.log *.bbl *.blg *.toc *.nav *.snm

clean: distclean
	$(RM) $(TARGET)

.PHONY:	clean images

.SUFFIXES:	.pdf .ps .dvi .aux .tex
