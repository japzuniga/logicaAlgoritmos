Proceso paresImpares
	definir num, pares, impares, suma, producto, i, n como entero;
	escribir "cuantos numeros quiere usar?";
	leer n;
	
	i<-0;
	suma<-0;
	producto<-1;
	
	para i<-0 hasta n-1 hacer
		escribir "ingrese el numero ", i+1, ":";
		leer num;
		si num mod 2 = 0 Entonces
			suma <- suma + num;
		SiNo
			producto <- producto * num;
		FinSi
	FinPara
	
	Escribir suma;
	Escribir  producto;
FinProceso