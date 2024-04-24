Proceso divisible
	definir num1, num2 como real;
	
	escribir "cual es el primer numero?";
	leer num1;
	escribir "cual es el segundo numero?";
	leer num2;
	
	si num1%num2=0 entonces
		escribir num1, " es divisible entre ", num2;
	sino
		escribir num1, " no es divisible entre ", num2;
	finsi
FinProceso