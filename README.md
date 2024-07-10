# Student Course Registration

Bu proje, bir öğrenci ders kayıt uygulamasıdır. Uygulama, yeni öğrenci kayıtları ekleme, mevcut kayıtları listeleme, kayıtları silme, kayıtları arama ve en yüksek ortalamalı öğrenciyi bulma işlemlerini gerçekleştirir.

## Kullanılan Sınıflar
- **Menu:** Ana menüyü ve kullanıcıdan alınan girişleri işler.
- **Ogrenci:** Öğrenci bilgilerini tutar ve yönetir.
- **DogumTarihi:** Öğrencinin doğum tarihi bilgilerini tutar.
- **Isim:** Öğrencinin ad ve soyad bilgilerini tutar.
- **Ders:** Öğrencinin ders bilgilerini tutar.

## Derleme ve Çalıştırma
Projeyi terminal üzerinden derlemek ve çalıştırmak için aşağıdaki adımları izleyin:

### Derleme
Aşağıdaki komutu kullanarak projeyi derleyebilirsiniz:
```sh
g++ -o main main.cpp Menu.cpp Isim.cpp DogumTarihi.cpp Ders.cpp Ogrenci.cpp
```
```
./main
```
