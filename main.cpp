#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        string str;
        cin>>str;
        char p[str.length()];

        for (int j = 0; j < sizeof(p); j=j+2)
        {
            p[j] = str[j];
            cout << p[j];
        }
        cout<<"  ";
        for (int k = 1; k < sizeof(p); k=k+2)
        {
            p[k] = str[k];
            cout << p[k];
        }

    }

    return 0;

}
