#include <iostream>
#include<string>
using namespace std ;
 
int main(){
 
    string s ;
    cin>>s ;
    int arr[10] ={0};
    
 
 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='0')
            arr[0]++ ;
        if(s[i]=='1')
            arr[1]++ ;
        if(s[i]=='2')
            arr[2]++ ;
        if(s[i]=='3')
            arr[3]++ ;
        if(s[i]=='4')
            arr[4]++ ;
        if(s[i]=='5')
            arr[5]++ ;
        if(s[i]=='6')
            arr[6]++ ;
        if(s[i]=='7')
            arr[7]++ ;
        if(s[i]=='8')
            arr[8]++ ;
        if(s[i]=='9')
            arr[9]++ ;
    }
    for(int i=0 ; i<10 ; i++){
        cout << i << " " << arr[i] << endl ;
    }
 
    return 0 ;
}