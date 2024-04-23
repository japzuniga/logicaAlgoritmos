Proceso convertirHoras
	definir hrs, mins, seg como entero;
	definir check como logico;
	
	escribir "cuantas horas quiere convertir?";
	leer hrs;
	escribir "escriba verdadero para convertir en minutos, o falso para convertir en segundos";
	leer check;
	
	Si check = verdadero Entonces
		mins <- hrs * 60;
		escribir hrs, " hora(s) tiene ", mins, " minutos";
	SiNo
		seg <- hrs * 3600;
		escribir hrs, " hora(s) tiene ", seg, " segundos";
	FinSi
FinProceso
