#include<iostream>
using namespace std;

char before(char input) {
    if (input >= 'A' && input <= 'Z') {
        return input == 'A' ? 'Z' : input - 1;
    }
    return '0';
}
