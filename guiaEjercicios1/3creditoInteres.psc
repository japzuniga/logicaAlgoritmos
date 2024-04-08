Proceso creditoInteres
	definir montoInicial Como real;
	definir interes como real;
	definir montoFinal como real;
	
	escribir "cuanto fue su monto inicial?";
	leer montoInicial;
	
	interes <- montoInicial * (0.03*5);
	montoFinal <- interes + montoInicial;
	escribir "su monto final es ", montoFinal;
	
FinProceso