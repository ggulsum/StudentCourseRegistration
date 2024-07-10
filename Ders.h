#ifndef DERS_H
#define DERS_H

class Ders{
    private:
        char dersAdi[20];
        int dersKodu;

    public:
        Ders();
        Ders(int, char *);
        ~Ders();

    void setdersAdi(char * );
    void setdersKodu(int);

    char * getdersAdi();
    int getdersKodu();

    void ekle(int, char *);
    void goster();
};

#endif