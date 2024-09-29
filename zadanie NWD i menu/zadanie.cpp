#include <iostream>
#include <time.h>
#include <string>

int iloscOcen = 0;
float oceny[100];
float ocenyDop[] = { 0.00,1.00,1.50,1.75,2.00,2.50,2.75,3.00,3.50,3.75,4.00,4.50,4.75,5.00,5.50,5.75,6.00 };
int iloscOceny[] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
float max = 0;
float min = 6;
float sumaOcen = 0;
float sredniaOcen = 0;
int counter = 0;
bool found = false;

int findS(std::string text, char s) {
    for (int i = 0; i <= text.length(); i++) {
        if (text[i] == s) {
            return i;
        }
    }
    return -1;
}

void countGrades() {
    for (int i = 0; i <= iloscOcen - 1; i++) {
        for (int j = 0; j <= 16; j++) {
            if (oceny[i] == ocenyDop[j]) {
                iloscOceny[j]++;
            }
        }
    }
}

void zad1() {
    int wiekPracownikow[16] = { 18,17,21,33,18,17,21,33,18,17,21,33,18,17,21,33 };
    int sredniWiek = 21;

    double iloscPieniedzyNaKonciePracownika[16] = { 424.51, 843.24, 160.83, 920.34, 638.12, 160.83, 920.34, 638.12,843.24, 160.83, 920.34, 638.12,843.24, 160.83, 920.34, 638.12 };
    float sredniaIloscPieniedzyNaKoncie = 521.50;

    std::string imionaPracownikow[16] = { "Franek","Tadeusz","Adam","Kacper","Marcin" ,"Tadeusz","Adam","Kacper","Marcin" ,"Tadeusz","Adam","Kacper","Marcin" ,"Tadeusz","Adam","Kacper" };

    bool czyPracownikJestPelnioletni[16] = { false,true,true,true,false,true,true,true,false,true,true,true,false,true,true,true };

    char plec[16] = { 'M', 'M', 'M', 'M','M', 'M', 'M', 'M','M', 'M', 'M', 'M','M', 'M', 'M', 'M' };

    std::string wykonywanePrace[16] = { "Spawacz","Lekarz","Sprzedawca","Nauczyciel","Kierowca","Lekarz","Sprzedawca","Nauczyciel","Kierowca","Lekarz","Sprzedawca","Nauczyciel","Kierowca","Lekarz","Sprzedawca","Nauczyciel" };

    std::cout << "informacje o pracownikach:" << std::endl;
    for (int i = 0; i <= 15; i++) {

        std::cout << i + 1;
        if (i + 1 < 10) {
            std::cout << ".  ";
        }
        else if (i + 1 >= 10) {
            std::cout << ". ";
        }
        std::cout << "Imie: " << imionaPracownikow[i] << ", ";

        for (int g = 0; g <= 10 - imionaPracownikow[i].length(); g++) {
            std::cout << " ";
        }
        std::cout << "wiek: " << wiekPracownikow[i] << " ";
        if (wiekPracownikow[i] > sredniWiek) {
            std::cout << " >  sredni, ";
        }
        else if (wiekPracownikow[i] < sredniWiek) {
            std::cout << " <  sredni, ";
        }
        else {
            std::cout << " == sredni, ";
        }

        std::cout << "Czy pelnioletni: ";
        if (czyPracownikJestPelnioletni[i] == true) {
            std::cout << "Tak, ";
        }
        else {
            std::cout << "Nie, ";
        }

        std::cout << "plec: ";
        if (plec[i] == 'M' || plec[i] == 'm') {
            std::cout << "mezczyzna, ";
        }
        else if (plec[i] == 'F' || plec[i] == 'f') {
            std::cout << "kobieta, ";
        }
        else {
            std::cout << "nieznana/inna, ";
        }

        std::cout << "Wykonywana praca: " << wykonywanePrace[i] << ", ";
        for (int o = 0; o <= 15 - wykonywanePrace[i].length(); o++) {
            std::cout << " ";
        }

        std::cout << "Stan Konta: " << iloscPieniedzyNaKonciePracownika[i] << " ";
        if (iloscPieniedzyNaKonciePracownika[i] > sredniaIloscPieniedzyNaKoncie) {
            std::cout << " > sredni, ";
        }
        else if (iloscPieniedzyNaKonciePracownika[i] < sredniaIloscPieniedzyNaKoncie) {
            std::cout << " < sredni, ";
        }
        else {
            std::cout << " == sredni, ";
        }

        std::cout << std::endl;
    }

}
void zad2() {

    std::string imiona[16] = { "Franek","Tadeusz","Adam","Jakub","Kacper","Marcin","Jakub","Adam","Dorota","Aleksandra","Michał","Stefan","Tadeusz","Rafał","Tymon","Szymon" };
    std::string nazwiska[16] = { "Nowak", "Kowalski","Tymianek-Kapusta","Kowalski-Nowak","Grzybowski","Pelc","Grzybowski","Pelc","Samiński","Nowak", "Kowalski","Tymianek-Kapusta","Kowalski-Nowak","Grzybowski","Pelc","Samiński" };

    std::string adres[16] = { "Sosnowa 17", "Kminkowa 12", "Krakowska 47","Balonowa 18","Jemiolowa 2","Rozana 7","Polna 6","Powstancow slaskich 19","Kminkowa 7","Sosnowa 1","Jemiolowa 8","Krakowska 30","Balonowa 16","Polna 9","Orla 12","Orla 7" };

    std::string miejscowosc[16] = { "Wroclaw", "Warszawa", "Gdansk" ,"Łódź","Wroclaw", "Warszawa", "Gdansk" ,"Łódź" ,"Wroclaw", "Warszawa", "Gdansk" ,"Łódź" ,"Wroclaw", "Warszawa", "Gdansk" ,"Łódź" };

    std::string pierwszeTrzy;
    std::string drugieTrzy;

    for (int i = 0; i <= 15; i++) {
        int kreska = findS(nazwiska[i], '-');
        pierwszeTrzy = imiona[i].substr(0, 3);
        if (kreska == -1) {
            drugieTrzy = nazwiska[i].substr(0, 3);
        }
        else {
            drugieTrzy = nazwiska[i].substr(0, 2);
            drugieTrzy += nazwiska[i].substr(kreska + 1, 1);
        }


        std::cout << pierwszeTrzy << ". " << drugieTrzy;
        std::cout << ". adres: " << adres[i] << " ";
        for (int b = 0; b <= 50 - adres[i].length(); b++) {
            std::cout << " ";
        }
        std::cout << "Miejscowosc: " + miejscowosc[i];

        std::cout << std::endl;
    }
}
void zad3() {
    while (iloscOcen < 4 || iloscOcen>100) {
        std::cout << "Podaj ilosc ocen z przedmiotow(max 100 min 4):";
        std::cin >> iloscOcen;
    }

    for (int i = 0; i <= iloscOcen - 1; i++) {

        std::cout << "Podaj ocene:";
        std::cin >> oceny[i];
        std::cout << std::endl;

        for (int j = 0; j <= 16; j++) {
            if (oceny[i] == ocenyDop[j]) {
                found = true;
            }
        }

        if (found != true) {
            std::cout << "Podano niedozwolona wartosc oceny" << std::endl;
            i--;
            continue;
        }
        found = false;

        if (oceny[i] > max) {
            max = oceny[i];
        }
        if (oceny[i] < min) {
            min = oceny[i];
        }
    }

    for (int m = 0; m <= iloscOcen - 1; m++) {
        if (oceny[m] != 0)
        {
            sumaOcen += oceny[m];
            counter++;
        }

    }

    countGrades();
    sredniaOcen = sumaOcen / counter;

    std::cout << "Twoja srednia ocen wynosi: " << sredniaOcen << std::endl;
    std::cout << "Twoja najwyzsza ocena: " << max << std::endl;
    std::cout << "Twoja najnizsza ocena: " << min << std::endl;

    for (int k = 0; k <= 16; k++) {
        if (iloscOceny[k] > 0) {
            std::cout << ocenyDop[k] << " wystapila: " << iloscOceny[k] << " razy" << std::endl;;
        }
    }


}
void zad4() {
    std::string names[10];
    float points[10];
    float percents[10];
    int grade[10];
    int counter = 0;
    int percentGrades[] = { 39, 54, 69, 85, 99 };


    for (int i = 0; i <= 30; i++) {

        std::cout << "Podaj imie ucznia:";
        std::cin >> names[i];
        std::cout << std::endl;
        if (names[i] == "0") {
            break;
        }
        else {
            counter++;
        }

        std::cout << "Podaj punkty uzyskane przez ucznia (od 0 do 30):";
        std::cin >> points[i];
        std::cout << std::endl;
    }
    for (int i = 0; i <= counter - 1; i++) {

        if (points[i] < 0 || points[i] > 30) {
            std::cout << "Podano niewlasciwa ocene sprobuj ponownie" << std::endl;
            i--;
            continue;
        }

        percents[i] = points[i] / 30 * 100;

        if (percents[i] < percentGrades[0]) {
            grade[i] = 1;
        }
        else {
            for (int f = 1; f <= 5; f++) {
                if (percents[i] >= percentGrades[f - 1]) {
                    grade[i] = f + 1;
                }
            }
        }
    }
    for (int j = 0; j <= counter - 1; j++) {
        std::cout << names[j];

        for (int l = 0; l <= 20 - names[j].length(); l++) {
            std::cout << " ";
        }

        std::cout << grade[j];
        std::cout << "          ";
        std::cout << percents[j];
        std::cout << std::endl;
    }
}

