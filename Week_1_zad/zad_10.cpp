#include <iostream>
#include <string>

using namespace std;

string inticards(string card_name, string card_suit) {
    while (true) {
        for (char &c : card_name) c = toupper(c);
        for (char &c : card_suit) c = toupper(c);

        if (card_name != "J" && card_name != "9" && card_name != "A" &&
            card_name != "10" && card_name != "K" && card_name != "Q" &&
            card_name != "8" && card_name != "7") {
            cout << "Invalid card name. It must be J; 9; A; 10; K; Q; 8; 7." << endl;
            cout << "Enter card name again: ";
            cin >> card_name;
            continue;
        }

        if (card_suit != "S" && card_suit != "H" && card_suit != "D" && card_suit != "C") {
            cout << "Invalid card suit. It must be S; H; D; C." << endl;
            cout << "Enter card suit again: ";
            cin >> card_suit;
            continue;
        }

        break;
    }

    return card_name + card_suit;
}

int getRankValueWOTrump(const string &card) {
    string rank = card.substr(0, card.length() - 1);
    if (rank == "A") return 8;
    if (rank == "10") return 7;
    if (rank == "K") return 6;
    if (rank == "Q") return 5;
    if (rank == "J") return 4;
    if (rank == "9") return 3;
    if (rank == "8") return 2;
    if (rank == "7") return 1;
    return 0;
}

int getRankValueTrump(const string &card) {
    string rank = card.substr(0, card.length() - 1);
    if (rank == "J") return 8;
    if (rank == "9") return 7;
    if (rank == "A") return 6;
    if (rank == "10") return 5;
    if (rank == "K") return 4;
    if (rank == "Q") return 3;
    if (rank == "8") return 2;
    if (rank == "7") return 1;
    return 0;
}

void sortCards(string cards[], int N, string trump) {
    if (trump == "trump" || trump == "TRUMP"){
        for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (getRankValueTrump(cards[j]) < getRankValueTrump(cards[j + 1])) {
                string temp = cards[j];
                cards[j] = cards[j + 1];
                cards[j + 1] = temp;
            }
        }
    }
} else {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (getRankValueWOTrump(cards[j]) < getRankValueWOTrump(cards[j + 1])) {
                string temp = cards[j];
                cards[j] = cards[j + 1];
                cards[j + 1] = temp;
            }
        }
    }
} 

}

int main() {
    cout << "In belot, there are 32 cards. How many do you want to compare: ";
    int N;
    cin >> N;

    if (N <= 0 || N > 32) {
        cout << "Invalid number of cards. Please enter a number between 1 and 32." << endl;
        return 1;
    }

    string *cards = new string[N];
    string card_name, card_suit;

    cout << "Card names: A; 10; K; Q; J; 9; 8; 7." << endl;
    cout << "Card suits: S; H; D; C." << endl;

    for (int i = 0; i < N; i++) {
        cout << "Enter card name " << i + 1 << ": ";
        cin >> card_name;

        cout << "Enter card suit " << i + 1 << ": ";
        cin >> card_suit;

        cards[i] = inticards(card_name, card_suit);
    }

    cout << "Trump or not: ";
    string trump;
    cin >> trump;

    sortCards(cards, N, trump);

    cout << "Sorted cards: ";
    for (int i = 0; i < N; i++) {
        cout << cards[i] << " ";
    }
    cout << endl;

    delete[] cards;
    return 0;
}