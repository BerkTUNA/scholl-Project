#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand komutuyla seed vermek icin ekledigim header
#include <string.h> // yazilari ortalamada kullandigim \t ifadesini yazmak icin ekledigim header
#include <conio.h> // ekran temizleme fonsiyonunu yazmak icin ekledigim header
#define temizle system("cls") //ekran temizleme kodu

// Proje teslim tarihi: 27.12.2019
// Projeye basladigim tarih: 10.12.2019
// Projeyi bitirdigim tarih: 23.12.2019

// ***Programci Katalogu ***
// 10.12.2019 -- Proje plani yapildi
// 10.12.2019 -- Rastgele deger atamak icin srand fonksiyonu ve header ekleme ogrenildi
// 10.12.2019 -- Rastgele degerin dogru calistigini test ettim
// 12.12.2019 -- dizi,switch ve go to fonksiyonu hocanin notlarindan tekrar calisildi
// 12.12.2019 -- Ana menu olusturarak go to ile gecisler yapildi. ekran ortalamak icin header ogrenildi
// 12.12.2019 -- Tum goruntu ekrani ve gecisler olusturuldu
// 14.12.2019 -- Go to teriminin hatalar cikarabilecegi icin kullanmamamiz gerektigi ogrenildi
// 14.12.2019 -- Go to terimi yerine method yontemi ogrenilerek tekrar yazildi
// 15.12.2019 -- Fonksiyonlar ogrenildi ve gecisler yapildi
// 17.12.2019 -- Sayisal loto menusune baslandi
// 17.12.2019 -- Ayni sayi girildiginde hata verme yazildi
// 17.12.2019 -- Buyukten kucuge siralama mantigi ogrenildi ve yapildi
// 18.12.2019 -- Sayisal loto menusu tamamlandi.Ayni sayiysa puan verme islemi yapildi.test edildi.
// 18.12.2019 -- Sans topu menusune baslandi
// 18.12.2019 -- Ekran temizleme komutu ogrenildi
// 18.12.2019 -- Sans topu menusu tamamlandi ancak +1 sayisi hata veriyor
// 19.12.2019 -- Hata duzeltildi testler yapildi.
// 19.12.2019 -- Super loto menusu tamamlandi ve test edildi.
// 20.12.2019 -- On numara menusune baslandi.
// 20.12.2019 -- Hata bulunup on numara icin yeni dizi acildi,siralama hatasi duzeltildi test edildi.
// 20.12.2019 -- On numara menusu tamamlandi.
// 21.12.2019 -- Istatistik menusune baslandi.
// 21.12.2019 -- Puanlama ve skor hatali cikti her oyun icin ayri ayri acilarak cozuldu.
// 21.12.2019 -- Her oyun icin ayri puan ve toplam puan yazildi test edildi.
// 21.12.2019 -- Cikis icin evet hayir soruldu ve exit(); komutu ogrenildi
// 22.12.2019 -- Cekilis Istatikleri menusu tamamlandi
// 22.12.2019 -- Istatislikte hatalar var duzeltilecek.
// 22.12.2019 -- Istatisliklerde her zaman son oynanan oyunda çikan sayilari gosteriyor nasil cozulecegi arastiralacak.
// 23.12.2019 -- Istatislik menusu hatalari cozuldu ve tamamlandi.
// 23.12.2019 -- Kontroller yapildi,eksik yerler duzeltildi.Turkce karakter uyumsuzlugu giderildi.
// 23.12.2019 -- Ekran yazilarindaki yanlisliklar cozuldu.Test edildi



