Proceso promedio10
	definir i como entero;
	definir notas, suma, promedio como real;
	dimensionar notas[10];
	suma <- 0;
	
	i <- 0;
	mientras i < 10 Hacer
		escribir "ingresar nota:";
		leer notas[i];
		i <- i + 1;
	FinMientras
	
	i <- 0;
	mientras i < 10 Hacer
		suma <- suma + notas[i];
		i <- i + 1;
	FinMientras
	
	promedio <- suma/10;
	escribir "el promedio de la clase es: ", promedio;
FinProceso