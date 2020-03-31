#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pizza
{
public:
    string nazwaFirmy;
    int Srednica;
    float Waga;

    Pizza();
    Pizza(string nazwaFirmy, int Srednica, float Waga);
    void Wyswietl();
};

Pizza::Pizza() {

}
Pizza::Pizza(string nazwa, int Sred, float Wg) {
    nazwaFirmy = nazwa;
    Srednica = Sred;
    Waga = Wg;
}

vector <Pizza> tab;

int main()
{
    string name;
    int czyZakonczyc;
    int diameter;
    float weight;
    Pizza pitca;
    do {
        cout << "Podaj nazwe firmy: ";
        cin >> name;
        cout << "Podaj srednice pizzy: ";
        cin >> diameter;
        cout << "Podaj wage pizzy: ";
        cin >> weight;

        pitca = Pizza(name, diameter, weight);
        tab.push_back(pitca);
        cout << "Chcesz dodac kolejna pizze? (1 - tak, 0 - nie ) : ";
        cin >> czyZakonczyc;
    } while (czyZakonczyc == 1);
    for (int i = 0; i < tab.size(); i++) {
        cout << "----------------------------------------" << endl;
        cout << "Nazwa firmy: " << tab[i].nazwaFirmy << endl;
        cout << "Srednica: " << tab[i].Srednica << endl;
        cout << "Waga: " << tab[i].Waga << endl;
    }
  
   

}