int dizi[10];//On numara icin kullanicinin girdigi degerleri tutan dizi
int dizi1[6]; //On numara haricinde kullanicinin girdigi degerleri tutan dizi
int dizi3[1]; //Sans topunda +1 icin kullandigim dizi
int random[6];//sayisal loto random sayilar dizisi
int random1[22];//on numara random sayilar dizisi
int random2[6];//super loto random sayilar dizisi
int random3[5];//sans topu random sayilar dizisi
int ondort[1];//Sans topunda +1 sayi icin random sayi atan degisken
int sayivar=0;//Ayni sayilari kontrol eden degisken
int sayac=0;//sayac degiskeni
int islem=0;//islem degiskeni
int skor1=0; //sayisal loto skoru
int puan1=0; //sayisal loto puani
int skor2=0; //sans topu skoru
int puan2=0; //sans topu puani
int skor3=0; //super loto skoru
int puan3=0; //super loto puani
int skor4=0; //on numara skoru
int puan4=0; //on numara puani
int toplampuan=0; //toplam puan
int hata=0; //sayisal loto random ayni degerlerin cikmamasi icin olusturulan degisken
int hata1=0;//sans topu random ayni degerlerin cikmamasi icin olusturulan degisken
int hata2=0;//super loto random ayni degerlerin cikmamasi icin olusturulan degisken
int hata3=0;//on numara random ayni degerlerin cikmamasi icin olusturulan degisken
int siralama1[49];//sayisal loto siralama dizisi
int siralama2[34];//Sans topu siralama dizisi
int siralama3[54];//Super Loto siralama dizisi
int siralama4[80]; //On numara siralama dizisi
int tekraredensayi=0;//cekilis istatisliklerinde en cok gelen sayilarin kac tane geldigini tutan degisken
int bir=0;


