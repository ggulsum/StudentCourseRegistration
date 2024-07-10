#include "Menu.h"
#include "Ders.h"
#include "Isim.h"
#include "DogumTarihi.h"
#include "Ogrenci.h"
#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

Ogrenci o1;
DogumTarihi dt1;
Isim i1;
Ders d1;

Menu::Menu(){}

Menu::~Menu(){}

void Menu::inputAl(char* ptr){
    scanf(" %[^\n]s", ptr);
}

int Menu::anaMenu(){
    int secim;
    cout << "Ogrenci Ders Kayit Uygulamasi" << endl;
    cout << "[1] Yeni Kayit " << endl;
    cout << "[2] Listele " << endl;
    cout << "[3] Kayit Sil " << endl;
    cout << "[4] Kayit Bul " << endl;
    cout << "[5] En Yuksek Ortalamali Ogrenciyi Goster " << endl;
    cout << "[0] Cikis " << endl;
    cout << "Seciminiz : " ; 
    cin >> secim;
    system("cls"); 
    return secim;
}

void Menu::giris(){
    int secim = anaMenu();
    while(secim!=0){
        switch(secim){
            case 1: yeniKayit(); break;
            case 2: listele(); break;
            case 3: kayitSil(); break;
            case 4: kayitBul(); break;
            case 5: enYuksekOrtalama(); break;
            default: cout << "Hatali Secim!" << endl; break;
        }
        secim = anaMenu();
    }
    cout << "Programi kapattiniz...." << endl;
}

void Menu::yeniKayit(){
    
    char kelime[30];
    int sayi;
    cout << "**** Yeni Kayit Ekrani ****" << endl;
    cout << "** Kimlik Bilgileri **" << endl;
    cout << "Ad: "; inputAl(kelime); 
    i1.setAd(kelime);
    cout << "Soyad: "; inputAl(kelime); 
    i1.setSoyad(kelime);   

    cout << "** Dogum Tarihi Bilgileri **" << endl; 
    cout << "Gun: " ; inputAl(kelime);  
    sayi =atoi(kelime);
    dt1.setGun(sayi);
    cout << "Ay: " ; inputAl(kelime);  
    sayi =atoi(kelime);
    dt1.setAy(sayi);   
    cout << "Yil: " ; inputAl(kelime);  
    sayi =atoi(kelime);
    dt1.setYil(sayi);

    cout << "** Ders Bilgileri **" << endl; 
    cout << "Ders Kodu: " ; inputAl(kelime);  
    sayi =atoi(kelime);
    d1.setdersKodu(sayi);   
    cout << "Ders Adi: "; inputAl(kelime); 
    d1.setdersAdi(kelime);     

    cout << "Numarasi: "; inputAl(kelime); 
    sayi =atoi(kelime);
    o1.setNumara(sayi);
    cout << "Ortalamasi: "; inputAl(kelime); 
    sayi =atoi(kelime);
    o1.setOrtalama(sayi);   

    ofstream file("ogrenciler.txt", ios::app);
    o1.kaydet(dt1,d1,i1,o1.getNumara(), o1.getOrtalama());

    file.write((char*)&o1, sizeof(Ogrenci));
    cout << "Kayit Tamam..." << endl;
    file.close();

    o1.goster();
}

void Menu::listele() {
    ifstream file("ogrenciler.txt");
    int sayac = 0;
    
    while(file.read((char*)&o1, sizeof(Ogrenci))) {
        sayac++;
        cout << endl;
        o1.goster();
    }
    
    if (sayac == 0) {
        cout << "Dosyada kayitli ogrenci bulunmamaktadir." << endl;
    } else {
        cout << "Listeleme Tamam!!" << endl;
        cout << "Toplam kayitli ogrenci sayisi: " << sayac << endl;
    }
    
    file.close();
}

void Menu::kayitSil(){
    listele();
    int sayi;
    char kelime[20];
    bool sonuc = false;

    cout << "Ogrenci Numarasi: " ; inputAl(kelime);
    sayi = atoi(kelime);

    ifstream file("ogrenciler.txt");
    ofstream file2("yedek.txt");

    while(file.read((char*)&o1, sizeof(Ogrenci))) {
        if(sayi == o1.getNumara()){
            sonuc= true;
        } else {
            file2.write((char*)&o1, sizeof(Ogrenci));
        }
    }
    
    file.close();
    file2.close();

    if(!sonuc){
        cout << sayi << " numarali ogrenci bulunamadi..." << endl;
    }
    else{
        remove("ogrenciler.txt");
        rename("yedek.txt", "ogrenciler.txt");
        cout << sayi << " numarali ogrenci kaydi silindi..." << endl;
    }
}

void Menu::kayitBul(){
    listele();
    int sayi;
    char kelime[20];
    bool sonuc = false;

    cout << "Ogrenci Numarasi: " ; inputAl(kelime);
    sayi = atoi(kelime);

    ifstream file("ogrenciler.txt");

    while(file.read((char*)&o1, sizeof(Ogrenci))) {
        if(sayi == o1.getNumara()){
            cout << endl;
            o1.goster();
            sonuc= true;
            break;
        }
    }
    
    file.close();
    if(!sonuc)
        cout << sayi << " numarali ogrenci bulunamadi..." << endl;
}

void Menu::enYuksekOrtalama(){
    listele();
    int buyuk = 0;
    bool sonuc = false;
    Ogrenci o2;
    o2.setOrtalama(0);

    ifstream file("ogrenciler.txt");

    while(file.read((char*)&o1, sizeof(Ogrenci))) {
        if(o2.getOrtalama() < o1.getOrtalama()){
            o2 = o1;
        }
    }
    
    file.close();
    cout << "En Yuksek Ortalamali Ogrenci: " << endl;
    o2.goster();
}
