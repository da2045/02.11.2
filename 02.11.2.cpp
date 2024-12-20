//#include <iostream>
//#include <string>
//#include <algorithm>
//
//
//struct Knyha {
//    std::string nazva;
//    std::string avtor;
//    std::string vydavnytstvo;
//    std::string zhanr;
//};
//
//
//void redahuvatyKnyhu(Knyha& knyha) {
//    std::cout << "Vedite novu nazvu: ";
//    std::cin.ignore();
//    std::getline(std::cin, knyha.nazva);
//    std::cout << "Vedite novoho avtora: ";
//    std::getline(std::cin, knyha.avtor);
//    std::cout << "Vedite nove vydavnytstvo: ";
//    std::getline(std::cin, knyha.vydavnytstvo);
//    std::cout << "Vedite novyi zhanr: ";
//    std::getline(std::cin, knyha.zhanr);
//}
//
//
//void drukuvatyVsiKnyhy(const Knyha knyhy[], int rozmir) {
//    for (int i = 0; i < rozmir; ++i) {
//        std::cout << "Knyha " << i + 1 << ": " << knyhy[i].nazva << ", " << knyhy[i].avtor << ", " << knyhy[i].vydavnytstvo << ", " << knyhy[i].zhanr << std::endl;
//    }
//}
//
//
//void poshukZaAvtorom(const Knyha knyhy[], int rozmir, const std::string& avtor) {
//    for (int i = 0; i < rozmir; ++i) {
//        if (knyhy[i].avtor == avtor) {
//            std::cout << "Znaidena knyha: " << knyhy[i].nazva << ", " << knyhy[i].avtor << ", " << knyhy[i].vydavnytstvo << ", " << knyhy[i].zhanr << std::endl;
//        }
//    }
//}
//
//
//void poshukZaNazvoiu(const Knyha knyhy[], int rozmir, const std::string& nazva) {
//    for (int i = 0; i < rozmir; ++i) {
//        if (knyhy[i].nazva == nazva) {
//            std::cout << "Znaidena knyha: " << knyhy[i].nazva << ", " << knyhy[i].avtor << ", " << knyhy[i].vydavnytstvo << ", " << knyhy[i].zhanr << std::endl;
//        }
//    }
//}
//
//
//bool porivnianniaZaNazvoiu(const Knyha& a, const Knyha& b) {
//    return a.nazva < b.nazva;
//}
//
//void sortuvanniaZaNazvoiu(Knyha knyhy[], int rozmir) {
//    std::sort(knyhy, knyhy + rozmir, porivnianniaZaNazvoiu);
//}
//
//
//bool porivnianniaZaAvtorom(const Knyha& a, const Knyha& b) {
//    return a.avtor < b.avtor;
//}
//
//void sortuvanniaZaAvtorom(Knyha knyhy[], int rozmir) {
//    std::sort(knyhy, knyhy + rozmir, porivnianniaZaAvtorom);
//}
//
//
//bool porivnianniaZaVydavnytstvom(const Knyha& a, const Knyha& b) {
//    return a.vydavnytstvo < b.vydavnytstvo;
//}
//
//void sortuvanniaZaVydavnytstvom(Knyha knyhy[], int rozmir) {
//    std::sort(knyhy, knyhy + rozmir, porivnianniaZaVydavnytstvom);
//}
//
//int main() {
//    Knyha knyhy[10] = {
//        {"Nazva1", "Avtor1", "Vydavnytstvo1", "Zhanr1"},
//        {"Nazva2", "Avtor2", "Vydavnytstvo2", "Zhanr2"},
//        {"Nazva3", "Avtor3", "Vydavnytstvo3", "Zhanr3"},
//        {"Nazva4", "Avtor4", "Vydavnytstvo4", "Zhanr4"},
//        {"Nazva5", "Avtor5", "Vydavnytstvo5", "Zhanr5"},
//        {"Nazva6", "Avtor6", "Vydavnytstvo6", "Zhanr6"},
//        {"Nazva7", "Avtor7", "Vydavnytstvo7", "Zhanr7"},
//        {"Nazva8", "Avtor8", "Vydavnytstvo8", "Zhanr8"},
//        {"Nazva9", "Avtor9", "Vydavnytstvo9", "Zhanr9"},
//        {"Nazva10", "Avtor10", "Vydavnytstvo10", "Zhanr10"}
//    };
//
//    int vybir;
//    std::string zapyt;
//    while (true) {
//        std::cout << "Menu:\n";
//        std::cout << "1. Redahuvaty knyhu\n";
//        std::cout << "2. Drukuvaty vsi knyhy\n";
//        std::cout << "3. Poshuk knyh za avtorom\n";
//        std::cout << "4. Poshuk knyhy za nazvoiu\n";
//        std::cout << "5. Sortuvannia za nazvoiu\n";
//        std::cout << "6. Sortuvannia za avtorom\n";
//        std::cout << "7. Sortuvannia za vydavnytstvom\n";
//        std::cout << "8. Vyhid\n";
//        std::cout << "Vvedit svii vybir: ";
//        std::cin >> vybir;
//
//        switch (vybir) {
//        case 1:
//            std::cout << "Vvedit nomer knyhy (1-10): ";
//            int nomer;
//            std::cin >> nomer;
//            if (nomer >= 1 && nomer <= 10) {
//                redahuvatyKnyhu(knyhy[nomer - 1]);
//            }
//            else {
//                std::cout << "Nekorektnyi nomer." << std::endl;
//            }
//            break;
//        case 2:
//            drukuvatyVsiKnyhy(knyhy, 10);
//            break;
//        case 3:
//            std::cout << "Vvedit avtora: ";
//            std::cin.ignore();
//            std::getline(std::cin, zapyt);
//            poshukZaAvtorom(knyhy, 10, zapyt);
//            break;
//        case 4:
//            std::cout << "Vvedit nazvu: ";
//            std::cin.ignore();
//            std::getline(std::cin, zapyt);
//            poshukZaNazvoiu(knyhy, 10, zapyt);
//            break;
//        case 5:
//            sortuvanniaZaNazvoiu(knyhy, 10);
//            std::cout << "Sortuvannia vykonano." << std::endl;
//            break;
//        case 6:
//            sortuvanniaZaAvtorom(knyhy, 10);
//            std::cout << "Sortuvannia vykonano." << std::endl;
//            break;
//        case 7:
//            sortuvanniaZaVydavnytstvom(knyhy, 10);
//            std::cout << "Sortuvannia vykonano." << std::endl;
//            break;
//        case 8:
//            return 0;
//        default:
//            std::cout << "Nekorektnyi vybir." << std::endl;
//        }
//    }
//
//    return 0;
//}







