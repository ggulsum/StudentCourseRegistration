#ifndef MENU_H
#define MENU_H

class Menu{
    public:
        Menu();
        ~Menu();

        void inputAl(char *);
        int anaMenu();
        void giris();
        void yeniKayit();
        void listele();
        void kayitSil();
        void kayitBul();
        void enYuksekOrtalama();
    };

#endif