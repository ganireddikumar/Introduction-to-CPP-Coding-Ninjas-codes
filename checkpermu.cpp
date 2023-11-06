#include <iostream>
#include <cstring>
using namespace std;
bool checkpermu(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2)){
        return false;
    }
    int sum1=0,sum2=0;
    for(int i=0;i<strlen(str1);i++){
        sum1+=str1[i];
        sum2+=str2[i];
    }
    if(sum1==sum2){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    char str1[100];
    char str2[100];
    cin>>str1>>str2;
    if(checkpermu(str1,str2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
