#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    
    while(t--){
        string s;
        cin >> s ;
        
        if(s[s.size()-1]=='o')
            cout << "FILIPINO"<< endl ;
        else if(s[s.size()-1]=='u') 
            cout << "JAPANESE" << endl ;
        else if(s[s.size()-1]=='a')    
            cout << "KOREAN" << endl ;
    
    } 
    return 0 ;   
}