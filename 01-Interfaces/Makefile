programa: Conversion.o TablasDeConversion.o
	gcc	Conversion.o TablasDeConversion.o -o TablasDeConversion

Conversion.o: Conversion.c Conversion.h
	gcc -c Conversion.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	gcc -c TablasDeConversion.c

clean:
	rm -f TablasDeConversion.exe TablasDeConversion.o Conversion.o