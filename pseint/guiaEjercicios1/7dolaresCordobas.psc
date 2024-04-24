Algoritmo dolaresCordobas
	definir usdCantidad, corCantidad, tasaCambio como real;
	tasaCambio <- 36.5025;
	
	escribir "cuantos dolares quiere cambiar?";
	leer usdCantidad;
	
	corCantidad <- usdCantidad*tasaCambio;
	escribir "su(s) ", usdCantidad, " dolares son ", corCantidad, " cordobas.";
FinAlgoritmo