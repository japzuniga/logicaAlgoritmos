Proceso multMatrices
	definir matriz1, matriz2, matriz3, i, j, k como entero;
	dimensionar matriz1[2,2], matriz2[2,2], matriz3[2,2];
	
	i <- 0;
	mientras (i <= 1) Hacer
		j <- 0;
		mientras (j <= 1) Hacer
			matriz3[i,j] <- 0;
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	escribir "matriz 1:";
	i <- 0;
	mientras (i <= 1) Hacer
		j <- 0;
		mientras (j <= 1) Hacer
			escribir "ingresar numero en fila ", i+1, ", columna ", j+1, ":";
			leer matriz1[i,j];
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	escribir "matriz 2:";
	i <- 0;
	mientras (i <= 1) Hacer
		j <- 0;
		mientras (j <= 1) Hacer
			escribir "ingresar numero en fila ", i+1, ", columna ", j+1, ":";
			leer matriz2[i,j];
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	i <- 0;
	mientras (i <= 1) Hacer
		j <- 0;
		mientras (j <= 1) Hacer
			k <- 0;
			mientras (k <= 1) Hacer
				matriz3[i,j] <- matriz3[i,j] + (matriz1[i,k] * matriz2[k,j]);
				k <- k + 1;
			FinMientras
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	escribir "el producto de las dos matrices ingresadas es:";
	i <- 0;
	mientras (i <= 1) Hacer
		j <- 0;
		mientras (j <= 1) Hacer
			escribir matriz3[i,j];
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
FinProceso