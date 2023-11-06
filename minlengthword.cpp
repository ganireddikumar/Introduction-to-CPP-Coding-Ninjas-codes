#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
void minlengthword(char str[],int n) {
    int start = 0, end = 0, minstart = 0, minend = 0;
    int diff = INT_MAX;
    for (int i = 0; i<n+1; i++) {
        if (str[i] == ' '||str[i]=='\0') {
            end = i - 1;
            if ((end - start) < diff) {
                diff = end - start;
                minstart = start;
                minend = end;
            }
            start = i + 1;
        }

    }
    for(int p=minstart;p<=minend;p++){
        cout<<str[p];
    }

}


int main(){
    char str[100];
    cin.getline(str, 100);
    int n = strlen(str);
    minlengthword(str, n);
}


