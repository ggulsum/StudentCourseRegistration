#include "DogumTarihi.h"
#include <iostream>
using namespace std;

DogumTarihi::DogumTarihi(){}

DogumTarihi::DogumTarihi(int g, int a, int y){
    gun = g, ay = a; yil = y;
}

DogumTarihi::~DogumTarihi(){}

void DogumTarihi::setGun(int g){
    gun = g;
}

void DogumTarihi::setAy(int a){
    ay = a;
}

void DogumTarihi::setYil(int y){
    yil = y;
}

int DogumTarihi::getGun(){
    return gun;
}

int DogumTarihi::getAy(){
    return ay;
}

int DogumTarihi::getYil(){
    return yil;
}


void DogumTarihi::ekle(int g, int a, int y){
    gun = g, ay = a; yil = y;    
}

void DogumTarihi::goster(){
    cout << "Dogum Tarihi: " << gun << "." << ay << "." << yil << endl;
}