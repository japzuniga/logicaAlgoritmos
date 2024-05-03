Proceso promedio10
	definir i, x como entero;
	definir notas, suma, promedio como real;
	dimensionar notas[10];
	suma <- 0;
	
	para i<-0 hasta 9 con paso +1 Hacer
		escribir "ingresar nota:";
		leer notas[i];
	FinPara
	
	para x<-0 hasta 9 con paso +1 Hacer
		suma <- +notas[x];
	FinPara
	
	promedio <- suma/10;
	escribir "el promedio de la clase es: ", promedio;
FinProceso