Proceso promedio8
	definir i, aprobados, reprobados como entero;
	definir notas, suma, promedio como real;
	dimensionar notas[10];
	suma <- 0;
	aprobados <- 0;
	reprobados <- 0;
	
	para i<-0 hasta 9 con paso +1 Hacer
		escribir "ingresar nota:";
		leer notas[i];
	FinPara
	
	para i<-0 hasta 9 con paso +1 Hacer
		si (notas[i] > 70) Entonces
			aprobados <- aprobados + 1;
		SiNo
			reprobados <- reprobados + 1;
		FinSi
	FinPara
	
	para i<-0 hasta 9 con paso +1 Hacer
		suma <- suma + notas[i];
	FinPara
	
	promedio <- suma/10;
	escribir "el promedio de la clase es: ", promedio;
	escribir "estudiantes aprobados: ", aprobados;
	escribir "estudiantes reprobados: ", reprobados;
FinProceso