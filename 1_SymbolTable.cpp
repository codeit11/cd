#include <iostream>
using namespace std;

int main(){
    
    cout<<"Enter your string: ";
    // string s = "a=b+c*5";
    string s;
    cin>>s;
    cout<<"\n";
    cout<<"----------Symbol Table----------\n";
    cout<<"Symbol\tAddress\t\tType\n";
    for(int i=0;s[i]!=0;i++){
        cout<<s[i]<<"\t"<<&s+i<<"\t";
        if(isalpha(s[i]))
        cout<<"Character\n";
        else if(isdigit(s[i]))
        cout<<"Integer\n";
        else
        cout<<"Operator\n";
    }
    return 0;
}
// Enter your string: a=b+c*5