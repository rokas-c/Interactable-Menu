// Author: Rokas Chmieliauskas
#include <iostream>
#include <iomanip>
#include <locale>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

struct pratimas {
    string pava;
    int kiekis;
    double kaina;
};

// === Pagrindinis meniu ===

void pagrindinisMeniu()
{
    system("CLS");
    system("COLOR F2");
    cout << "--------------------------------\n";
    cout << "|   Programavo                 |\n";
    cout << "|   Rokas Chmieliauskas KZA    |\n";
    cout << "--------------------------------\n";
    cout << "|  [0] - AUTORIUS              |\n";
    cout << "|  [1] - INICIALAI             |\n";
    cout << "|  [2] - GRAZAA                |\n";
    cout << "|  [3] - SKAICIUOTUVAS         |\n";
    cout << "|  [4] - GENERATORIUS          |\n";
    cout << "|  [5] - SARASAS               |\n";
    cout << "|  [6] - SLAPTAZODZIU ANALIZE  |\n";
    cout << "|  [7] - KURYBINIS PROJEKTAS   |\n";
    cout << "|  [8] - PABAIGA               |\n";
    cout << "--------------------------------\n";
}

// === Autoriaus isvedimas is .txt failo ===

void autorius()
{
    system("CLS");
    ifstream fn("autorius.txt");
    string eilute;
    while (!fn.eof())
    {
        getline(fn, eilute);
        cout << eilute << endl;
    }
    cout << endl << "Noredami gryzti i pagrindini meniu spauskite ENTER" << endl;
    system("pause");
    fn.close();
}

// === Inicialai ===

void inicialai()
{
    system("CLS");
    cout << "--------------------------------\n";
    cout << "|   Programavo:                |\n";
    cout << "|   Rokas Chmieliauskas KZA    |\n";
    cout << "---------------------------------------------------------------\n";
    cout << "|    ****************                                         |\n";
    cout << "|    ******************                                       |\n";
    cout << "|    *****          *****                                     |\n";
    cout << "|    *****            *****                                   |\n";
    cout << "|    *****            *****                                   |\n";
    cout << "|    *****            *****                                   |\n";
    cout << "|    *****          *****                                     |\n";
    cout << "|    *****        ******                                      |\n";
    cout << "|    *****************                                        |\n";
    cout << "|    ***********                       ******************     |\n";
    cout << "|    *************                   **********************   |\n";
    cout << "|    *****    ******               *********        ********  |\n";
    cout << "|    *****      ******            *******             ********|\n";
    cout << "|    *****        ******          ******              ********|\n";
    cout << "|    *****          ******        ******                      |\n";
    cout << "|    *****            ******      ******                      |\n";
    cout << "|    *****              ******    ******                      |\n";
    cout << "|                                 ******                      |\n";
    cout << "|                                 ******                      |\n";
    cout << "|                                 ******              ********|\n";
    cout << "|                                 *******             ********|\n";
    cout << "|                                  *********        ********  |\n";
    cout << "|                                    **********************   |\n";
    cout << "|                                      ******************     |\n";
    cout << "--------------------------------------------------------------- \n";
    cout << "Nor?dami gr?žti ? pagrindin? meniu spauskite |ENTER| \n \n";
    system("pause");
}

void graza()
{
    int m;
    int k500, k200, k100, k50, k20, k10, k5, k2, k1;
    system("CLS");
    cout << "Iveskite GRAZA: \n";
    cin >> m;
    cout << m << endl;

    k500 = m / 500;
    m = m % 500;

    k200 = m / 200;
    m = m % 200;

    k100 = m / 100;
    m = m % 100;

    k50 = m / 50;
    m = m % 50;

    k20 = m / 20;
    m = m % 20;

    k10 = m / 10;
    m = m % 10;

    k5 = m / 5;
    m = m % 5;

    k2 = m / 2;
    m = m % 2;

    k1 = m / 1;
    m = m % 1;

    if (k500 > 0)
    {
        cout << k500 << " + 500|";
    }
    if (k200 > 0)
    {
        cout << k200 << " + 200|";
    }
    if (k100 > 0)
    {
        cout << k100 << " + 100|";
    }
    if (k50 > 0)
    {
        cout << k50 << " + 50|";
    }
    if (k20 > 0)
    {
        cout << k20 << " + 20|";
    }
    if (k10 > 0)
    {
        cout << k10 << " + 10|";
    }
    if (k5 > 0)
    {
        cout << k5 << " + 5|";
    }
    if (k2 > 0)
    {
        cout << k2 << " + 2|";
    }
    if (k1 > 0)
    {
        cout << k1 << " + 1|";
    }

    system("pause");
}

