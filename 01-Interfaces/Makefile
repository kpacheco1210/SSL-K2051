all: programa testPrograma

programa: Conversion.o TablasDeConversion.o
	gcc	Conversion.o TablasDeConversion.o -o TablasDeConversion

testPrograma: Conversion.o ConversionTest.o
	gcc Conversion.o ConversionTest.o -o ConversionTest

ConversionTest.o: ConversionTest.c
	gcc -c ConversionTest.c

Conversion.o: Conversion.c Conversion.h
	gcc -c Conversion.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h TablasDeConversion.h
	gcc -c TablasDeConversion.c

clean:
	rm -f TablasDeConversion.exe TablasDeConversion.o Conversion.o ConversionTest.o