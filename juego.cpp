#include <stdio.h>
#include <windows.h>
#include <iostream>
  
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
 using namespace std;
void dTablero(char c = 'A', char b = '1' ){

for(int i = 0; i<7; i++){
    cout<<" ";
    for(int j = 0; j<3; j++){
        if(j == 1){
          cout<<c;
          c++;
        }else{
            cout<<" ";
            
        }
    }
}
cout<<endl;
for(int i = 1; i<=12; i++){
	if(i==1 || i==3 || i==5 || i==7 || i==9 || i==11) {
		cout<<b;
       	b++;
		
}
else {
	cout<<" ";
}
	    
    for(int j = 0; j<8; j++){
    	
        cout<<"|";
        
        if(i%2==0 && i>1 && j<7 ){

            for(int jj = 0; jj<3; jj++){
                cout<<"-";
                
            }
        }else{
            for(int jj = 0; jj<3; jj++){
                cout<<" ";
            }
        }
    }
    cout<<endl;
}
    
return 0;
}
void jugada(int *jugador, char tablero[] ){
        int i, ch, ok, casillero, final = 0;
 
        for( i = 0; i < 42; i++){
                do{
                        do{
                  dTablero( tablero );
                                printf( "\n\n\t ==> Jugador numero %d <==\n", *jugador );
                                printf( "\n Ingrece un entero del 1 al 42 para indicar el casillero a marcar...: " );
                                ok = scanf( "%d", &casillero ) == 1 && casillero >= 1 && casillero <= 9;
                                while ((ch = getchar()) != EOF && ch != '\n');
                        }while(!ok);
                        if( tablero[casillero-1] == 0 ){
                                if( *jugador == 1 ){
                                        tablero[casillero-1] = 'X';
                                        final = verificar( jugador, tablero );
                                        if (final == 0) *jugador = 2;
                                }
                                else{
                                        tablero[casillero-1] = '0';
                                        final = verificar( jugador, tablero );
                                        if (final == 0) *jugador = 1;
                                }
                        }
                        else{
                                ok = 0;
                                printf( "\n\n\t ==> Jugador numero %d <==\n", *jugador );
                                printf( "\n Ingrece un entero del 1 al 42 para indicar el casillero a marcar...: " );
                        }
                }while(!ok);
 
 
                if( final > 0 ){
                        dTablero( tablero );
                        printf( "\n\n !!! Ganador jugador numero %d !!!\n\n", *jugador );
                        break;
                }
        }
        return 0;
}
 
 

 
