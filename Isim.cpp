#include "Isim.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

Isim::Isim(){}

Isim::Isim(char * a, char * s){
    strcpy(ad,a);
    strcpy(soyad,s);
}

Isim::~Isim(){}

void Isim::setAd(char * a){
    strcpy(ad,a);
}

void Isim::setSoyad(char * s){
    strcpy(soyad,s);
}

char * Isim::getAd(){
    return ad;
}

char * Isim::getSoyad(){
    return soyad;
}

void Isim::ekle(char * a, char * s){
    strcpy(ad,a);
    strcpy(soyad,s);
}

void Isim::goster(){
    cout << "Ad - Soyad: " << ad << " " << soyad << endl;
}