//struct Mashyna {
//    std::string kolir;
//    std::string model;
//    union Nomer {
//        int nomerCysly;
//        char nomerSlovo[9]; 
//    } nomer;
//    bool isNumeric;
//};
//
//
//void zapovnytyMashynu(Mashyna& mashyna) {
//    std::cout << "Vedite kolir: ";
//    std::cin >> mashyna.kolir;
//    std::cout << "Vedite model: ";
//    std::cin >> mashyna.model;
//    std::cout << "Vibirite typ nomera (1 - chyslovyi, 2 - slovo): ";
//    int vybir;
//    std::cin >> vybir;
//    if (vybir == 1) {
//        std::cout << "Vedite p'iatyznachnyi nomer: ";
//        std::cin >> mashyna.nomer.nomerCysly;
//        mashyna.isNumeric = true;
//    }
//    else {
//        std::cout << "Vedite nomer (slovo do 8 simvoliv): ";
//        std::cin >> mashyna.nomer.nomerSlovo;
//        mashyna.isNumeric = false;
//    }
//}
//
//
//void drukuvatyMashynu(const Mashyna& mashyna) {
//    std::cout << "Kolir: " << mashyna.kolir << ", Model: " << mashyna.model << ", Nomer: ";
//    if (mashyna.isNumeric) {
//        std::cout << mashyna.nomer.nomerCysly << std::endl;
//    }
//    else {
//        std::cout << mashyna.nomer.nomerSlovo << std::endl;
//    }
//}
//
//
//void redahuvatyMashynu(Mashyna& mashyna) {
//    std::cout << "Vedite novyi kolir: ";
//    std::cin >> mashyna.kolir;
//    std::cout << "Vedite novu model: ";
//    std::cin >> mashyna.model;
//    std::cout << "Vibirite typ novogo nomera (1 - chyslovyi, 2 - slovo): ";
//    int vybir;
//    std::cin >> vybir;
//    if (vybir == 1) {
//        std::cout << "Vedite p'iatyznachnyi novyi nomer: ";
//        std::cin >> mashyna.nomer.nomerCysly;
//        mashyna.isNumeric = true;
//    }
//    else {
//        std::cout << "Vedite novyi nomer (slovo do 8 simvoliv): ";
//        std::cin >> mashyna.nomer.nomerSlovo;
//        mashyna.isNumeric = false;
//    }
//}
//
//
//void drukuvatyVsiMashyny(const Mashyna mashyny[], int rozmir) {
//    for (int i = 0; i < rozmir; ++i) {
//        drukuvatyMashynu(mashyny[i]);
//    }
//}
//
//
//void poshukZaNomerom(const Mashyna mashyny[], int rozmir, const std::string& nomer) {
//    for (int i = 0; i < rozmir; ++i) {
//        if ((mashyny[i].isNumeric && std::to_string(mashyny[i].nomer.nomerCysly) == nomer) ||
//            (!mashyny[i].isNumeric && mashyny[i].nomer.nomerSlovo == nomer)) {
//            drukuvatyMashynu(mashyny[i]);
//        }
//    }
//}
//
//int main() {
//    Mashyna mashyny[10];
//
//    
//    for (int i = 0; i < 10; ++i) {
//        std::cout << "Zapovnennia mashyny " << i + 1 << ":\n";
//        zapovnytyMashynu(mashyny[i]);
//    }
//
//    int vybir;
//    std::string zapyt;
//    while (true) {
//        std::cout << "Menu:\n";
//        std::cout << "1. Redahuvaty mashynu\n";
//        std::cout << "2. Drukuvaty vsi mashyny\n";
//        std::cout << "3. Poshuk mashyny za nomerom\n";
//        std::cout << "4. Vyhid\n";
//        std::cout << "Vvedit svii vybir: ";
//        std::cin >> vybir;
//
//        switch (vybir) {
//        case 1:
//            std::cout << "Vvedit nomer mashyny (1-10): ";
//            int nomer;
//            std::cin >> nomer;
//            if (nomer >= 1 && nomer <= 10) {
//                redahuvatyMashynu(mashyny[nomer - 1]);
//            }
//            else {
//                std::cout << "Nekorektnyi nomer." << std::endl;
//            }
//            break;
//        case 2:
//            drukuvatyVsiMashyny(mashyny, 10);
//            break;
//        case 3:
//            std::cout << "Vvedit nomer (chyslo abo slovo): ";
//            std::cin.ignore();
//            std::getline(std::cin, zapyt);
//            poshukZaNomerom(mashyny, 10, zapyt);
//            break;
//        case 4:
//            return 0;
//        default:
//            std::cout << "N