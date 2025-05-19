#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Ninja{

    enum Belt {
        White,
        Yellow,
        Orange,
        Green,
        Blue,
        Black
    };

    enum Weapon {
        Katana,
        Harikita,
        Bayblade
    };

   string FirstName;
   string ThirdName;

   Belt belt;
   Weapon weapon;
   bool gender;
};


void CreateNinja(Ninja* ninjas, int n) {
    for (size_t i = 0; i < n; i++) {
        cout << "Enter details for Ninja " << i + 1 << ":" << endl;
        cout << "Enter first name: "; cin >> ninjas[i].FirstName;
        cout << "Enter third name: "; cin >> ninjas[i].ThirdName;

        int beltInput;
        do {
            cout << "Enter belt (0-White, 1-Yellow, 2-Orange, 3-Green, 4-Blue, 5-Black): ";
            cin >> beltInput;
        } while (beltInput < 0 || beltInput > 5);
        ninjas[i].belt = static_cast<Ninja::Belt>(beltInput); 

        int weaponInput;
        do {
            cout << "Enter weapon (0-Katana, 1-Harikita, 2-Bayblade): ";
            cin >> weaponInput;
        } while (weaponInput < 0 || weaponInput > 2);
        ninjas[i].weapon = static_cast<Ninja::Weapon>(weaponInput); 

        cout << "Enter gender (1 for Male, 0 for Female): "; cin >> ninjas[i].gender;
        cout << endl;
    }
}

void OutputNinja(Ninja* ninjas, int n) {
    const char* beltNames[] = {"White", "Yellow", "Orange", "Green", "Blue", "Black"};
    const char* weaponNames[] = {"Katana", "Harikita", "Bayblade"};

    for (size_t i = 0; i < n; i++) {
        cout << "Ninja " << i + 1 << ":" << endl;
        cout << "First Name: " << ninjas[i].FirstName << endl;
        cout << "Third Name: " << ninjas[i].ThirdName << endl;
        cout << "Belt: " << beltNames[ninjas[i].belt] << endl;
        cout << "Weapon: " << weaponNames[ninjas[i].weapon] << endl;
        cout << "Gender: " << (ninjas[i].gender ? "Male" : "Female") << endl;
        cout << endl;
    }
}

void SortNinjasByBelt(Ninja* ninjas, int n) {
    std::sort(ninjas, ninjas + n, [](const Ninja& a, const Ninja& b) {
        return a.belt < b.belt;
    });
}

void SortNinjasByWeapon(Ninja* ninjas, int n) {
    std::sort(ninjas, ninjas + n, [](const Ninja& a, const Ninja& b) {
        return a.weapon < b.weapon;
    });
}

void SortNinjasByGender(Ninja* ninjas, int n) {
    std::sort(ninjas, ninjas + n, [](const Ninja& a, const Ninja& b) {
        return a.gender < b.gender;
    });
}

int main() {
    int n;
    cout << "Enter number of ninjas: ";
    cin >> n;

    Ninja* ninjas = new Ninja[n];
    CreateNinja(ninjas, n);
    OutputNinja(ninjas, n);

    SortNinjasByBelt(ninjas, n);
    cout << "Ninjas sorted by belt:" << endl;
    OutputNinja(ninjas, n);

    SortNinjasByWeapon(ninjas, n);
    cout << "Ninjas sorted by weapon:" << endl;
    OutputNinja(ninjas, n);

    SortNinjasByGender(ninjas, n);
    cout << "Ninjas sorted by gender:" << endl;
    OutputNinja(ninjas, n);

    delete[] ninjas; // Free allocated memory
    return 0;
}
