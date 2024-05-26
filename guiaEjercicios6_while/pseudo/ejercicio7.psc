Proceso sumaVectores
	definir i, vector1, vector2, vector3 como entero;
	dimensionar vector1[2], vector2[2], vector3[2];
	
	i <- 0;
	mientras i <= 1 Hacer
		escribir "ingresar numero ", i+1, " a vector 1:";
		leer vector1[i];
		escribir "ingresar numero ", i+1, " a vector 2:";
		leer vector2[i];
		i <- i + 1;
	FinMientras
	
	i <- 0;
	mientras i <= 1 Hacer
		vector3[i] <- vector1[i] + vector2[i];
		i <- i + 1;
	FinMientras
	
	escribir "la suma de los dos vectores ingresados es:";
	i <- 0;
	mientras i <= 1 Hacer
		escribir vector3[i];
		i <- i + 1;
	FinMientras
FinProceso