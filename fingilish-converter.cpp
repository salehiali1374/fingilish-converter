#include <string.h>
#include <iostream>

using namespace std;

void en_fa_convert(char* str, char* res){
    while(*str){
        switch (*str) {
            case 'a': strcat(res, "ش"); break;
            case 'b': strcat(res, "ذ"); break;
            case 'c': strcat(res, "ز"); break;
            case 'd': strcat(res, "ی"); break;
            case 'e': strcat(res, "ث"); break;
            case 'g': strcat(res, "ل"); break;
            case 'f': strcat(res, "ب"); break;
            case 'h': strcat(res, "ا"); break;
            case 'i': strcat(res, "ه"); break;
            case 'j': strcat(res, "ت"); break;
            case 'k': strcat(res, "ن"); break;
            case 'l': strcat(res, "م"); break;
            case 'm': strcat(res, "پ"); break;
            case 'n': strcat(res, "د"); break;
            case 'o': strcat(res, "خ"); break;
            case 'p': strcat(res, "ح"); break;
            case 'q': strcat(res, "ض"); break;
            case 'r': strcat(res, "ق"); break;
            case 's': strcat(res, "س"); break;
            case 't': strcat(res, "ف"); break;
            case 'u': strcat(res, "ع"); break;
            case 'v': strcat(res, "ر"); break;
            case 'w': strcat(res, "ص"); break;
            case 'x': strcat(res, "ط"); break;
            case 'y': strcat(res, "غ"); break;
            case 'z': strcat(res, "ظ"); break;
            case '[': strcat(res, "ج"); break;
            case ']': strcat(res, "چ"); break;
            case ';': strcat(res, "ک"); break;
            case ',': strcat(res, "و"); break;
            case ' ': strcat(res, " "); break;
            case '.' : strcat(res, "."); break;
            case '?' : strcat(res, "؟"); break;
            case ':' : strcat(res, ":"); break;
            case '<' : strcat(res, "<"); break;
            case '>' : strcat(res, ">"); break;
            case '`' : strcat(res, "`"); break;
            case '/' : strcat(res, "/"); break;
        }
        str++;
    }
}

const int SIZE = 1000; //length of text

int main(){
    char* str = new char[SIZE];
    char* res = new char[SIZE];
    cout << "enter your text here: ";
    cin.getline(str, SIZE, '\n');
    en_fa_convert(str, res);
    cout << res << endl;
    delete[] str; delete[] res;
}
