#include <iostream> // Įtraukiame iostream biblioteką, kad galėtume naudoti įvesties ir išvesties operacijas.
#include <fstream> // Įtraukiame iomanip biblioteką, naudosime vėliau rezultatų formatavimui.
using namespace std; // Kad nereikėtų rašyti std prie kiekvienos funkcijos
// --- FUNKCIJOS ---
// --- SKAIČIŲ ĮRAŠYMAS Į FAILĄ ---
void irasymas(int pirmasSkaicius, int antrasSkaicius) {
    ofstream output("numbers.txt");
    output << pirmasSkaicius << " " << antrasSkaicius;
    output.close();
}
// --- SKAIČIŲ SUMOS FUNKCIJA ---
int suma(int pirmasSkaicius, int antrasSkaicius){
    return pirmasSkaicius + antrasSkaicius;
}
// --- SKAIČIŲ SKIRTUMO FUNKCIJA ---
int skirtumas(int pirmasSkaicius, int antrasSkaicius) {
    return pirmasSkaicius - antrasSkaicius;
}
// -- SKAIČIŲ SANDAUGOS FUNKCIJA ---
int sandauga(int pirmasSkaicius, int antrasSkaicius) {
    return pirmasSkaicius * antrasSkaicius;
}
// --- SKAIČIŲ DALYBOS FUNKCIJA ---
int dalmuo(int pirmasSkaicius, int antrasSkaicius) {
    return pirmasSkaicius / antrasSkaicius;
}
// --- REZULTATO ĮRAŠYMAS Į FAILĄ ---
void rezultatai(int suma, int skirtumas, int sandauga, int dalmuo, int pirmasSkaicius, int antrasSkaicius) {
    ofstream output("results.txt");
    output << pirmasSkaicius << " + " << antrasSkaicius << " = " << suma << endl;
    output << pirmasSkaicius << " - " << antrasSkaicius << " = " << skirtumas << endl;
    output << pirmasSkaicius << " * " << antrasSkaicius << " = " << sandauga << endl;
    output << pirmasSkaicius << " / " << antrasSkaicius << " = " << dalmuo << endl;
}
// --- PAGRINDINĖ FUNKCIJA ---
int main() {
    // Vartotojas įrašo du skaičius, su kuriais atliksime veiksmus
    int skaicius1, skaicius2;
    cout << "Įvesk du skaičius: ";
    cin >> skaicius1 >> skaicius2;
    // Funkcijų iškvietimas
    irasymas(skaicius1, skaicius2);
    int sumaRez = suma(skaicius1, skaicius2);
    int skirtumasRez = skirtumas(skaicius1, skaicius2);
    int sandaugaRez = sandauga(skaicius1, skaicius2);
    int dalybaRez = dalmuo(skaicius1, skaicius2);
    rezultatai(sumaRez, skirtumasRez, sandaugaRez, dalybaRez, skaicius1, skaicius2);
    return 0;
}
