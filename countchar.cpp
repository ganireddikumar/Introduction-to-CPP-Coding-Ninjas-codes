#include <iostream>
using namespace std;
int main() {
    char ch;
    int alph=0,num=0,sp=0;
    while(ch!='$'){
        cin.get(ch);
        if ((ch>='a' && ch <='z')||(ch>='A'&& ch <='Z')){
            alph++;
        }
        else if(ch>='0'&&ch<='9'){
            num++;
        }
        else if(ch==' '||ch=='\n'||ch=='\t'){
            sp++;
        }
    }
    cout<<alph<<" "<<num<<" "<<sp<<endl;
    return 0;
}
