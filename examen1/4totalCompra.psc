Proceso totalCompra
	definir cantidad como entero;
	definir precio, total como real;
	definir producto como cadena;
	
	escribir "que producto compro?";
	leer producto;
	escribir "cuantos/as compro?";
	leer cantidad;
	escribir "cuanto cuesta el producto";
	leer precio;
	
	total <- precio*cantidad;
	
	escribir "su total a pagar es ", total;	
FinProceso