int main() //seed deger menusu
{
    int seed;
    printf("Beslenme(seed) degeri giriniz:");
    scanf("%d",&seed);
    srand(seed); //rastgele sayi uretmek icin seed verme ogrenildi
    temizle;
    menu();
}
void menu()  //Anamenu
{
    printf("\t *** ANA MENU *** \n");
    printf("\t 1.Sans Oyunlari\n\t 2.Cekilis Istatistikleri\n\t 3.CIKIS\n");
    menusecim();
}
void menusecim() //secim menusu
{

    int mSecim;
    printf("Lutfen yapmak istediginiz islemi seciniz: ");
    scanf("%d",&mSecim);
    switch(mSecim)
    {
    case 1:
        sansoyunlarimenu();
        break;
    case 2:
        CekilisIstatistikleri();
        break;
    case 3:
        cikis();

        break;
    default:
        printf("Lutfen uygun deger giriniz.\n");
        menusecim();
        break;
    }
}
void cikis() //cikis menusu
{
    char mCikis;
    printf("\nCikis yapmak istediginizden emin misiniz? (e/E/h/H):");
    scanf("%s",&mCikis);
    if(mCikis=='E' || mCikis=='e')
    {
        printf("Cikis yapiliyor...");
        exit(1);
    }
    else if(mCikis=='H' || mCikis== 'h')
    {
        temizle;
        menu();
    }
    else
    {
        printf("Uygun harf girmediniz.\n");
        cikis();
    }
}
void sansoyunlarimenu()  //Sans oyunlari menusu.
{
    toplampuan = (puan1 + puan2 + puan3 + puan4) ;
    printf("*** SANS OYUNLARI ALT MENUSU ***\n");
    printf(" 1.Sayisal Loto Oynama \n 2.Sans Topu Oynama \n 3.On Numara Oynama \n 4.Super Loto Oynama \n 5.Ana Menu\nToplam odulunuz: %d puan  ",toplampuan);
    sansoyunlarisecim();
}
void sansoyunlarisecim()  //sans oyunlari secimi.
{
    int sSecim;
    printf("\nLutfen yapmak istediginiz islemi giriniz :");
    scanf("%d",&sSecim);
    switch(sSecim)
    {
    case 1:
        temizle;
        sayisalloto();
        break;
    case 2:
        temizle;
        sansTopu();
        break;
    case 3:
         temizle;
        onNumara();
         break;
    case 4:
         temizle;
        superLoto();
         break;
  case 5:
        temizle;
        menu();
        break;
    default:
        printf("Lutfen uygun deger giriniz.\n");
        sansoyunlarisecim();
     }
}
void sayisalloto() //sayisal loto menusu
{
    if(islem==0)
    {
        sayisalLotoRandom();
    }
    int i;
    for(i=sayac; i<6; i++)
    {
        printf("%d . Sayiyi giriniz (Lutfen 1 ile 49 araliginda bir deger giriniz) :",i+1);
        scanf("%d",&dizi1[i]);
        if(dizi1[i]<1 || dizi1[i]>49)
        {
            printf("Hatali giris yaptiniz.Lutfen 1 ile 49 araliginda bir deger giriniz.\n");
            islem++;
            sayisalloto();
        }
       tutansayi();
        if(sayivar==1)
        {
            printf("Ayni girisi tekrar yaptiniz.Lutfen farkli giris yapiniz \n");
            islem++;
            sayivar=0;
            sayisalloto();
        }
        sayac++;
    }
    sayac=0;
    islem=0;

    sayisalLotoSiralama();
    karsilastirma();
    cikisSayisalloto();
}
void tutansayi()  //Ayni sayilari kontrol eden method.
{
    int i;
    for(i=0; i<sayac; i++)
    {
        if(dizi1[i]==dizi1[sayac])
        {
            sayivar=1;
        }
    }
}
void sayisalLotoRandom()   //SAYISAL LOTO RANDOM DEGER ICIN KULLANILAN METHOD.
{
    int i,j,gecici =0,ai;
    for(i=0; i<6; i++)
    {
        for(j=0;j<6;j++){
                random[i]=1+rand()%49; // +1 ifadesiyle rastgele uretilecek sayiyi 1 arttirarak uretir
                if(random[i]!=random[j]){
 hata = random[i];
                    siralama1[hata]++ ;
                }
            }
    }
}
void sayisalLotoSiralama()  //Kücükten büyüge siralama
{
    int i, gecici,ai;
    for(i=0; i<6; i++)
    {
        int j;
        for(j=i+1; j<6; j++)
        {
            if(dizi1[i]>dizi1[j])
            {
                gecici=dizi1[i];
                dizi1[i]=dizi1[j];
                dizi1[j]=gecici;
            }
            if(random[i]>random[j])
            {
                gecici=random[i];
                random[i]=random[j];
                random[j]=gecici;
            }
        }
    }
     int ja;
    for(ai=0; ai<49; ai++)
    {

        for(ja=ai+1; ja<49; ja++)
        {
                if(siralama1[ai]<siralama1[ja])
            {
                gecici=siralama1[ai];
                siralama1[ai]=siralama1[ja];
                siralama1[ja]=gecici;
            }
        }
    }
    printf("Talihli sayilar \n");
    for(i=0; i<6; i++)
    {
        printf("%d \t",random[i]);
    }
    printf("\nSizin girdiginiz sayilar\n");
    for(i=0; i<6; i++)
    {
        printf("%d \t",dizi1[i]);
    }
}
void karsilastirma()  //Girilen deger ile bilgisayar degerini karsilastirir
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(dizi1[i]==random[j])
            {
                skor1++;
            }
        }
  }
     switch(skor1) //skor hesaplama
    {
    case 6:
        puan1=256;
        break;
    case 5:
        puan1=128;
        break;
    case 4:
        puan1=64;
        break;
    case 3:
        puan1=32;
        break;
    default:
        printf("\nIkramiye kazanamadiniz.");
        break;
    }
    printf("\n%d tane sayi tutturdunuz ve puanininiz = %d",skor1,puan1);
    printf("\nToplam odulunuz: %d puan",toplampuan);
}
void cikisSayisalloto()  //Sayisal loto cikis
{
    char cikisSoru;
    printf("\nIsleminiz sona erdi.\n\nYeniden 'Sayisal loto' oynamak istiyor musunuz? (e/E/h/H):");
    scanf("%s",&cikisSoru);
    if(cikisSoru=='e'||cikisSoru=='E')
    {
        skor1=0;
        temizle;
        sayisalloto();
    }
    else if(cikisSoru=='h'||cikisSoru=='H')
    {
        skor1=0;
        temizle;
        sansoyunlarimenu();
    }
    else
        {
        skor1=0;
        printf("Uygun harf girmediniz.\n");
        cikisSayisalloto();
        }
}
void sansTopu()
{
       if(islem==0)
    {
        sansTopuRandom();
    }
    int i;
    for(i=sayac; i<5; i++)
    {
        printf("%d. Sayiyi giriniz (Lutfen 1 ile 34 araliginda bir deger giriniz) :",i+1);
        scanf("%d",&dizi1[i]);
        if(dizi1[i]<1||dizi1[i]>34)
        {
            printf("Hatali giris yaptiniz.Lutfen 1 ile 34 araliginda bir deger giriniz.\n");
            islem++;
            sansTopu();
        }
        tutansayi();
        if(sayivar==1)
        {
            printf("Ayni girisi tekrar yaptiniz.Lutfen farkli giris yapiniz.\n");
            islem++;
            sayivar=0;
            sansTopu();
        }
        sayac++;
    }
    sayac=0;
    islem=0;
    sansTopuSiralama();
    sansTopuKarsilastirma();
    sansTopuCikis();
}
void sansTopuRandom() //sans topu icin 1 ile 34 arasinda random deger atar.
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0;j<5;j++){
        random3[i]=1+rand()%34;
        if(random3[i]!=random3[j]){
                hata1 = random3[i];
                siralama2[hata1]++;
        }
    }
    }
}
void sansTopuSiralama() //Kücükten büyüge siralama
{
    int i, gecici;
    for(i=0; i<5; i++)
    {
        int j;
        for(j=i+1; j<5; j++)
        {
            if(dizi1[i]>dizi1[j])
            {
                gecici=dizi1[i];
                dizi1[i]=dizi1[j];
                dizi1[j]=gecici;
            }
            if(random3[i]>random3[j])
            {
                gecici=random3[i];
                random3[i]=random3[j];
                random3[j]=gecici;
            }
        }
    }

    printf("\nTalihli sayilar \n");
    for(i=0; i<5; i++)
    {
        printf("%d \t",random3[i]);
    }
    printf("\nSizin girdiginiz sayilar \n");
    for(i=0; i<5; i++)
    {
        printf("%d \t",dizi1[i]);
    }

}
void sansTopuKarsilastirma()//Girilen deger ile bilgisayar degerini karsilastirir
{

    sansTopuOndort();
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(dizi1[i]==random3[j])
            {
                skor2++;
            }
        }
    }

    switch(skor2) //skor hesaplama
    {
    case 5:
        if (bir==1)
        {
            puan2=256;
        }
        else if (bir!=1)
        {
            puan2=128;
        }
        break;
    case 4:
        if(bir==1)
        {
            puan2=64;
        }
        else if(bir!=1)
        {
            puan2=32;
        }
        break;
    case 3:
        if(bir==1)
        {
            puan2=16;
        }
        else if(bir!=1)
        {
            puan2=8;
        }
        break;
    case 2:
        if(bir==1)
        {
            puan2=4;
        }
        break;
    case 1:
        if(bir==1)
        {
            puan2=2;
        }
        break;
    default:
        printf("\n\nIkramiye kazanamadiniz.");
        break;
    }
    printf("\n\n%d tane sayi tutturdunuz ve puanininiz = %d",skor2,puan2);
    printf("\nToplam odulunuz: %d puan",toplampuan);
}
void sansTopuOndort()  //Girilen deger ile bilgisayar degerini karsilastirir
{

    int i,ondort1;
    printf("\n\n1 ile 14 arasinda bir deger giriniz :");
    scanf("%d",&ondort1);
    if((ondort1<1||ondort1>14))
    {
        printf("Hatali giris yaptiniz tekrar deneyiniz.\n");
        sansTopuOndort();
    }
    tutansayi();
    for(i=0; i<1; i++)
    {
        ondort[i]=1+rand()%1;
        printf("\nTalihli sayi\n%d\n",ondort[i]);
    }
     printf("Sizin girdiginiz sayi\n");
        printf("%d \t",ondort1);


    if(ondort[i]==ondort1)
    {
        skor2++;
        bir++;
        printf("\nTutturdunuz.");

    }
}

