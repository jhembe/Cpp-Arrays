// In this program the aim is to find the how many times a number has appeared in the array

// lets start with the preprocessor directives 
#include<iostream>
using namespace std;

int main(){

    int max_count=0,num;
    // now let's create an array
    int array[100] {};

    // now let's create a loop for data entry
    cout<<"Enter the amount of data you want to enter : ";
    cin>>num;

    if(num > 100 || num < 0){
        cout<<"The number you enter is out of bounds. Please enter numbers ranging from 0 - 100 ";
        return -1;
    }
    cout<<endl;
    
    for(int i {0}; i<5;i++){
        cout<<"Enter the "<<i+1<<" number = ";
        cin>>array[i];
        cout<<endl;
    }

    // Printing the entered array 
    cout<<"Entered array : ";
    for(int i {0};i<5;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;

    // now let's create a loop to output a the array of numbers entered
    for(int i {0}; i<5;i++){
        int count=1;
        for(int j {i+1}; j<5;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count = count;
        }
    }
    cout<<endl;

    for(int i {0}; i<5;i++){
        int count=1;
        for(int j {i+1}; j<5;j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count == max_count){
            cout<<"The most occuring element is : "<<array[i]<<endl;
        }
    }
    
    // now i want to create a loop that traverses within the array and compares each element with another


    return 0;
}