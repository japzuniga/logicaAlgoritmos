Proceso promedio8
	definir i, aprobados, reprobados como entero;
	definir notas, suma, promedio como real;
	dimensionar notas[10];
	suma <- 0;
	aprobados <- 0;
	reprobados <- 0;
	
	i <- 0;
	mientras (i < 10) Hacer
		escribir "ingresar nota:";
		leer notas[i];
		i <- i + 1;
	FinMientras
	
	i <- 0;
	mientras (i < 10) Hacer
		si (notas[i] > 70) Entonces
			aprobados <- aprobados + 1;
		SiNo
			reprobados <- reprobados + 1;
		FinSi
		i <- i + 1;
	FinMientras
	
	i <- 0;
	mientras (i < 10) Hacer
		suma <- suma + notas[i];
		i <- i + 1;
	FinMientras
	
	promedio <- suma/10;
	escribir "el promedio de la clase es: ", promedio;
	escribir "estudiantes aprobados: ", aprobados;
	escribir "estudiantes reprobados: ", reprobados;
FinProceso