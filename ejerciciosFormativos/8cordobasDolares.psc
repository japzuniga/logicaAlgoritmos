Algoritmo cordobasDolares
	definir usdCantidad, corCantidad, tasaCambio como real;
	tasaCambio <- 0.0274;
	
	escribir "cuantos cordobas quiere cambiar?";
	leer corCantidad;
	
	usdCantidad <- corCantidad*tasaCambio;
	escribir "su(s) ", corCantidad, " cordobas son ", usdCantidad, " dolares.";
FinAlgoritmo