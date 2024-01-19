#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int Inteligence =(rand() % 20) + 1;
    int Stamina =(rand() % 20-Inteligence) + 1;
    int Charisma =(rand() % 20-Inteligence-Stamina) + 1;
    
    if(Inteligence>Stamina&&Inteligence>Charisma)
    {
        printf("あなたのクラスは[mage]です");
    }
    if(Stamina>Inteligence&&Stamina>Charisma)
    {
        printf("あなたのクラスは[knight]です");
    }
    if(Charisma>Inteligence&&Charisma>Stamina)
    {
        printf("あなたのクラスは[shirf]です");
    }
    return 0;
}