void skaiciuotuvas()
{
    system("CLS");
    double x1, x2;
    char zenklas, pabaiga = 'n';
    while (pabaiga == 'n')
    {
        cout << "Iveskite pirma skaiciu: ";
        cin >> x1;

        cout << "Iveskite zenkla [ + | - | * | / | P | R ]: ";
        cin >> zenklas;

        cout << "Iveskite antra skaiciu: ";
        cin >> x2;

        if (zenklas == '+')
        {
            cout << x1 << " + " << x2 << " = " << x1 + x2 << endl;
        }
        if (zenklas == '-')
        {
            cout << x1 << " - " << x2 << " = " << x1 - x2 << endl;
        }
        if (zenklas == '*')
        {
            cout << x1 << " * " << x2 << " = " << x1 * x2 << endl;
        }
        if (zenklas == '/')
        {
            cout << x1 << " / " << x2 << " = " << x1 / x2 << endl;
        }
        if (zenklas == 'P')
        {
            cout << setprecision(4) << x1 << " P " << x2 << " = " << pow(x1, x2) << endl;
        }
        if (zenklas == 'R')
        {
            cout << x1 << " ~ " << round(x1) << endl;
        }

        cout << "Ar norite baigti? (t/n)";
        cin >> pabaiga;
    }
}

void Generatorius(int ilgis)
{
    ofstream fo("Slaptazodziai.txt", ios::app);
    string slaptazodis = "";
    char simbolis;
    srand(time(NULL));
    while (slaptazodis.size() < ilgis)
    {
        simbolis = rand();
        if (simbolis >= '0' && simbolis <= 'z')
            slaptazodis += simbolis;
    }
    fo << slaptazodis << endl;
    cout << "Sugeneruotas slaptazodis: [" << slaptazodis << "] irasytas i faila Slaptazodziai.txt" << endl;
    fo.close();
}

void skaitymas(vector <string> &S)
{
    ifstream fin("Slaptazodziai.txt");
    string eilute;
    while (!fin.eof())
    {
        getline(fin, eilute);
        S.push_back(eilute);
    }
    fin.close();
}

void spausdinimas(vector <string> S)
{
    for (int i = 0; i < S.size(); i++)
        cout << S[i] << endl;
}

bool palyginti(string a, string b)
{
    return a.size() < b.size();
}

int kiekis(char x, string slaptazodis) {
    int k = 0;
    for (int i = 0; i < slaptazodis.size(); i++) {
        if (slaptazodis[i] == x) k++;
    }
    return k;
}

int suma(char R, char r, vector<string> slaptazodis) {
    int s = 0;
    for (int i = 0; i < slaptazodis.size(); i++) {
        s += kiekis(R, slaptazodis[i]);
        s += kiekis(r, slaptazodis[i]);
    }
    return s;
}

void Skaityti(pratimas P[], int& sk) {
    ifstream fin("Inventorius.txt");

    sk = 0;

    while (fin >> P[sk].pava >> P[sk].kiekis >> P[sk].kaina) { // Vygdomas skaitymas pokol salyga taps (TRUE)
        sk++;
        if (sk >= 100) {
            cout << "Pasiektas limitas.\n";
            system("CLS");
        }
    }

    fin.close();
}

void Spauzdinimas(pratimas P[], int sk) {
    ofstream fon("Inventorius.txt", ios::app);
    for (int i = 0; i < sk; i++) {
        fon << P[i].pava << " " << P[i].kiekis << " " << P[i].kaina << endl;
    }

    fon.close();
}

