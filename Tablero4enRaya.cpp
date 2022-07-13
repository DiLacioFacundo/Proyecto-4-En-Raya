	#include <stdio.h>
#include <windows.h>
 
void dTablero( char tablero[] );
void jugada(int *jugador, char tablero[]);
int verificar( int *jugador, char a[] );
 
int main(void){
        int jugador = 1;
        char tablero[41] = "";
 
        dTablero( tablero );
        jugada( &jugador, tablero );
 
        return 0;
}
 
void dTablero( char tablero[] ){
        system( "CLS" );
 
        printf("\n\nTablero del 4 en raya\n\n");
        printf("\t||====+====+====+====+====+====+====+====||\n");
        printf("\t|| %c || %c || %c|| %c || %c || %c  || %c||\n", tablero[0], tablero[1], tablero[2], tablero[3], tablero[4], tablero[5], tablero[6]);
        printf("\t||====+====+====+====+====+====+====+====||\n");
        printf("\t|| %c || %c || %c|| %c || %c || %c || %c ||\n ", tablero[7], tablero[8], tablero[9], tablero[10], tablero[11], tablero[12],  tablero[13]);
        printf("\t||====+====+====+====+====+====+====+====||\n");
        printf("\t|| %c || %c || %c|| %c || %c || %c || %c ||\n ", tablero[14], tablero[15], tablero[16], tablero[17], tablero[18], tablero[19],  tablero[20]);
        printf("\t||====+====+====+====+====+====+====+====||\n");
        printf("\t|| %c || %c || %c|| %c || %c || %c || %c ||\n ", tablero[21], tablero[22], tablero[23], tablero[24], tablero[25], tablero[26],  tablero[27]);
        printf("\t||====+====+====+====+====+====+====+====||\n");
        printf("\t|| %c || %c || %c|| %c || %c || %c || %c ||\n ", tablero[28], tablero[29], tablero[30], tablero[31], tablero[32], tablero[33],  tablero[34]);
        printf("\t||====+====+====+====+====+====+====+====||\n");
        printf("\t|| %c || %c || %c|| %c || %c || %c || %c ||\n ", tablero[35], tablero[36], tablero[37], tablero[38], tablero[39], tablero[40],  tablero[41]);
        printf("\t||====+====+====+====+====+====+====+====||\n");
        
}
