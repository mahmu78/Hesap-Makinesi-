#include<iostream>
#include <windows.h>
#include<cmath>
using namespace std;

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int sayi1,sayi2,sayi3;
cout<<"1.Sayıyı Gir\n";
cin>>sayi1;
cout<<"2.Sayıyı Gir\n";
cin>>sayi2;
cout<<"3.Sayıyı Gir:\n";
cin>>sayi3;
int toplam = sayi1+sayi2+sayi3;
int cikarma= sayi3-sayi2-sayi1;
double bolme1= sayi1/(double)sayi2;
double bolme2= sayi2/(double)sayi3;
double bolme3=sayi1/(double)sayi3;
int carpma=sayi1*sayi2*sayi3;
double karekok1=sqrt(sayi1);
double karekok2=sqrt(sayi2);
double karekok3=sqrt(sayi3);
int us1=pow(sayi1,sayi2);
int us2=pow(sayi2,sayi3);
int us3=pow(sayi1,sayi3);


cout<<"İşlem Seçiniz\n";
cout<<"""1 numaralı işlem toplama,2 numaralı işlem çıkarma;3,4,5 numaralı işlemler bölme , 6 numaralı işlem çarpma;7,8,9 üs alma\n""";
cout<<";10,11 ve 12 numaralı işlemler karekök almadır.";

int karakter;
cin>>karakter;

if(karakter==1){
    cout<<"Toplama işlemi yapılıyor...\n";
    cout<<toplam;
}
else if (karakter==2)
{
   cout<<"Çıkarma işlemi yapılıyor...\n";
   cout<<cikarma;

}
else if (karakter==3)
{

 cout<<"1.Bölme işlemi yapılıyor...\n";
 cout<<bolme1;
}
else if(karakter==4){
    cout<<"2.Bölme işlemi yapılıyor...\n";
    cout<<bolme2;
}
else if(karakter==5){
    cout<<"3.Bölme işlemi yapılıyor...\n";
    cout<<bolme3;
}
else if(karakter==6){
 cout<<"Çarpma işlemi Yapılıyor...\n";
 cout<<carpma;
}
else if(karakter==7){
cout<<"1.üs alma işlemi yapılıyor...\n";
 cout<<us1;
}
else if(karakter==8){
cout<<"2.üs alma işlemi yapılıyor...\n";
 cout<<us2;
}
else if(karakter==9){
cout<<"3.üs alma işlemi yapılıyor...\n";
 cout<<us3;
}
else if(karakter==10){
cout<<"1.karekök alma işlemi yapılıyor...\n";
 cout<<karekok1;
}
else if(karakter==11){
cout<<"2.karekök alma işlemi yapılıyor...\n";
 cout<<karekok2;
}
else if(karakter==12){
cout<<"3.karekök alma işlemi yapılıyor...\n";
 cout<<karekok3;
}
else{
    cout<<"Lütfen tanımlı bir işlem tuşuna basınız(1'den 12'ya kadar[1 ve 12 dahildir.])";
}
return 0;
}