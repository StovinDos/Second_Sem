#include <iostream>

using namespace std;

void strToInteger(string str, int &lowestAge, int &highestAge){
    if (str == "Young" || str == "young")
    {
        lowestAge = 0;
        highestAge = 33;

        cout << "Young - (" << lowestAge << " - " << highestAge << ")" << endl;

    } else if (str == "Average" || str == "average")
    {
         lowestAge = 34;
         highestAge = 66;

         cout << "Average - (" << lowestAge << " - " << highestAge << ")" << endl;
    } else if (str == "Old" || str == "old")
    {
         lowestAge = 67;

            cout << "Old - (" << lowestAge << "+)" << endl;

    } else {
        cout << "Invalid input.";
    }
    


   
}

int main(){
    string str; int lowestAge, highestAge;
    cin >> str;

    strToInteger(str, lowestAge, highestAge);
}