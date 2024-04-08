Proceso areaLadrillos
	definir metrosX, metrosY, areaCuadrada, cantidadLadrillos  como entero;
	
	escribir "cuantos metros mide de largo el area?";
	leer metrosX;
	escribir "cuantos metros mide de ancho el area?";
	leer metrosY;
	
	areaCuadrada <- metrosX * metrosY;
	cantidadLadrillos <- areaCuadrada*20;
	
	escribir "para cubrir un area de ", areaCuadrada, " metros cuadrados con ladrillos, se necesitarian ", cantidadLadrillos, " ladrillos.";
FinProceso
