Proceso pares100_200
	definir i, suma como entero;
	suma <- 0;
	
	i <- 100;
	mientras (i <= 200) Hacer
		si (i%2 == 0) Entonces
			suma <- suma + i;
		FinSi 
		i <- i + 1;
	FinMientras
	
	escribir "la suma de los numeros pares entre 100 y 200 es: ", suma;
FinProceso