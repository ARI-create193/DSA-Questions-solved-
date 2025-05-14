#include<iostream>
using namespace std;


bool search(int arr[],int size,int key) {
    for (int i = 0; i<=size; i++) {
        if (arr[i] == key) {
            return 1;
        }
        
        
        
    }
    return 0;

}


int main() {


    int arr[6] = {2,5,6,7,9,10};

    cout << "Enter the element to serch for" << endl ;
    int key;

    cin>>key;

    bool found = search(arr,10,key);

    if (found == true){
        cout << "key is present" << endl;
    }
    else {
        cout <<"key is not found" << endl;
    }

    return 0;

}
