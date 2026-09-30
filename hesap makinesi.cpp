#include <iostream>
#include <cmath>
#include <clocale> // setlocale için gerekli kütüphane

using namespace std;

int main(){
    // Tüm işletim sistemlerinde (Linux, Windows, macOS) sistem dilini/UTF-8'i baz alarak Türkçe karakterleri destekler:
   setlocale(LC_ALL, "tr_TR.UTF-8");

    int sayi1, sayi2, sayi3;
    cout << "1. Sayıyı Gir:\n";
    cin >> sayi1;
    cout << "2. Sayıyı Gir:\n";
    cin >> sayi2;
    cout << "3. Sayıyı Gir:\n";
    cin >> sayi3;

    int toplam = sayi1 + sayi2 + sayi3;
    int cikarma = sayi3 - sayi2 - sayi1;
    double bolme1 = (double)sayi1 / sayi2;
    double bolme2 = (double)sayi2 / sayi3;
    double bolme3 = (double)sayi1 / sayi3;
    int carpma = sayi1 * sayi2 * sayi3;
    
    double karekok1 = sqrt(sayi1);
    double karekok2 = sqrt(sayi2);
    double karekok3 = sqrt(sayi3);
    
    // pow fonksiyonu double döndürür, sonucu ondalıklı tutmak için double yaptık
    double us1 = pow(sayi1, sayi2);
    double us2 = pow(sayi2, sayi3);
    double us3 = pow(sayi1, sayi3);

    cout << "İşlem Seçiniz\n";
    cout << "1 numaralı işlem toplama, 2 numaralı işlem çıkarma;\n";
    cout << "3, 4, 5 numaralı işlemler bölme, 6 numaralı işlem çarpma;\n";
    cout << "7, 8, 9 numaralı işlemler üs alma;\n";
    cout << "10, 11 ve 12 numaralı işlemler karekök almadır.\n";

    int karakter;
    cin >> karakter;

    if(karakter == 1){
        cout << "Toplama İşlemi Yapiliyor...\n" << toplam;
    }
    else if(karakter == 2){
        cout << "Çıkarma İşlemi Yapiliyor...\n" << cikarma;
    }
    else if(karakter == 3){
        cout << "1. Bölme İşlemi Yapiliyor...\n" << bolme1;
    }
    else if(karakter == 4){
        cout << "2. Bölme İşlemi Yapiliyor...\n" << bolme2;
    }
    else if(karakter == 5){
        cout << "3. Bölme İşlemi Yapiliyor...\n" << bolme3;
    }
    else if(karakter == 6){
        cout << "Çarpma İşlemi Yapiliyor...\n" << carpma;
    }
    else if(karakter == 7){
        cout << "1. Üs Alma İşlemi Yapiliyor...\n" << us1;
    }
    else if(karakter == 8){
        cout << "2. Üs Alma İşlemi Yapiliyor...\n" << us2;
    }
    else if(karakter == 9){
        cout << "3. Üs Alma İşlemi Yapiliyor...\n" << us3;
    }
    else if(karakter == 10){
        cout << "1. Karekök İşlemi Yapiliyor...\n" << karekok1;
    }
    else if(karakter == 11){
        cout << "2. Karekök İşlemi Yapiliyor...\n" << karekok2;
    }
    else if(karakter == 12){
        cout << "3. Karekök İşlemi Yapiliyor...\n" << karekok3;
    }
    else{
        cout << "Lütfen tanımlı bir işlem tuşuna basınız (1'den 12'ye kadar [1 ve 12 dahildir]).";
    }

    return 0;
}