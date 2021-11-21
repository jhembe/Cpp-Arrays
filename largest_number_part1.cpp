#include<iostream>
using namespace std;

int main(){
    // now we have to find the largest number in the array
    //variable declaration
    int i,n,j;
    int numbers[100];

    cout<<"Enter the ammout of data you want to enter : ";
    cin>> n;

    // checking if everything ranges within limits
    if( n < 0 || n > 100){
        cout<<"Please enter the required range !!"<<endl;
        return -1;
    }

    // now a for loop to enter data into the array
    for(int i {0}; i < n; i++){
        cout<<"Enter the [ "<< i+1<<"]  : ";
        cin>> numbers[i]; 
    }

    // print the unsorted arrays
    cout<<"Unsorted Array : ";
    for(int i {0}; i < n; i++){
        cout<<numbers[i]<<"\t";
    }
    cout<<endl;
    // Now lets enter the loop logic using while loop
    for(int i {0}; i < n; i++){
        // 
        if(numbers[0] < numbers[i]){
            numbers[0] = numbers[i];
        }

    }

    cout<<"The largest element is : "<<numbers[0]<<endl;

    return 0;
}