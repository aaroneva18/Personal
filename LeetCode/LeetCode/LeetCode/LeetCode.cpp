//Creado por Aarón Alvarado
//Este código da solución a problemas que resuelvo de la página de https://leetcode.com/ 


#include <iostream>
#include <string>
#include <map>
using std::cout, std::string, std::map;

//Roman To Integer
int romanToInt(string s) {
    map<char, int> RomanNumbers;
    int num = 0;
    RomanNumbers['I'] = 1;
    RomanNumbers['V'] = 5;
    RomanNumbers['X'] = 10;
    RomanNumbers['L'] = 50;
    RomanNumbers['C'] = 100;
    RomanNumbers['D'] = 500;
    RomanNumbers['M'] = 1000;

    for (size_t i = 0; i < s.length(); i++) {
        for (auto it = RomanNumbers.begin(); it != RomanNumbers.end(); it++) {
            if (s[i] == it->first) {
                num = num + it->second;
            }
        }
    }
    return num;
}


int main()
{
    //std::cout << "Hello World!\n";
    int num = romanToInt("LXVII");
    cout << num;

}



