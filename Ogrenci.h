#ifndef OGRENCI_H
#define OGRENCI_H
#include "Ders.h"
#include "Isim.h"
#include "DogumTarihi.h"

class Ogrenci{
    private:
        int numara, ortalama;
        DogumTarihi dogumT;
        Ders ders;
        Isim isim;
        
    public:
        Ogrenci();
        Ogrenci(DogumTarihi , Ders , Isim , int , int );
        ~Ogrenci();
    
    void setNumara(int);
    void setOrtalama(int);
    
    int getNumara();
    int getOrtalama();

    void kaydet(DogumTarihi , Ders , Isim , int , int );
    void goster();

    

    
};


#endif