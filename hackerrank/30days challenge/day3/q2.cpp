#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s; //12:00:00AM;
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = s[1] = '0';
        }
        // cout << s;
    }

    else if (s[8] == 'P')
    {
        
        if (s[0] == '0')
        {
            
            switch (s[1])
            {
            case '1':{
                s[0] = '1';
                s[1] = '3';
                
                
                break;
                }

            case '2':{
                s[0] = '1';
                s[1] = '4';
                break;
            }
            case '3':{
                s[0] = '1';
                s[1] = '5';
                break;
            }
            case '4': {
                s[0] = '1';
                s[1] = '6';
                break;
            }
            case '5':{
                s[0] = '1';
                s[1] = '7';
                break;
            }
            case '6':{
                s[0] = '1';
                s[1] = '8';
                break;
            }
            case '7':{
                s[0] = '1';
                s[1] = '9';
                break;
            }
            case '8':{
                s[0] = '2';
                s[1] = '0';
                break;
            }
            case '9':{
                s[0] = '2';
                s[1] = '1';
                break;
            }
            }
        }
        else if (s[0] == '1')
        {
            switch (s[1])
            {
            case '0':
                s[0] = '2';
                s[1] = '2';
                break;
            case '1':
                s[0] = '2';
                s[1] = '3';
                break;
            case '2':
                s[0] = '1';
                s[1] = '2';
            }
        }
    }
    for(int i =0; i<8; i++) {
        cout << s[i];
    }
    return 0;
}