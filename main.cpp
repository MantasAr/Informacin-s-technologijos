#include <iostream> // Įtraukiame iostream biblioteką, kad galėtume naudoti įvesties ir išvesties operacijas.

using namespace std;  // Kad nereikėtų rašyti std prie kiekvienos funkcijos


// Funkcija, kuri generuoja ir išveda sakinį pagal pateiktus duomenis
void generuotiSakini(string vardas, string pavarde, int amzius, string profesija) {
    // Išvedamas sakinys su duomenimis
    cout << vardas << " " << pavarde << " yra " << amzius << "-aisiais metais gimes " << profesija << "." << endl;
}

int main() {
    // Pirmasis kvietimas funkcijai su konkrečiais duomenimis
    generuotiSakini("Jonas", "Jonaitis", 30, "programuotojas");

    // Antrasis kvietimas funkcijai su skirtingais duomenimis
    generuotiSakini("Marius", "Mariukas", 25, "inzinierius");

    return 0;
}
