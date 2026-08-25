#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string kc = "";
string yzc = "";
int sayi = 0;
int sayi2 = 0;
std::string ad = "";
std::string om = "";
std::string odl = "";
std::string fikra;
std::string olay;
int main()
{
    cout << "ChickenAI v1" << endl;
    cout << "ChickenAI'in size nasil hitap etmesini istersiniz?" << endl;
    std::cin >> ad;
    

    cin.ignore(); 
    
    cout << ad + " Hos geldiniz size nasil yardimci olabilirim?" << endl;
    
    while (true) {
        
        getline(cin, kc);


        if (kc.empty()) continue;

        if (kc.find("iyi") != string::npos) {
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Sevindim " + ad;
            if (sayi == 2)   yzc += "Ne guzel!";
            if (sayi2 == 1)  yzc += " bu muthis bir haber! " + ad;
            if (sayi2 == 2)  yzc += " baska paylasmak istedigin bir sey var mi? " + ad;

            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("nasilsin") != string::npos || kc.find("nasılsın") != string::npos) {
            sayi++;
            sayi2++;
            kc = om;
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
            if (sayi == 1)   yzc += "Neden kotu hissediyorsun " + ad;
            if (sayi == 2)   yzc += "Anlat biraz";
            if (sayi2 == 1)  yzc += " ben burdayim " + ad;

            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = "";
        }
        else if (kc.find("naber") != string::npos) {
            sayi++;
            sayi2++;
            om = kc;
            if (sayi == 1)   yzc += "Iyi senden ";
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
            if (sayi == 1)   yzc += "Tamam ";
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
            if (sayi == 1)   yzc += "Tamam ";
            if (sayi2 == 1)  yzc += " Sonra gorusuruz! " + ad;
           
            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("yok") != string::npos) {
            sayi++;
            sayi2++;
            kc = om;
            if (sayi == 1)   yzc += "Tamam ";
            if (sayi2 == 1)  yzc += " " + ad;
           
            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
        else if (kc.find("anlatcam") != string::npos) {
            sayi++;
            sayi2++;
            kc = om;
            if (sayi == 1)   yzc += "Anlat ";
            if (sayi == 2)  yzc += "Tamamdır " + ad;
            if (sayi2 == 1)  yzc += " dinliyorum " + ad;

            if (sayi >= 3)   sayi = 0;
            if (sayi2 >= 3)  sayi2 = 0;

            cout << yzc << endl;
            yzc = ""; 
        }
            
        }
        else {
        std::string kelime = "";
        
                }
            }
        }
        
    }

    return 0;
}
