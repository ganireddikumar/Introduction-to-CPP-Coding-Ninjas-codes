#include <iostream>
using namespace std;
void celtofaren(int t){
    int c;
    c = ((t-32)*5)/9;
    cout<<t<<'\t'<<c<<endl;

}
int main() {
    int start,end,diff;
    cin>>start;
    cin>>end;
    cin>>diff;
    for(int t=start;t<=end;t+=diff){
        celtofaren(t);
    }
}
