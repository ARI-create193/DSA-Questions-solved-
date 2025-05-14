#include<iostream>
using namespace std;



int findunique(int arr[], int size) {

    int ans = 0;

    for(int i = 0; i<size; i++)  {
        ans = ans^arr[i] ; 
    }
    return ans;
    

}


int main () {
    int jio[7] = {1,3,6,2,1,3,6} ;

    int b = findunique(jio,7);
    cout<<b;
}


