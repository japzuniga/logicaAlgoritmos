Proceso infoPersonal
	definir nombre como caracter;
	definir apellido como caracter;
	definir edad como entero;
	definir edadDias como entero;
	definir peso Como Entero;
	definir pesoKilos como real;
	
	escribir "cual es su nombre?";
	leer nombre;
	escribir "cual es su apellido?";
	leer apellido;
	escribir "cual es su edad en años?";
	leer edad;
	escribir "cual es su peso en libras?";
	leer peso;
	
	edadDias <- edad*365;
	pesoKilos <- peso*0.45;
	
	escribir "su edad en dias es ", edadDias;
	escribir "su peso en kilos es ", pesoKilos;
	escribir "su nombre completo es ", nombre, " ", apellido;
FinProceso
