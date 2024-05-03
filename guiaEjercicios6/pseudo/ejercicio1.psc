Proceso sumarHastaN
	definir i, num, suma como entero;
	escribir "hasta que numero quiere sumar?";
	leer num;
	suma <- 0;
	
	si (num < 1) Entonces
		escribir "error: el numero ingresado no es un numero natural";
	SiNo
		para i<-1 hasta num con paso +1 Hacer
			suma <- suma + i;
		FinPara
	FinSi
	
	escribir "la suma de los numeros naturales desde 1 hasta ", num, " es: ", suma;
FinProceso