#include <iostream>
#include <string>

using namespace std;

//function to reverse a string
string reverse(string str){
    string reversed = "";
    for (char ch : str){
        reversed = ch + reversed;
    }
    return reversed;
}

int main(){

    int N;
    cin >> N;
    string* str = new string[N];

    for (size_t i = 0; i < N; i++){
        cin >> str[i];
    }
    
    for (size_t i = 0; i < N; i++){
        cout << reverse(str[i]) << endl;
    }
    
    delete[] str; 


}