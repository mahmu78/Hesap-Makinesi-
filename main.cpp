#include <iostream>
#include <cmath>
#include <clocale>
#include <fstream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "tr_TR.UTF-8");

    string kullaniciAdi;
    cout << "Lütfen kullanıcı adınızı giriniz: ";
    cin >> kullaniciAdi;

    char devamMi = 'e';

    // Kullanıcı çıkmak istemediği sürece döngü çalışmaya devam eder
    while (devamMi == 'e' || devamMi == 'E') {
        
        int sayi1, sayi2, sayi3;
        cout << "\n----------------------------------------\n";
        cout << "1. Sayıyı Gir: ";
        cin >> sayi1;
        cout << "2. Sayıyı Gir: ";
        cin >> sayi2;
        cout << "3. Sayıyı Gir: ";
        cin >> sayi3;

        // Tüm matematiksel hesaplamalar
        int toplam1 = sayi1 + sayi2 + sayi3;
        int toplama2 = sayi1 + sayi2;
        int toplama3 = sayi1 + sayi3;
        int toplama4 = sayi2 + sayi3;

        int cikarma1 = sayi3 - sayi2 - sayi1;
        int cikarma2 = sayi3 - sayi2;
        int cikarma3 = sayi2 - sayi1;
        int cikarma4 = sayi3 - sayi1;

        double bolme1 = (sayi2 != 0) ? (double)sayi1 / sayi2 : 0;
        double bolme2 = (sayi3 != 0) ? (double)sayi2 / sayi3 : 0;
        double bolme3 = (sayi3 != 0) ? (double)sayi1 / sayi3 : 0;
        double bolme4 = (sayi2 != 0 && sayi3 != 0) ? (double)sayi1 / sayi2 / sayi3 : 0;

        int carpma1 = sayi1 * sayi2 * sayi3;
        int carpma2 = sayi1 * sayi2;
        int carpma3 = sayi1 * sayi3;
        int carpma4 = sayi2 * sayi3;

        double karekok1 = (sayi1 >= 0) ? sqrt(sayi1) : 0;
        double karekok2 = (sayi2 >= 0) ? sqrt(sayi2) : 0;
        double karekok3 = (sayi3 >= 0) ? sqrt(sayi3) : 0;

        int kalan1 = (sayi1 != 0) ? sayi2 % sayi1 : 0;
        int kalan2 = (sayi2 != 0) ? sayi3 % sayi2 : 0;
        int kalan3 = (sayi1 != 0) ? sayi3 % sayi1 : 0;
        
        double us1 = pow(sayi1, sayi2);
        double us2 = pow(sayi2, sayi3);
        double us3 = pow(sayi1, sayi3);

        cout << "\n--- İŞLEM MENÜSÜ ---\n";
        cout << "1-4: Toplama | 5-8: Çıkarma | 9-12: Çarpma | 13-16: Bölme\n";
        cout << "17-19: Üs Alma | 20-22: Karekök | 23-25: Kalan (Mod)\n";
        cout << "Geçmiş işlemleri görmek için '99' tuşlayın.\n";
        cout << "İşlem Kodunu Seçiniz: ";

        int karakter;
        cin >> karakter;

        string sonucMetni = "";
        bool islemBasarili = true;

        // Switch-Case İle İşlem Yönetimi
        switch (karakter) {
            case 1: sonucMetni = "1. Toplama İşlemi Sonucu: " + to_string(toplam1); break;
            case 2: sonucMetni = "2. Toplama İşlemi Sonucu: " + to_string(toplama2); break;
            case 3: sonucMetni = "3. Toplama İşlemi Sonucu: " + to_string(toplama3); break;
            case 4: sonucMetni = "4. Toplama İşlemi Sonucu: " + to_string(toplama4); break;
            
            case 5: sonucMetni = "1. Çıkarma İşlemi Sonucu: " + to_string(cikarma1); break;
            case 6: sonucMetni = "2. Çıkarma İşlemi Sonucu: " + to_string(cikarma2); break;
            case 7: sonucMetni = "3. Çıkarma İşlemi Sonucu: " + to_string(cikarma3); break;
            case 8: sonucMetni = "4. Çıkarma İşlemi Sonucu: " + to_string(cikarma4); break;
            
            case 9: sonucMetni = "1. Çarpma İşlemi Sonucu: " + to_string(carpma1); break;
            case 10: sonucMetni = "2. Çarpma İşlemi Sonucu: " + to_string(carpma2); break;
            case 11: sonucMetni = "3. Çarpma İşlemi Sonucu: " + to_string(carpma3); break;
            case 12: sonucMetni = "4. Çarpma İşlemi Sonucu: " + to_string(carpma4); break;
            
            case 13: sonucMetni = "1. Bölme İşlemi Sonucu: " + to_string(bolme1); break;
            case 14: sonucMetni = "2. Bölme İşlemi Sonucu: " + to_string(bolme2); break;
            case 15: sonucMetni = "3. Bölme İşlemi Sonucu: " + to_string(bolme3); break;
            case 16: sonucMetni = "4. Bölme İşlemi Sonucu: " + to_string(bolme4); break;
            
            case 17: sonucMetni = "1. Üs Alma İşlemi Sonucu: " + to_string(us1); break;
            case 18: sonucMetni = "2. Üs Alma İşlemi Sonucu: " + to_string(us2); break;
            case 19: sonucMetni = "3. Üs Alma İşlemi Sonucu: " + to_string(us3); break;
            
            case 20: sonucMetni = "1. Karekök Alma İşlemi Sonucu: " + to_string(karekok1); break;
            case 21: sonucMetni = "2. Karekök Alma İşlemi Sonucu: " + to_string(karekok2); break;
            case 22: sonucMetni = "3. Karekök Alma İşlemi Sonucu: " + to_string(karekok3); break;
            
            case 23: sonucMetni = "1. Kalan Hesaplama Sonucu: " + to_string(kalan1); break;
            case 24: sonucMetni = "2. Kalan Hesaplama Sonucu: " + to_string(kalan2); break;
            case 25: sonucMetni = "3. Kalan Hesaplama Sonucu: " + to_string(kalan3); break;
            
            case 99: {
                // Geçmişi Görüntüleme Özelliği
                islemBasarili = false;
                ifstream okumaDosyasi("hesap_gecmisi.txt");
                string satir;
                cout << "\n========== GEÇMİŞ İŞLEMLER ==========\n";
                if (!okumaDosyasi) {
                    cout << "Henüz kayıtlı bir geçmiş bulunmuyor.\n";
                } else {
                    while (getline(okumaDosyasi, satir)) {
                        cout << satir << endl;
                    }
                    okumaDosyasi.close();
                }
                cout << "=====================================\n";
                break;
            }
            default:
                islemBasarili = false;
                cout << "\nGeçersiz işlem seçildi.\n";
                break;
        }

        // Eğer geçerli bir matematiksel işlem yapıldıysa ekrana yazdır ve dosyaya kaydet
        if (islemBasarili && karakter >= 1 && karakter <= 25) {
            cout << "\n" << sonucMetni << "\n";

            ofstream dosya("hesap_gecmisi.txt", ios::app);
            if (dosya.is_open()) {
                dosya << "Kullanıcı: " << kullaniciAdi 
                      << " | Sayılar: " << sayi1 << ", " << sayi2 << ", " << sayi3 
                      << " | İşlem Kodu: " << karakter 
                      << " | " << sonucMetni << "\n";
                dosya.close();
                cout << "İşlem başarıyla 'hesap_gecmisi.txt' dosyasına kaydedildi.\n";
            } else {
                cout << "Dosya açılırken bir hata oluştu!\n";
            }
        }

        // Kullanıcıya devam edip etmek istemediğini sor
        cout << "\nBaşka bir işlem yapmak ister misiniz? (E/H): ";
        cin >> devamMi;
    }

    cout << "\nProgramdan çıkılıyor. İyi çalışmalar!\n";
    return 0;
}
