Proceso numMayor
	definir nums, mayor, i, n como real;
	dimensionar nums[100];
	
	mayor<-0;
	
	escribir "cuantos numeros quiere ingresar (del 1-100)?";
	leer n;
	
	para i<-0 hasta n-1 hacer
		escribir "ingrese el numero ", i+1, ":";
		leer nums[i];
	FinPara
	
	para i<-0 hasta n-1 hacer
		Si nums[i] > mayor Entonces
			mayor<-nums[i];
		FinSi
	FinPara
	
	escribir mayor;
	
FinProceso