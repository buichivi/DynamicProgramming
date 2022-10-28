#include <sstream>
#include <vector>
#include <iostream>
#include <cctype>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> n;
	stringstream ss;
    ss << str;
    while(!ss.eof()) {
        int a;
        char ch;
        ss >> a >> ch;
        n.push_back(a);
    }
    return n;
}
long long int ConverStringToNumber(string str) {
    stringstream ss;
    ss << str;
    long long int n;
    ss >> n;
    return n;
}
string F[1000];
string f(int n) {
    if (n == 0 || n == 1)
        return "1";
    return f(n-2) + f(n-1);
}
void getNumberFromString(string str) {
   for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i]) && isdigit(str[i+1])) {
            cout << str[i];
        }   
        else if (isdigit(str[i]) && !isdigit(str[i+1]))
            cout << str[i] << endl;
    }
}
int main() {
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // string str;
    // cin >> str;
    // vector<int> integers = parseInts(str);
    // for(int i = 0; i < integers.size(); i++) {
    //     cout << integers[i] << "\n";
    // }
    // stringstream ss;
    // ss.str("My name is Drip Too Hard");
    // cout << ss.str();
    string str; getline(cin, str); 
    // cin >> str;   
    // cout << "Hello World!";
    getNumberFromString(str);
    // ReadNumber(str);    
    return 0;
}