#include<iostream>
using namespace std; 

int main (){
    int n;
    cout << "Enter the number of characters : ";
    cin >> n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n);

    
    int i =0; 
    int currllen=0, maxlen = 0;
    int st = 0, maxst = 0;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currllen > maxlen){
                maxst = st;
                maxlen = currllen;
                
            }
            currllen = 0;
            st = i+1;  
        }
        else {
            currllen++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i = 0; i<maxlen; i++){
        cout<<arr[i+maxst];
    }
return 0;
}