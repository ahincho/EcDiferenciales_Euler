
Ejecutable.exe : Main.o Calculadora.o
	g++ Main.o Calculadora.o -o Ejecutable.exe

Main.o : Main.cc
	g++ -c Main.cc

Calculadora.o : Calculadora.cc
	g++ -c Calculadora.cc

.PHONY : clean
clean : 
	rm -f *.o Ejecutable.exe