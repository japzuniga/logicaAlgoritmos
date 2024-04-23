Proceso descuentoVolumen
	definir factura, pago como real;
	escribir "cuanto tiene que pagar?";
	leer factura;
	
	si factura >= 1000 entonces
		pago <- factura - (factura*0.2);
		escribir "debido al volumen de su factura, le aplicamos un descuento de 20%, su nuevo total a pagar es ", pago;
	sino
		escribir "su factura no aplica para el descuento por volumen";
	FinSi
FinProceso