
#include <iostream>
using namespace std;

int main(){

    //creación del tablero
    // a | b | c
    //-----------
    // d | e | f
    //-----------
    // g | h | i

    cout << "Tres en Raya" << endl << "Alumno 1: Olga Angelica Barreros Rodriguez"<< endl<< "Alumno 2: Sergio Manuel Sirena Malaga" << endl;


    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'f';
    char g = 'g';
    char h = 'h';
    char i = 'i';
    char j1;
    char j2;
    char sj1;
    char sj2;


    //imprimimos el tablero

    cout << "Aqui les mostraremos como funcionara el tablero: " << endl << endl;
    cout << " " << a << " " << "|" << " " << b << " " << "|"<< " " << c << " " << endl << "-----------" << endl << " " << d << " " << "|" << " " << e << " " << "|"<< " " << f << " " << endl<< "-----------"<< endl << " " << g << " " << "|" << " " << h << " " << "|"<< " " << i << " " << endl << endl;    


    //pedir x o 0

    cout << "Jugador 1 : ingrese si quiere jugar con X o O " << endl;
    cin>>j1 ;

    if (j1=='X'){
        j2='O';

    }
    else if (j1=='O'){
        j2='X';
    }
    
    cout<<"El jugador 1 es:"<<j1<<endl<<"el jugador 2 es :"<<j2<<endl;

    a=' ';
    b=' ';
    c=' ';
    d=' ';
    e=' ';
    f=' ';
    g=' ';
    h=' ';
    i=' ';
    char pos1;
    char pos2;
    int contador =1;

    while(true){
        if (contador % 2 ==1){
            cout<<"Jugador 1 ,Ingrese la posicion:"<<endl;
            cin>>pos1;
            
            if (pos1=='a'){
                a=j1;
            }

        
            else if(pos1=='b'){
                b=j1;
            }
            else if(pos1=='c'){
                c=j1;
            }
            else if(pos1=='d'){
                d=j1;
            }
            else if(pos1=='e'){
                e=j1;
            }
            else if(pos1=='f'){
                f=j1;
            }
            else if(pos1=='g'){
                g=j1;
            }
            else if(pos1=='h'){
                h=j1;
            }
            else if(pos1=='i'){
                i=j1;
            }    
        
        }  
           
        
        else{
            if (contador % 2==0){
                cout<<"Jugador 2 ,Ingrese la posicion:"<<endl;
                cin>>pos2;
            
                if (pos2=='a'){
                    a=j2;
                }
                else if(pos2=='b'){
                    b=j2;
                }
                else if(pos2=='c'){
                    c=j2;
                }
                else if(pos2=='d'){
                    d=j2;
                }
                else if(pos2=='e'){
                    e=j2;
                }
                else if(pos2=='f'){
                    f=j2;
                }
                else if(pos2=='g'){
                    g=j2;
                }
                else if(pos2=='h'){
                    h=j2;
                }
                else if(pos2=='i'){
                    i=j2;
                }    
             
            }    


        }
        contador=contador+1;

        cout << " " << a << " " << "|" << " " << b << " " << "|"<< " " << c << " " << endl << "-----------" << endl << " " << d << " " << "|" << " " << e << " " << "|"<< " " << f << " " << endl<< "-----------"<< endl << " " << g << " " << "|" << " " << h << " " << "|"<< " " << i << " " << endl << endl;  
        

        
    }




    



    





    return 0;
}