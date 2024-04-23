Proceso sumaN
	definir suma, nums, i, n como entero;
	dimension nums[100];
	i<-0;
	suma<-0;
	
	escribir "cuantos numeros quiere sumar (1-100)?";
	leer n;
	
	Para i<-0 Hasta n-1 Con Paso i+1 Hacer
		escribir "numero ", i+1, ":";
		leer nums[i];
		suma <- suma + nums[i];
	FinPara
	
	escribir suma;
FinProceso
