#include<iostream>
using namespace std;

int findDuplicate(int arr[],int size) 
{
    int ans = 0;


    //XOR ing all array elements
    for (int i = 0; i<size ; i++) {
        ans =ans^arr[i];
    }

    for (int i = 0; i<size ; i++) {
        ans =ans^i;
    }

    return ans;
	
}


int main() {

    int dupw[10] = {1,2,3,4,5,6,3,7,8,9};
    

    int b = findDuplicate(dupw,10);
    cout<<b;


}