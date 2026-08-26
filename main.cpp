#include <iostream>
#include <string>

using namespace std;

int main() {
    string kc = ""; //kullancı mesajı
    string yzc = ""; //botun cevabı
    int sayi = 0; // kelime seçme
    int sayi2 = 0; //kelime seçme
    string ad = ""; //kullancı adı 
    string om = ""; //Önceki mesaj

    cout << "ChickenAI v1" << endl;
    cout << "ChickenAI'in size nasil hitap etmesini istersiniz?" << endl;
    cin >> ad; //kullanıcı adını al
    
    cin.ignore(); // Tamponu temizle
    
    cout << ad << " Hos geldiniz size nasil yardimci olabilirim?" << endl;
    
    while (true) {
        getline(cin, kc);

        if (kc.empty()) continue;

        if (kc.find("iyi") != string::npos) {
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Sevindim " + ad; // iyi kelimesi için seçilmiş kelimeler
            if (sayi == 2)   yzc += "Ne guzel!";
            if (sayi2 == 1)  yzc += " bu muthis bir haber! " + ad;
            if (sayi2 == 2)  yzc += " baska paylasmak istedigin bir sey var mi? " + ad;

            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("nasilsin") != string::npos || kc.find("nas�ls�n") != string::npos) { // nasılsın kelimesi için seçilmiş kelimeler
            sayi++;
            sayi2++;
            om = kc; // kc = om yerine om = kc mant�kl� olan�d�r
            if (sayi == 1)   yzc += "Ben iyiyim";
            if (sayi == 2)   yzc += "Sordugun icin sagol " + ad;
            if (sayi2 == 1)  yzc += " sen nasilsin " + ad;
            if (sayi2 == 2)  yzc += " sen?";

            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = "";
        }
        else if (kc.find("kotu") != string::npos) {
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Neden kotu hissediyorsun " + ad; // kötü kelimesi için seçilmiş kelimeler
            if (sayi == 2)   yzc += "Anlat biraz";
            if (sayi2 == 1)  yzc += " ben burdayim " + ad;

            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = "";
        }
        else if (kc.find("naber") != string::npos) { //anahtar kelimeyi bul
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Iyi senden "; // naber kelimesi için seçilmiş kelimeler
            if (sayi == 2)   yzc += " Iyi";
            if (sayi2 == 1)  yzc += " naber? " + ad;
         
            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("gorusuruz") != string::npos) {
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Tamam "; // vedalaşmak için seçilmiş kelimeler
            if (sayi2 == 1)  yzc += " Sonra gorusuruz! " + ad;
         
            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("bay bay") != string::npos) {
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Tamam ";//vedalaşma kelimeleri
            if (sayi2 == 1)  yzc += " Sonra gorusuruz! " + ad;
         
            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("yok") != string::npos) {
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Tamam ";// yok kelimesi için seçilmiş kelimeler
            if (sayi2 == 1)  yzc += " " + ad;
         
            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("anlatcam") != string::npos) { //eğer kullanıcı bir olay anlatacaksa
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Anlat ";  // anlatcam kelimesi için seçilmiş kelimeler
            if (sayi == 2)   yzc += "Tamamd�r " + ad;
            if (sayi2 == 1)  yzc += " dinliyorum " + ad;

            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else {
            cout << "Uzgunum bildigim kelimeler yetersiz kaliyor bu noktada." << endl; //bilmediği kelime gelince bilmiyorum de. 
        }
    }

    return 0;
}
