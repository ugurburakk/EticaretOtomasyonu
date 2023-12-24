// Uğur Burak Berber
// Eticaret Otomasyonu


#include <iostream>
#include <string>
#include <vector>


class Firma {
    
private:
    std::string ad;
    std::string soyad;
    std::string adres;
    std::string telefon;
    std::vector<std::string> yetkiliKisiler;

public:
    
    Firma(std::string ad, std::string soyad, std::string adres, std::string telefon) : adres(adres), telefon(telefon) {
    }
    
    void setAd(std::string yeniAd) {
        adres = yeniAd;
    }
    
    void setSoyad(std::string yeniSoyad) {
        adres = yeniSoyad;
    }

    
    void setAdres(std::string yeniAdres) {
        adres = yeniAdres;
    }

    void setTelefon(std::string yeniTelefon) {
        telefon = yeniTelefon;
    }

    void yetkiliEkle(std::string yeniYetkili) {
        yetkiliKisiler.push_back(yeniYetkili);
    }

    void bilgileriGoster() {
        
        std::cout << "Adres: " << adres << std::endl;
        std::cout << "Telefon: " << telefon << std::endl;
        std::cout << "Yetkili Kisiler:" << std::endl;
        for (const auto& yetkili : yetkiliKisiler) {
        std::cout << " - " << yetkili << std::endl;
        }
    }
};

class Urun {
    
private:
    
    std::string urunAdi;
    std::string urunKodu;
    double urunFiyati;
    std::string urunAciklamasi;
    std::string urunKategorisi;
    double urunSayisi;
    std::vector<std::string> urunOzellikleri;

public:
    
    Urun(std::string adi, std::string kodu, double fiyat, std::string aciklama, std::string kategorisi, double adet): urunAdi(adi), urunKodu(kodu), urunFiyati(fiyat), urunAciklamasi(aciklama), urunKategorisi(kategorisi), urunSayisi(adet){
    }

    void ozellikEkle(std::string ozellik) {
        urunOzellikleri.push_back(ozellik);
    }

    void bilgileriGoster() {
        
        std::cout << "Ürün Adı: " << urunAdi << std::endl;
        std::cout << "Ürün Kodu: " << urunKodu << std::endl;
        std::cout << "Fiyatı: " << urunFiyati << " TL" << std::endl;
        std::cout << "Açıklama: " << urunAciklamasi << std::endl;
        std::cout << "Özellikler:" << std::endl;
        for (const auto& ozellik : urunOzellikleri) {
            std::cout << " - " << ozellik << std::endl;
        }
    }
};

class yetkiliKisi {
private:
    std::string yetkiliAdi;
    std::string yekiliSoyadi;
    std::string yetkiliEmail;
    std::string yetkiliTelefon;
    std::vector<std::string> yetkiliKisiler;
    
public:
    
    yetkiliKisi(std::string adi,std::string soyadi,std::string email, std::string tel): yetkiliAdi(adi), yekiliSoyadi(soyadi), yetkiliEmail(email), yetkiliTelefon(tel){
        
    }
    void yetkiliEkle(std::string yetkili) {
        yetkiliKisiler.push_back(yetkili);
    }

    
    void bilgileriGoster(){
        
        std::cout << "Yetkili Adı: " << yetkiliAdi << std::endl;
        std::cout << "Yetkili Soyadı: " << yekiliSoyadi << std::endl;
        std::cout << "Yetkili E_mail: " << yetkiliEmail << std::endl;
        std::cout << "Yetkili Telefon: " << yetkiliTelefon << std::endl;
        for (const auto& yetkili : yetkiliKisiler) {
            std::cout << " - " << yetkili << std::endl;
        }
    }
};

class Musteri {
    
private:
    
    std::string ad;
    std::string soyad;
    std::string email;
    std::string telefon;

public:
    
    Musteri(std::string adi, std::string soyadi, std::string eposta, std::string tel): ad(adi), soyad(soyadi), email(eposta), telefon(tel){
        
    }