void Inventorius(pratimas P[], int sk) {
    if (sk == 0) {
        cout << "\n === Inventorius yra tuscias ===\n";
    }
    else {

        cout << "\nInventorius:\n";
        for (int i = 0; i < sk; ++i) {
            cout << "Pavadinimas: " << P[i].pava << "\n";
            cout << "Kiekis: " << P[i].kiekis << "\n";
            cout << "Kaina: $" << P[i].kaina << "\n";
            cout << "------------------------\n";
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Lithuanian");
    int n;

meniu:
    pagrindinisMeniu();

    cout << "Pasirinkite norima meniu: ";
    cin >> n;

    if (n == 0)
    {
        autorius();
        goto meniu;
    }

    if (n == 1)
    {
        inicialai();
        goto meniu;
    }

    else if (n == 2)
    {
        graza();
        goto meniu;
    }

    if (n == 3)
    {
        skaiciuotuvas();
        goto meniu;
    }

    // === Slaptazodzio generatoriaus isvedimas ===

    if (n == 4)
    {
        system("CLS");
        int ilgis;
        cout << "Iveskite generuojamo slaptazodzio ilgi: " << endl;
        cin >> ilgis;
        Generatorius(ilgis);
        system("pause");
        goto meniu;
    }

    // === Slaptazodziu sarasas su ligiavimu ===

    if (n == 5)
    {
        system("CLS");
        vector <string> S;
        skaitymas(S);
        sort(S.begin(), S.end(), palyginti);
        spausdinimas(S);
        system("pause");
        goto meniu;
    }

    // === Slaptazodziu sarasas su analize ===

    if (n == 6)
    {
        system("CLS");
        vector <string> S;
        vector <float> C;
        float sum = 0, avg;
        skaitymas(S);
        sort(S.begin(), S.end(), palyginti);
        for (int i = 0;i < S.size(); i++) {
            C.push_back(S[i].length());
            sum = sum + C[i];
        }
        avg = sum / (C.size() - 1);

        cout << " === SLAPTAZODZIU ANALIZE ===" << endl;
        cout << " 1| Slaptazodziu kiekis: " << S.size() - 1 << endl;
        cout << " 2| Trumpiausias slaptazodis: " << "[" << S[1] << "]" << ", jo ilgis - " << S[1].length() << endl;
        cout << " 3| Ilgiausias slaptazodis: " << "[" << S[S.size() - 1] << "]" << ", jo ilgis - " << S[S.size() - 1].length() << endl;
        cout << " 4| Vidutinis slaptazodzio ilgis: " << setprecision(3) << avg << endl;
        cout << " 5| Slaptazodziuose yra raidziu (R, r) :  " << suma('R', 'r', S) << endl;
        system("pause");
        goto meniu;
    }

    // === Kurybinis projektas ===

    if (n == 7) 
    {
        pratimas P[100];
        int sk = 0;

        system("CLS");

        while (true) {

            cout << "\nInventoriaus valdymo meniu:\n";
            cout << "1. Prideti produkta i inventoriu.\n";
            cout << "2. Paziureti inventoriu.\n";
            cout << "3. Issaugoti ir iseiti.\n";

            int pas;
            cout << "----------------------------\n";
            cout << "Iveskite pasirinkta lentele: ";
            cin >> pas;

            if (pas == 1) {
                pratimas naujas;
                cout << "\nIveskite gaminio pavadinima: ";
                cin.ignore(); // Isvaloma irasyta atmintis
                getline(cin, naujas.pava); //Irasoma i kintamaju naujas.pava

                cout << "Iveskite produkto kieki: ";
                cin >> naujas.kiekis;

                cout << "Iveskite produkto kaina: $";
                cin >> naujas.kaina;

                P[sk++] = naujas; // Masyvas priskiriamas "naujas" | sk bus padidintas + 1
                cout << "---------------------------------\n";
                cout << "I inventoriu itrauktas produktas.\n";

                Spauzdinimas(P, sk);
            }
            else if (pas == 2) {

                Skaityti(P, sk);
                Inventorius(P, sk);
            }
            else if (pas == 3) {
                cout << "\nIssaugotas inventorius. Isjungiamas inventoriaus valdymo sistema.\n";
                system("CLS");
                goto meniu;
            }
            else {
                cout << "\nNetinkamas pasirinkimas. Prasome ivesti tinkama varianta.\n";
            }
        }
    }

    if (n == 8)
    {
        system("CLS");
        return 0;
    }
    return 0;
}
