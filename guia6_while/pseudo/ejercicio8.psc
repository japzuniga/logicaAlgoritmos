Proceso productoPunto
	definir i, vector1, vector2, producto como entero;
	dimensionar vector1[2], vector2[2];
	producto <- 0;
	
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
		producto <- producto + (vector1[i] * vector2[i]);
		i <- i + 1;
	FinMientras
	
	escribir "el producto punto de los dos vectores ingresados es: ", producto;
FinProceso