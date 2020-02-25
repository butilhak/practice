#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{

    char *s="GOODLUCK";
    for(int i=strlen(s)-1; i>=0; i--) {
        for (int j=0; j<=i; j++)
        cout << s[j];
        cout << endl;
    }

    return 0;
}
