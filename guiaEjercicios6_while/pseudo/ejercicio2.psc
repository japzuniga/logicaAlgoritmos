Proceso numerosImpares
	definir i como entero;
	escribir "imprimiendo los numeros naturales desde 100:";
	i <- 100;
	Mientras i >= 0 Hacer
		si (i%2 == 1) Entonces
			escribir i;
		FinSi
		i <- i - 1;
	FinMientras
FinProceso