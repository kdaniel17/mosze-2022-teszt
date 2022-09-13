#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //N_ElEMENTS
    std::cout << '1-100 ertekek duplazasa'; //; hiánya
    for (int i = 0; i<N_ELEMENTS; i++) //nincs megadva az iterálás vége, lépésköze
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMTS; i++) //egszer fut le
    {
        std::cout << "Ertek:" <<b[i]<<std::endl; //; hiánya és nincs érték kiiratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //int helyett double
    for (int i = 0; i < N_ELEMENTS; i++) //, helyett ;
    {
        atlag += b[i]; //; hiánya
    }
    atlag =atlag / N_ELEMENTS; //csak osztás kell
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "DRAGONITE" << std::endl;
    return 0;
}
