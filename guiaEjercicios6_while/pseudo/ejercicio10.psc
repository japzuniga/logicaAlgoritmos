Proceso matrizTrans
    definir fila, columna, matriz, transpuesta como entero;
    dimensionar matriz[2,3], transpuesta[3,2];
    
    fila <- 0;
    mientras fila <= 1 Hacer;
        columna <- 0;
        mientras columna <= 2 Hacer;
            escribir "ingresar numero en fila ", fila+1, ", columna ", columna+1, ":"; 
            leer matriz[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        fila <- fila + 1;
    Fin Mientras;
    
    fila <- 0;
    mientras fila <= 1 Hacer;
        columna <- 0;
        mientras columna <= 2 Hacer;
            transpuesta[columna, fila] <- matriz[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        fila <- fila + 1;
    Fin Mientras;
    
    Escribir "matriz ingresada:"; 
    fila <- 0;
    mientras fila <= 1 Hacer;
        columna <- 0;
        mientras columna <= 2 Hacer;
            Escribir matriz[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        fila <- fila + 1;
    Fin Mientras;
    
    Escribir "matriz transpuesta:"; 
    fila <- 0;
    mientras fila <= 2 Hacer;
        columna <- 0;
        mientras columna <= 1 Hacer;
            Escribir transpuesta[fila, columna];
            columna <- columna + 1;
        Fin Mientras;
        fila <- fila + 1;
    Fin Mientras;
FinProceso