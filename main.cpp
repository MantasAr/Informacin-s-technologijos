#include <iostream> // Įtraukiame iostream biblioteką, kad galėtume naudoti įvesties ir išvesties operacijas.

#include <fstream> // Įtraukiame iomanip biblioteką, naudosime vėliau rezultatų formatavimui.

#include <string> // Kad nereikėtų rašyti std prie kiekvienos funkcijos

using namespace std;

// Funkcija, kuri išveda žodžius iš failo į konsolę
void isvestiZodziusIsFailo(const string& failoVardas) {
    ifstream failas(failoVardas);

    // Patikrinama, ar failas sėkmingai atidarytas
    if (!failas.is_open()) {
        cout << "Nepavyko atidaryti failo" << endl;
        return;
    }

    string zodis;
    // Skaityti žodžius iš failo ir išvesti į konsolę
    while (failas >> zodis) {
        cout << "- " << zodis << endl;
    }

    failas.close();
}

int main() {
    // Failo vardas, kurį norime apdoroti
    string failoVardas = "Duomenys.txt"; // Keiskite tai į norimą failo pavadinimą
    isvestiZodziusIsFailo(failoVardas);

    return 0;
}
