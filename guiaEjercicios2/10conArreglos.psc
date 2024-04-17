Proceso paresImpares
	definir nums, pares, impares, suma, producto, i, n como entero;
	escribir "cuantos numeros quiere usar (1-100)?";
	leer n;
	dimensionar nums[100], pares[100], impares[100];
	i<-0;
	suma<-0;
	producto<-1;
	
	para i<-0 hasta n-1 hacer
		escribir "ingrese el numero ", i+1, ":";
		leer nums[i];
	FinPara
	
	para i<-0 hasta n-1 hacer
		si (nums[i]%2)=0 entonces
			pares[i] <- nums[i];
		FinSi
		
		si ~((nums[i]%2)=0) entonces
			impares[i] <- nums[i];
		FinSi
	FinPara
	
	para i<-0 hasta n-1 hacer
		suma <- suma + pares[i];
		producto <- producto * impares[i];
	FinPara
	
	escribir suma;
	escribir producto;
	
FinProceso