#include <iostream>
 using namespace std;

 int *array_pad(int *vals, int len){

    int *pv = new int[len];
    pv = vals;
    
    
    cout << *(pv);
    for(int i = 0; i < len; i++){
       cout <<" "<< *(pv+i);  
    }
    cout <<" "<< *(pv+len-1);
    cout << endl;

    return pv;
 }