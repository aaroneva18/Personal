//Creado por Aarón Alvarado
//Este código da solución a problemas que resuelvo de la página de https://leetcode.com/ 


#include <iostream>
#include <string>
#include <map>
#include <cmath>
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

//Happy number

//Write an algorithm to determine if a number n is happy.
//
//A happy number is a number defined by the following process :
//
//Starting with any positive integer, replace the number by the sum of the squares of its digits.
//Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
//Those numbers for which this process ends in 1 are happy.
//Return true if n is a happy number, and false if not.
//
//
//
//Example 1:
//
//Input: n = 19
//Output : true
//Explanation :
//    12 + 92 = 82
//    82 + 22 = 68
//    62 + 82 = 100
//    12 + 02 + 02 = 1

bool isHappy(int n) {

    string num = std::to_string(n);
    for (char digit : num) {
        int result = 0;
        result = result + std::pow(digit,2);
        cout << result << "\n";
    }


    return false;
}


int main()
{
    //std::cout << "Hello World!\n";
    cout << isHappy(19);

}



