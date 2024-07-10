#include "Ders.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

Ders::Ders(){}

Ders::Ders(int dk, char * da){
    dersKodu = dk;
    strcpy(dersAdi,da);
}

Ders::~Ders(){}

void Ders::setdersAdi(char * da ){
    strcpy(dersAdi,da);
}

void Ders::setdersKodu(int dk){
    dersKodu = dk;
}

char * Ders::getdersAdi(){
    return dersAdi;
}

int Ders::getdersKodu(){
    return dersKodu;
}

void Ders::ekle(int dk, char * da){
    dersKodu = dk;
    strcpy(dersAdi,da);    
}

void Ders::goster(){
    cout << "Ders Kodu / Adi: " << dersKodu << " / " << dersAdi << endl;
}