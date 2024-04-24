Proceso bisiesto
	definir year como entero;
	definir check, mult4, mult100, mult400 como logico;
	
	check<-falso;
	
	escribir "que año quiere verificar?";
	leer year;
	
	si (year%4)=0 entonces
		mult4<-verdadero;
	SiNo
		mult4<-falso;
	FinSi
	
	si (year%100)=0 entonces
		mult100<-verdadero;
	SiNo
		mult100<-falso;
	FinSi
	
	si (year%400)=0 entonces
		mult400<-verdadero;
	SiNo
		mult400<-falso;
	FinSi
	
	si mult4=verdadero O mult400=verdadero entonces
		check<-verdadero;
		si mult100=verdadero Y ~(mult400=verdadero) entonces
			check<-falso;
		FinSi
	FinSi
	
	si check=verdadero entonces
		escribir year, " es un año bisiesto";
	SiNo
		escribir year, " no es un año bisiesto";
	FinSi
FinProceso