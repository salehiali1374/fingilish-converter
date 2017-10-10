#include <string.h>
#include <iostream>

using namespace std;


string en_fa_convert(string str){
    std::string res = "";
    for(int i = 0 ; i<str.length(); i++){
        switch (str[i]) {
            case 'a':
                res +="ش";
                break;
            case 'b':
                res +="ذ";
                break;
            case 'c':
                res +="ز";
                break;
            case 'd':
                res +="ی";
                break;
            case 'e':
                res +="ث";
                break;
            case 'g':
                res +="ل";
                break;
            case 'f':
                res +="ب";
                break;
            case 'h':
                res +="ا";
                break;
            case 'i':
                res +="ه";
                break;
            case 'j':
                res +="ت";
                break;
            case 'k':
                res +="ن";
                break;
            case 'l':
                res +="م";
                break;
            case 'm':
                res +="پ";
                break;
            case 'n':
                res +="د";
                break;
            case 'o':
                res +="خ";
                break;
            case 'p':
                res +="ح";
                break;
            case 'q':
                res +="ض";
                break;
            case 'r':
                res +="ق";
                break;
            case 's':
                res +="س";
                break;
            case 't':
                res +="ف";
                break;
            case 'u':
                res +="ع";
                break;
            case 'v':
                res +="ر";
                break;
            case 'w':
                res +="ص";
                break;
            case 'x':
                res +="ط";
                break;
            case 'y':
                res +="غ";
                break;
            case 'z':
                res +="ظ";
                break;
            case '[':
                res +="ج";
                break;
            case ']':
                res +="چ";
                break;
            case ';':
                res +="ک";
                break;
            case ',':
                res +="و";
                break;
            case ' ':
                res +=" ";
                break;
            case '.' :
                res +=".";
                break;
            case '?' :
                res +="؟";
                break;
            case ':' :
                res +=":";
                break;
            case '<' :
                res +="<";
                break;
            case '>' :
                res +=">";
                break;
            case '`' :
                res +="`";
                break;
            case '/' :
                res +="/";
                break;
        }
    }
    return res;
}

int main(){
        std::string string1, result;
        cout << "Please Enter Your Text:\n";
        getline(cin, string1);
        result = en_fa_convert(string1);
        cout << result << "\n------------------------------------------------------------\n";
}