void NWD1() { //B1.a
    //kr00
    long long a, b, c; //kr01
    std::cout << "Ile pomiarow chesz wykonac: ";
    std::cin >> c;
    if (c <= 0) {
        c = 1;
    }
    std::cout << std::endl;

    double pomiary[c];
    long long iteracje[c];
    int liczby[c];

    std::cout << "Podaj dwie liczby: ";
    std::cin >> a >> b;
    long long bT = b;
    long long tempB = b;
    long long tempB2 = b;
    for (int j = 0; j <= c - 1; j++) {
        if (j != 0) {
            bT += tempB;
        }
        liczby[j] = bT;
    }

    std::cout << "|==================================|" << std::endl;
    for (int i = 0; i <= c - 1; i++) {
        b = tempB;
        if (i != 0) {
            b += tempB2;
        }
        tempB = b;

        clock_t start = clock(); //B2
        while (a != b) { //kr02
            if (a < b) { //kr03
                b = b - a;
            }
            else {
                a = a - b;
            }
            iteracje[i]++;
        }
        clock_t end1 = clock();

        double elapsed = static_cast<double>(end1 - start) / CLOCKS_PER_SEC;



        pomiary[i] = elapsed * 1000;

        std::cout << "| Pomiar " << i + 1 << " NWD (" << a << "," << liczby[i] << ") = " << a << std::endl; //kr04
        std::cout << "| Czas: " << " " << pomiary[i] << std::endl;
        std::cout << "| Iteracje: " << " " << iteracje[i] << std::endl;
        std::cout << std::endl;
    }
    std::cout << "|==================================|" << std::endl;
    std::cout << std::endl;
    int czas[c];

    for (int k = 0; k <= c - 1; k++) {
        czas[k] = pomiary[k];
        for (int h = 0; h <= 100; h++) {
            if (czas[k] == h) {
                std::cout << "*";
            }

            else {
                std::cout << ".";

            }
        }
        std::cout << std::endl;
    }


} //kr05
void NWD2() { //B1.b
    clock_t start2 = clock(); //?B2
    int tmp;
    int a, b; //kr01
    std::cout << "Podaj dwie liczby: ";
    std::cin >> a >> b;
    while (b != 0) { //kr02
        tmp = b; //kr03
        b = a % b; //kr04
        a = tmp; //kr05
    }
    std::cout << "NWD = " << a << std::endl; //kr06
    clock_t end2 = clock();
    double elapsed2 = double(end2 - start2) / CLOCKS_PER_SEC;
    std::cout << "Czas wykonania: " << elapsed2 << std::endl;
}

int main() {
    bool isTrue = true;
    while (isTrue) {
        int userInput;
        std::cout << "|==================================|" << std::endl;
        std::cout << "| Wybierz:                         |" << std::endl;
        std::cout << "|==================================|" << std::endl;
        std::cout << "| 0. Exit                          |" << std::endl;
        std::cout << "| 1. NWD sp1 + ilosc pomiarow      |" << std::endl;
        std::cout << "| 2. NWD sp2                       |" << std::endl;
        std::cout << "| 3. zad1                          |" << std::endl;
        std::cout << "| 4. zad2                          |" << std::endl;
        std::cout << "| 5. zad3                          |" << std::endl;
        std::cout << "| 6. zad4                          |" << std::endl;
        std::cout << "|==================================|" << std::endl;
        std::cout << ":";
        std::cin >> userInput;
        std::cout << std::endl;

        switch (userInput)
        {
        case 0:
            isTrue = false;
            break;
        case 1:
            NWD1();
            break;
        case 2:
            NWD2();
            break;
        case 3:
            zad1();
            break;
        case 4:
            zad2();
            break;
        case 5:
            zad3();
            break;
        case 6:
            zad4();
            break;
        default:
            isTrue = false;
            break;
        }
    }

}
