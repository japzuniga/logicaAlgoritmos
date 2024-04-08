Proceso interesInversion
	definir inversion, interes, tiempo, ganancia como real;
	definir tipo como logico;
	definir cantidadCalc como entero;
	
	escribir "cuanto invertio inicialmente?";
	leer inversion;
	escribir "cuanto interes le da su banco?";
	leer interes;
	escribir "por cuanto tiempo invirtio su dinero (en años)?";
	leer tiempo;
	escribir "que tipo de interes aplica su banco (0 para simple, 1 para compuesto)?";
	leer tipo;
	
	si tipo=verdadero entonces
		escribir "cuantas veces se calcula el interes por año?";
		leer cantidadCalc;
	FinSi
	
	si tipo=verdadero entonces
		ganancia <- inversion * (1 + (interes/cantidadCalc))^(cantidadCalc*tiempo);
	SiNo
		ganancia <- inversion + (inversion*interes*tiempo);
	FinSi
	
	si ganancia > 7000 entonces
		escribir "su retorno en su inversion es ", ganancia, ", por lo tanto, deberia reinvertirlo";
	SiNo
		escribir "su retorno en su inversion es ", ganancia, ", por lo tanto, no deberia reinvertirlo";
	FinSi
	
FinProceso