    void bilgileriGoster() {
        
        std::cout << "Adı: " << ad << std::endl;
        std::cout << "Soyadı: " << soyad << std::endl;
        std::cout << "E-posta: " << email << std::endl;
        std::cout << "Telefon: " << telefon << std::endl;
    }
};

class Siparis {
    
private:
    
    std::string tarih;
    std::string firma;
    std::string musteri;
    double fiyat;
    std::string urun;
    std::string yorum;
    int puan;

public:
    
    Siparis(std::string siparisTarihi, std::string siparisFirmasi, std::string siparisMusterisi, double fiyat, std::string urunAdi, std::string siparisYorumu, int siparisPuani)
        : tarih(siparisTarihi), firma(siparisFirmasi), musteri(siparisMusterisi), fiyat(fiyat), urun(urunAdi), yorum(siparisYorumu), puan(siparisPuani) {
            
        }

    void bilgileriGoster() {
        
        std::cout << "Tarih: " << tarih << std::endl;
        std::cout << "Firma: " << firma << std::endl;
        std::cout << "Müşteri: " << musteri << std::endl;
        std::cout << "Birim Fiyat: " << fiyat << " TL" << std::endl;
        std::cout << "Ürün: " << urun << std::endl;
        std::cout << "Yorum: " << yorum << std::endl;
        std::cout << "Puan: " << puan << " / 10" << std::endl;
    }
};

int main() {
    
    // sipariş Bilgileri
    std::string firma, musteri,urun, yorum,ad,soyad,email, adres,yetkiliAdi, yetkiliSoyadi, yetkiliEmail, yetkiliAdres;
    double tarih,telefon,yetkiliTelefon;
    int puan;
    
    // müşteri

    
    std::cout<< "Müşteri Adı";
    std::cin>> ad;
    
    std::cout<< "Müşteri Soyadı ";
    std::cin>>soyad;
    
    std::cout<<"Müşteri email:";
    std::cin>> email;
    
    std::cout<<"Müşteri Telefon Numarası";
    std::cin>> telefon;
    
    
    
    // firma
    
    std::cout<< "firma adı:";
    std::cin>> firma;
    
    std::cout << "Ürün yorumu";
    std::cin >> yorum;
    
    std::cout << "Ürününün sipariş tarihi";
    std::cin >> tarih;
    
    std::cout<< "Ürün puanı";
    std::cin>> puan;

    //yetkili Kisi

    std::cout << "Yetkili adı: ";
    std::cin >> yetkiliAdi;

    std::cout << "Yetkili Soyadı: ";
    std::cin >> yetkiliSoyadi;

    std::cout << "Yetkili Adresi: ";
    std::cin.ignore();
    std::getline(std::cin, yetkiliAdres);

    std::cout << "Yetkili Telefonu: ";
    std::cin >> yetkiliTelefon;

    std::cout << "Yetkili Email: ";
    std::cin >> yetkiliEmail;

    
    // ürün bilgileri
    
    std::string adi, kodu, aciklama, kategorisi, ozellik;
    double fiyat ,adet;
    
    std::cout<<"Ürün Kategorisi:";
    std::cin >> kategorisi;
    
    std::cout<<"Ürün Adedi";
    std::cin>> adet;
    
    std::cout << "Ürün Adı:\n";
    std::cin >> adi;
    
    std::cout << "Ürün Kodu:";
    std::cin >> kodu;
    
    std::cout<< "Ürün fiyatı:";
    std::cin>> fiyat;
    
    std::cout<<"Ürün Açıklaması";
    std::cin.ignore(); // önceki verileri temizler
    std::getline(std::cin, aciklama);
    
    Urun (adi, kodu,fiyat,aciklama, kategorisi, adet);
    
    std::cout<<"Özellikler (çıkış için '1'yazın):/n";
    while (true){
        std::cout<< "Özellik:";
        std::getline(std::cin, ozellik);
        if(ozellik == "1")
            break;
        
    }
    
    return 0;
    
}
