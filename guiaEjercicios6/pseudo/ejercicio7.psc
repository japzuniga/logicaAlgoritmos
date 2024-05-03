Proceso sumaVectores
	definir i, vector1, vector2, vector3 como entero;
	dimensionar vector1[2], vector2[2], vector3[2];
	
	para i<-0 hasta 1 con paso +1 Hacer
		escribir "ingresar numero ", i+1, " a vector 1:";
		leer vector1[i];
		escribir "ingresar numero ", i+1, " a vector 2:";
		leer vector2[i];
	FinPara
	
	para i<-0 hasta 1 con paso +1 Hacer
		vector3[i] <- vector1[i] + vector2[i];
	FinPara
	
	escribir "la suma de los dos vectores ingresados es:";
	para i<-0 hasta 1 con paso +1 Hacer
		escribir vector3[i];
	FinPara
FinProceso