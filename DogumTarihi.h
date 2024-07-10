#ifndef DOGUMTARIHI_H
#define DOGUMTARIHI_H


class DogumTarihi
{
    private:
        int gun, ay, yil;

    public:
        DogumTarihi();
        DogumTarihi(int, int, int);
        ~DogumTarihi();
    
        // setter  -> kaydetme kismimiz
        void setGun(int);
        void setAy(int);
        void setYil(int);

        int getGun();
        int getAy();
        int getYil();

        // ekleme
        void ekle(int, int, int);

        // dogum taihlerini gosterme
        void goster();
}; 

#endif