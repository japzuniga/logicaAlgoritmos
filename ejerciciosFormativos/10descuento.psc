Proceso descuento
	definir cantidad como entero;
	definir precioUnidad, precioTotal, precioPagar, desc como real;
	definir producto como cadena;
	
	escribir "que producto compro?";
	leer producto;
	escribir "cuantas unidades compro?";
	leer cantidad;
	escribir "cuanto cuesta por unidad?";
	leer precioUnidad;
	
	precioTotal <- (precioUnidad*cantidad);
	desc <- precioTotal*0.1;
	precioPagar <- precioTotal - desc;
	
	escribir "con un descuento de 10%, su(s) ", producto, " le costaran ", precioPagar;
FinProceso