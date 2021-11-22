#include<iostream>
using namespace std;

int main(){
    
    int n,i,j,k;
    int array[100];
    int temp;

  
    //read the total number of elements
    cout<<"Enter total number of elements to read : ";
    cin>>n;

    cout<<"Enter the number of largest numbers you want to view : ";
    cin>>k;

    //checking bounds
    if(n < 0 || n > 100){
        cout<<"Input valid range"<<endl;
        return -1;
    }

    // read the elements
    for(i = 0; i<n; i++){

        cout<<"Enter Element ["<< i + 1<<"] = ";
        cin>>array[i];
    }
    
    // print the input element
    cout<<"Unsorted array Elements : "<<endl;

    for(i = 0; i<n; i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;

    // now we sorting in an ascending order
    // for loop again
    for(int i {0}; i < n; i++){
        for(int j {i + 1}; j < n; j++){
            if(array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // now printing the sorted array in ascending order
    // we stillusing the for loop
    for(i=0; i<k; i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
}