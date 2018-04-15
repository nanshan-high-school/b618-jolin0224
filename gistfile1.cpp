#include <iostream>
using namespace std;
int main(){   
    int L, D; 
    cout << "請輸入目前位置";//1 -1 2 -2 3  
    cin >> L;  
    if(L > 0){   
        cout << L * 2 - 1; 
    }else if(L < 0){     
        cout << L * -2;  
    }  
    return 0;
}

