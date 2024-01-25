#include <iostream> // Įtraukiame iostream biblioteką, kad galėtume naudoti įvesties ir išvesties operacijas.
#include <ctime> // Sukuriame seedą

using namespace std; // Kad nereikėtų rašyti std prie kiekvienos funkcijos

// Funkcija, kuri generuoja ir išveda nurodytą kiekį atsitiktinių skaičių
void generuotiAtsitiktinius(int kiekis) {
    // Inicializuojame atsitiktinių skaičių generatorių pagal dabartinį laiką
    srand(time(0));

    // Generuojame ir išvedame atsitiktinius skaičius
    for (int i = 0; i < kiekis; ++i) {
        cout << rand() << " ";
    }

    cout << endl;
}

int main() {
    // Kvietimas funkcijai su nurodytu skaičiumi atsitiktinių skaičių
    generuotiAtsitiktinius(5);

    return 0;
}
