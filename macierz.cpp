#include "macierz.h"

Macierz:: Macierz()
{

}

Macierz Dodaj (Macierz A, Macierz B){
    Macierz wynik;
    for (int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            wynik.Mac[i][j]=A.Mac[i][j]+B.Mac[i][j];
        }
    }
    return wynik;
}
Macierz Odejmij (Macierz A, Macierz B){
    Macierz wynik;
    for (int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            wynik.Mac[i][j]=A.Mac[i][j]-B.Mac[i][j];
        }
    }
    return wynik;
}
Macierz Pomnoz (Macierz A, Macierz B){
    Macierz wynik;
    for (int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            wynik.Mac[i][j]=A.Mac[i][0]*B.Mac[i][0]+A.Mac [i][1]*B.Mac[i][1]+A.Mac[i][2]*B.Mac [i][2];
        }
    }
    return wynik;
}

Macierz Transponuj (Macierz A){
    Macierz wynik;
    for (int i=0; i<3; i++){
        for(int j = 0; j<3; j++){

            wynik.Mac[i][j]=A.Mac [j][i];
        }
    }
    return wynik;
}
int wyznacznik (Macierz A){
    int wynik;
    wynik = A.Mac[0][0]*A.Mac[1][1]*A.Mac[2][2]+A.Mac[0][1]*A.Mac[1][2]*A.Mac[2][2]+A.Mac[0][2]*A.Mac[1][0]*A.Mac[2][1]-(A.Mac[0][2]*A.Mac[1][0]*A.Mac[2][1]+A.Mac[0][0]*A.Mac[1][2]*A.Mac[2][1]+A.Mac[0][1]*A.Mac[1][0]*A.Mac[2][2]);
   return wynik;
}