void sansTopuCikis() //cikis menusu
{
    char topCikis;
    printf("\nIsleminiz sona erdi. \n\nYeniden 'Sans Topu' oynamak istiyor musunuz? (e/E/h/H):");
    scanf("%s",&topCikis);
    if(topCikis=='E'|| topCikis=='e')
    {
        skor2=0;
        puan2=0;
        temizle;
        sansTopu();
    }
    else if(topCikis=='h' || topCikis=='H')
    {
        skor2=0;
        puan2=0;
        temizle;
        sansoyunlarimenu();
    }
    else
    {

        printf("Uygun harf girmediniz.\n");
        sansTopuCikis();
    }
}
void superLoto() //super loto menusu
{
    if(islem==0)
    {
        superLotoRandom();
    }
    int i;
    for(i=sayac; i<6; i++)
    {
        printf("%d . Sayiyi giriniz (Lutfen 1 ile 54 araliginda bir deger giriniz) :",i+1);
        scanf("%d",&dizi1[i]);
        if(dizi1[i]<1 || dizi1[i]>54)
        {
            printf("Hatali giris yaptiniz.Lutfen 1 ile 54 araliginda bir deger giriniz.\n");
            islem++;
            superLoto();
        }
        tutansayi();
        if(sayivar==1)
        {
            printf("Ayni girisi tekrar yaptiniz.Lutfen farkli giris yapiniz \n");
            islem++;
            sayivar=0;
            superLoto();
        }
        sayac++;
    }
    sayac=0;
    islem=0;
    superLotoSiralama(); //method
    superLotoKarsilastirma();//method
    superLotoCikis();
}
void superLotoRandom() // 1 ile 54 araliginde random degerler atandi.
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0;j<6;j++){
        random2[i]=1+rand()%54;// random deger atanacak!
        if(random2[i]!=random2[j]){
            hata2 = random2[i];
            siralama3[hata2]++;
        }
        }
    }
}
void superLotoSiralama() //siralama
{
    int i, gecici;
    for(i=0; i<6; i++)
    {
        int j;
        for(j=i+1; j<6; j++)
        {
            if(dizi1[i]>dizi1[j])
            {
                gecici=dizi1[i];
                dizi1[i]=dizi1[j];
                dizi1[j]=gecici;
            }
            if(random2[i]>random2[j])
            {
                gecici=random2[i];
                random2[i]=random2[j];
                random2[j]=gecici;
            }
        }
    }
    printf("Talihli sayilar \n");
    for(i=0; i<6; i++)
    {
        printf("%d \t",random2[i]);
    }
    printf("\nSizin girdiginiz sayilar \n");
    for(i=0; i<6; i++)
    {
        printf("%d \t",dizi1[i]);
    }
}
void superLotoKarsilastirma() // karsilastirma
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(dizi1[i]==random2[j])
            {
                skor3++;
            }
        }
    }
    switch(skor3) //skor menusu
    {
    case 6:
        puan3=256;
        break;
    case 5:
        puan3=128;
        break;
    case 4:
        puan3=64;
        break;
    case 3:
        puan3=32;
        break;
    default:
        printf("\nIkramiye kazanamadiniz.");
        break;
    }
    printf("\n%d tane sayi tutturdunuz ve puanininiz = %d",skor3,puan3);
    printf("\nToplam odulunuz: %d puan",toplampuan);
}
void superLotoCikis() //cikis menusu
{
    char supCikis;
    printf("\nIsleminiz sona erdi. \n\nYeniden 'Super Loto' oynamak istiyor musunuz? (e/E/h/H):");
    scanf("%s",&supCikis);
    if(supCikis=='E'|| supCikis=='e')
    {
        skor3=0;
        temizle;
        superLoto();
    }
    else if(supCikis=='h' || supCikis=='H')
    {
        skor3=0;
        temizle;
        sansoyunlarimenu();
    }
    else
    {
        skor3=0;
        printf("Uygun harf girmediniz.\n");
        superLotoCikis();
    }
}
void onNumara() //on numara menusu
{
    if(islem==0)
    {
        onNumaraRandom();
    }
    int i;
    for(i=sayac; i<10; i++)
    {
        printf("%d . Sayiyi giriniz (Lutfen 1 ile 80 araliginda bir deger giriniz) :",i+1);
        scanf("%d",&dizi[i]);
        if(dizi[i]<1 || dizi[i]>80)
        {
            printf("Hatali giris yaptiniz.Lutfen 1 ile 80 araliginda bir deger giriniz.\n");
            islem++;
            onNumara();
        }
        onNumaraTutanSayi();
        if(sayivar==1)
        {
            printf("Ayni girisi tekrar yaptiniz.Lutfen farkli giris yapiniz \n");
            islem++;
            sayivar=0;
            onNumara();
        }
        sayac++;
    }
    sayac=0;
    islem=0;
    onNumaraSiralama();
    onNumaraKarsilastirma();
    onNumaraCikis();
}
void onNumaraRandom()  //1 ile 80 arasinda random deger atar
{
    int i,j;
    for(i=0; i<22; i++)
    {
        for(j=0;j<22;j++)
        {
            random1[i]=1+rand()%80;
            if(random1[j]!=random1[i]){
                hata3 = random1[i];
                siralama4[hata3]++;
            }
        }
    }

}
void onNumaraSiralama() // siralama
{
    int i,gecici;
    int j;
    for(i=0; i<22; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(dizi[i]>dizi[j])
            {
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;
            }
        }
    }
     int ja,ai;
    for(ai=0; ai<22; ai++)
    {
        for(ja=ai+1; ja<22; ja++)
        {
            if(random1[ai]>random1[ja])
            {
                gecici=random1[ai];
                random1[ai]=random1[ja];
                random1[ja]=gecici;
            }
        }}

    printf("Talihli sayilar \n");
    for(i=0; i<22; i++)
    {
        printf("%d \t",random1[i]);
    }
    printf("\nSizin girdiginiz sayilar \n");
    for(i=0; i<10; i++)
    {
        printf("%d \t",dizi[i]);
    }


}
void onNumaraKarsilastirma() //karsilastirma
{
    int i,j;
    for(i=0; i<10; i++)
    {
        for(j=0; j<22; j++)
        {
            if(dizi[i]==random1[j])
            {
                skor4++;
            }
        }
    }
    switch(skor4) //skor hesaplama
    {
    case 10:
        puan4=256;
        break;
    case 9:
        puan4=128;
        break;
    case 8:
        puan4=64;
        break;
    case 7:
        puan4=32;
        break;
    case 6:
        puan4=16;
        break;
    case 0:
        puan4=8;
        break;
    default:
        printf("\nIkramiye kazanamadiniz.");
        break;
    }
    printf("\n%d tane sayi tutturdunuz ve puanininiz = %d",skor4,puan4);
    printf("\nToplam odulunuz: %d puan",toplampuan);
}
void onNumaraCikis() //cikis menusu
{
    char onCikis;
    printf("\nIsleminiz sona erdi. \n\nYeniden 'On Numara' oynamak istiyor musunuz? (e/E/h/H):");
    scanf("%s",&onCikis);
    if(onCikis=='E'|| onCikis=='e')
    {
        skor4=0;
        temizle;
        onNumara();
    }
    else if(onCikis=='h' || onCikis=='H')
    {
        skor4=0;
        temizle;
        sansoyunlarimenu();
    }
    else
    {
        skor4=0;
        printf("Uygun harf girmediniz.\n");
        onNumaraCikis();
    }
}
void onNumaraTutanSayi()
{
    int i;
    for(i=0; i<sayac; i++)
    {
        if(dizi[i]==dizi[sayac])
        {
            sayivar=1;
        }
    }
}
void CekilisIstatistikleri()
{
    int i,j, tekraredensayi=1;
    int mIstatistikSecim;
    printf("Cekilis istatistiklerini gormek istediginiz oyunu seciniz;\n 1.Sayisal loto \n 2.Sans Topu \n 3.On Numara \n 4.Super Loto \n 5.Ana Menu \nSeciminizi giriniz: ");
    scanf("%d",&mIstatistikSecim);
    if(mIstatistikSecim==1)
    {
        temizle;
        printf("\nSayisal Lotonun En Cok Cikmis 6 Sayisi Asagidaki Gibidir;\n");


        for(i=0; i<6; i++)
        {
            if(random[i]!=-1)
            {
                for(j=i+1; j<6; j++)
                {
                    if(random[i]==random[j])
                    {
                        tekraredensayi++;
                        random[j]=-1;
                    }
                }
                printf("\n%d tane %d var\n",tekraredensayi,random[i]);
                tekraredensayi=1;
            }
            CekilisIstatistikCikis();
        }
    }
    else if(mIstatistikSecim==2)
    {
        temizle;
        printf("\nSans Topunun En Cok Cikmis 5 Sayisi Asagidaki Gibidir;\n");
        for(i=0; i<5; i++)
        {
            if(random3[i]!=-1)
            {
                for(j=i+1; j<5; j++)
                {
                    if(random3[i]==random3[j])
                    {
                        tekraredensayi++;
                        random3[j]=-1;
                    }
                }
                printf("\n%d tane %d var\n",tekraredensayi,random3[i]);
                tekraredensayi=1;
            }
        }

        printf("\nSans Topunun +1 Sayisi Icin En Cok Cikmis Sayisi Asagidaki Gibidir;\n");
        for(i=0; i<1; i++)
        {
            if(ondort[i]!=-1)
            {
                for(j=i+1; j<1; j++)
                {
                    if(ondort[i]==ondort[j])
                    {
                        tekraredensayi++;
                        ondort[j]=-1;
                    }
                }
                printf("\n%d tane %d var\n",tekraredensayi,ondort[i]);
                tekraredensayi=1;
            }
        }
        CekilisIstatistikCikis();
    }
    else if(mIstatistikSecim==3)
    {
        temizle;
        printf("\nOn Numaranin En Cok Cikmis 10 Sayisi Asagidaki Gibidir;\n");
        for(i=0; i<10; i++)
        {
            if(random1[i]!=-1)
            {
                for(j=i+1; j<10; j++)
                {
                    if(random1[i]==random1[j])
                    {
                        tekraredensayi++;
                        random1[j]=-1;
                    }
                }
                printf("\n%d tane %d var\n",tekraredensayi,random1[i]);
                tekraredensayi=1;
            }
        }
        CekilisIstatistikCikis();
    }
    else if(mIstatistikSecim==4)
    {
        temizle;
        printf("\nSuper Lotonun En Cok Cikmis 6 Sayisi Asagidaki Gibidir;\n");
        for(i=0; i<6; i++)
        {
            if(random2[i]!=-1)
            {
                for(j=i+1; j<6; j++)
                {
                    if(random2[i]==random2[j])
                    {
                        tekraredensayi++;
                        random2[j]=-1;
                    }
                }
                printf("\n%d tane %d var\n",tekraredensayi,random2[i]);
                tekraredensayi=1;
            }
        }
CekilisIstatistikCikis();
    }
    else if(mIstatistikSecim==5)
    {
        temizle;
        menu();
    }

    else
    {
    printf("\nLutfen 1 ile 5 arasi secim yapiniz.\n\n");
    CekilisIstatistikleri();
    }

}

void CekilisIstatistikCikis()
{
    char cekCikis;
    printf("\nYeniden Cekilis Istatistiklerini gormek istiyor musunuz? (e/E/h/H):");
    scanf("%s",&cekCikis);
    if(cekCikis=='E'|| cekCikis=='e')
    {
        temizle;
        CekilisIstatistikleri();
    }
    else if(cekCikis=='h' || cekCikis=='H')
    {

    cikis();

    }
    else
    {
        printf("Uygun harf girmediniz.\n");
        CekilisIstatistikCikis();
    }



}

 












