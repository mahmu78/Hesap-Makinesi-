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

    int toplam1 = sayi1 + sayi2 + sayi3;
    int toplama2=sayi1+sayi2;
    int toplama3=sayi1+sayi3;
    int toplama4=sayi2+sayi3;
    int cikarma1 = sayi3 - sayi2 - sayi1;
    int cikarma2 = sayi3-sayi2;
    int cikarma3= sayi2-sayi1;
    int cikarma4= sayi3-sayi1;
    double bolme1 = (double)sayi1 / sayi2;
    double bolme2 = (double)sayi2 / sayi3;
    double bolme3 = (double)sayi1 / sayi3;
    double bolme4= (double)sayi1/sayi2/sayi3;
    int carpma1 = sayi1 * sayi2 * sayi3;
    int carpma2 = sayi1*sayi2;
    int carpma3=sayi1*sayi3;
    int carpma4=sayi2*sayi3;
    
    double karekok1 = sqrt(sayi1);
    double karekok2 = sqrt(sayi2);
    double karekok3 = sqrt(sayi3);
    
    // pow fonksiyonu double döndürür, sonucu ondalıklı tutmak için double yaptık
    double us1 = pow(sayi1, sayi2);
    double us2 = pow(sayi2, sayi3);
    double us3 = pow(sayi1, sayi3);

    cout << "İşlem Seçiniz\n";
    cout << "1,2,3,4 numaralı işlem toplama; 5,6,7,8 numaralı işlem çıkarma;\n";
    cout << "9,10,11,12 numaralı işlemler çarpma;13,14,15,16  numaralı işlem bölme;\n";
    cout << "17, 18, 19 numaralı işlemler üs alma;\n";
    cout << "20, 21 ve 22 numaralı işlemler karekök almadır.\n";

    int karakter;
    cin >> karakter;

    if(karakter == 1){
        cout << "1.Toplama İşlemi Yapiliyor...\n" << toplam1;
    }
    else if(karakter == 2){
        cout << "2.Toplama İşlemi Yapiliyor...\n" << toplama2;
    }
    else if(karakter == 3){
        cout << "3.Toplama İşlemi Yapiliyor...\n" << toplama3;
    }
    else if(karakter == 4){
        cout << "4.Toplama İşlemi Yapiliyor...\n" << toplama4;
    }
    else if(karakter == 5){
        cout << "1. Çıkarma İşlemi Yapiliyor...\n" << cikarma1;
    }
    else if(karakter == 6){
        cout << "2.Çıkarma İşlemi Yapiliyor...\n" << cikarma2;
    }
    else if(karakter == 7){
        cout << "3.Çıkarma İşlemi Yapiliyor...\n" << cikarma3;
    }
    else if(karakter == 8){
        cout << "4.Çıkarma  İşlemi Yapiliyor...\n" << cikarma4;
    }
    else if(karakter == 9){
        cout << "1.Çarpma İşlemi Yapiliyor...\n" << carpma1;
    }
    else if(karakter == 10){
        cout << "2.Çarpma İşlemi Yapiliyor...\n" << carpma2;
    }
    else if(karakter == 11){
        cout << "3.Çarpma İşlemi Yapiliyor...\n" << carpma3;
    }
    else if(karakter == 12){
        cout << "4.Çarpma İşlemi Yapiliyor...\n" << carpma4;
    }
    else if(karakter == 13){
        cout << "1.Bölme İşlemi Yapiliyor...\n" << bolme1;
    }
     else if(karakter == 14){
        cout << "2.Bölme İşlemi Yapiliyor...\n" << bolme2;
    }
     else if(karakter == 15){
        cout << "3.Bölme İşlemi Yapiliyor...\n" << bolme3;
    }
     else if(karakter == 13){
        cout << "4.Bölme İşlemi Yapiliyor...\n" << bolme4;
    }
    else if(karakter==17){
          cout << "1.Üs Alma İşlemi Yapiliyor...\n" << us1;
    }
     else if(karakter==18){
          cout << "2.Üs Alma İşlemi Yapiliyor...\n" << us2;
    }
     else if(karakter==19){
          cout << "3.Üs Alma İşlemi Yapiliyor...\n" << us3;
    }
     else if(karakter==20){
          cout << "1.Karekök Alma İşlemi Yapiliyor...\n" << karekok1;
    }
     else if(karakter==21){
          cout << "2.Karekök Alma İşlemi Yapiliyor...\n" << karekok2;
    }
    else if(karakter==22){
          cout << "3.Karekök Alma İşlemi Yapiliyor...\n" << karekok3;
    }
    else{
        cout << "Lütfen tanımlı bir işlem tuşuna basınız (1'den 22'ye kadar [1 ve 22 dahildir]).";
    }

    return 0;
}
