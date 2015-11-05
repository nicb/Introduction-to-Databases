#
# $Id: Makefile 145 2015-04-22 09:22:42Z nicb $
#
OUTPUT=data_in_ram.pdf data_struct_in_ram.pdf
INKSCAPE=inkscape -dpi 90

all:	$(OUTPUT)

clean:
	$(RM) $(OUTPUT)

.SUFFIXES: .pdf .svg

%.pdf:	%.svg
	$(INKSCAPE) -A $@ $<
