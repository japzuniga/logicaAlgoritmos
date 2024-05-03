Proceso pares100_200
	definir i, suma como entero;
	suma <- 0;
	
	para i<-100 hasta 200 con paso +1 Hacer
		si (i%2 == 0) Entonces
			suma <- +i;
		FinSi
	FinPara
	
	escribir "la suma de los numeros pares entre 100 y 200 es: ", suma;
FinProceso