#include<iostream>
using namespace std; 

int main (){
    int n;
    cout << "Enter the number of characters : ";
    cin >> n;
    char arr[n+1];
    cin >> arr;
    bool check = true;
    for(int i = 0; i<n; i++){
        if(arr[i]!=arr[n-i-1]){
            check = false;
            break;
        }
        
    }
    if(check){
        cout << "It is palindrome"<<endl;
    }
    else {
        cout<<"It is not palindrome\n";
    }
return 0;
}