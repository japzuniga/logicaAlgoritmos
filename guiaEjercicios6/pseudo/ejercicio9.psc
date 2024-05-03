Proceso multMatrices
	definir matriz1, matriz2, matriz3, i, j, k como entero;
	dimensionar matriz1[2,2], matriz2[2,2], matriz3[2,2];
	
	para i<-0 hasta 1 con paso +1 Hacer
		para j<-0 hasta 1 con paso +1 Hacer
			matriz3[i,j] <- 0;
		FinPara
	FinPara
	
	escribir "matriz 1:";
	para i<-0 hasta 1 con paso +1 Hacer
		para j<-0 hasta 1 con paso +1 Hacer
			escribir "ingresar numero en fila ", i+1, ", columna ", j+1, ":";
			leer matriz1[i,j];
		FinPara
	FinPara
	
	escribir "matriz 2:";
	para i<-0 hasta 1 con paso +1 Hacer
		para j<-0 hasta 1 con paso +1 Hacer
			escribir "ingresar numero en fila ", i+1, ", columna ", j+1, ":";
			leer matriz2[i,j];
		FinPara
	FinPara
	
	para i<-0 hasta 1 con paso +1 Hacer
		para j<-0 hasta 1 con paso +1 Hacer
			para k<-0 hasta 1 con paso +1 Hacer
				matriz3[i,j] <- matriz3[i,j] + (matriz1[i,k] * matriz2[k,j]);
			FinPara
		FinPara
	FinPara
	
	escribir "el producto de las dos matrices ingresadas es:";
	para i<-0 hasta 1 con paso +1 Hacer
		para j<-0 hasta 1 con paso +1 Hacer
			escribir matriz3[i,j];
		FinPara
	FinPara
FinProceso