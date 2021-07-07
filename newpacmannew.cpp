
#include <stdio.h>
#include <iostream>

using namespace std;

bool Terminar;
const int width = 80;
const int height = 60;
const int score = 0;

enum direction {
    Stop = 0,
    LEFT,
    RIGHT,
    DOWN,
    UP
};



typedef struct {
    int x, y;
   
}Mob;

typedef struct {
    Mob coordenada;
    direction jogador;
    
}Player;


typedef struct {
    Mob coordenada;


}Fruit;

typedef struct {

    Mob coordenada;
    direction inimigo;
}Ghost;
 
void setup();
void processing();
void imput();
void logic();

int main()
{
    logic();

    return 0;
}

void setup() 
{
    Terminar = false;
    Player jogar;
    jogar.jogador = Stop;  
}

void processing() 
{
    system("cls");
     // clean the system,before the preview code.
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    
        for (int i = 0; i < height; i++) 
        {
            for (int j = 0; j < width; j++) 
            {
                if (j == 0)
                    cout << "#";
                
                    cout << " ";
                if (j == width - 1)
                    cout << "#";
           }
            cout << endl;
        } 
      for (int i = 0; i < width + 2; i++)
                cout << "#";
            cout << endl;  
}

void imput() 
{





}

void logic()
{

    setup();
    while (!Terminar) {
        processing();
        imput();
        logic();

    }

}