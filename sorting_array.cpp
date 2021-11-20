#include<iostream>
using namespace std;

int main(){
    int n,temp;
    int array[n];

    // now let's ask the user to enter the number of values the user want's to enter in the array
    cout<<"Enter the number of elements you want to enter the Array : ";
    cin>>n;

    // let's check whether the entered numbers are into the range
    if(n < 1){
        cout<<"The number you entered is invalid : "<<endl;
        return -1;
    }

    // now let's create a loop to let the user enter the values
    
    for(int i {0}; i < n; i++){
        cout<<"Enter the ["<<(i + 1)<<"] number of the array : ";
        cin>>array[i];
    }    

    // let's create a loop to let us print out the values of the array
    cout<<"Unsorted Array : ";
    for(int i {0}; i < n; i++){
        cout<<array[i]<<" , ";
    }
    cout<<endl;


    // now let's try to challenge ourself in the sorting algorithm on ascending order actually
    for(int i {0}; i < n; i++){
        for(int j {1+j}; j<n; j++ ){
            
            if(array[i] > array[j]){
                array[i] = temp;    //NOTE  here we're assigning the value of the i'st array to a temporary variable
                array[i] = array[j];//NOTE here we're assigning the greater variable within array[i] in array[j]
                array[j] = temp;    //NOTE here we're placing the value of the next index of the array with the stored value of temporary variable
            }
        }
    } // End of the sorting loop

    cout<<endl;

    // now let's print the sorted array
    // NOTE using for loop to do that
    cout<<"Sorted Array : ";
    for(int i {0}; i< n; i++){
        cout<<array[i]<<" , ";
    }
    cout<<endl;

    return 0;
}