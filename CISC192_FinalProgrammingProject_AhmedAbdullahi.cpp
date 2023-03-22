/******************************************************************************

 Author: Ahmed Abdullahi
 CISC 192 - Final Programming Project
 March 2023
 
 This program demonstrates a function-driven program that initializes name and age 
 It takes an array of integers and displays the average
 The data is printed using a pointer to a Display function
 

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

//student class
class Student{
    public: 
        //default constructor
        Student();
       
        //constructor with name and age parameter
        Student(string inputName, int inputAge);
        
        //destructor for when a Student pointer gets deleted
        ~Student();
        
        //displaying data
        void Display();
        
    private:
        //name and age
        string name;
        int age;
};

//student default constructor
Student::Student(){
 name = "NoName";
 age = -1;
}

//student constructor initializing name and age
Student::Student(string inputName, int inputAge){
 this->name = inputName;
 this->age = inputAge;
}

//destructor
Student::~Student(){}

//displaying name and age
void Student::Display(){
 cout << "Name: " << name << endl;   
 cout << "Age: " << age << endl;
}

//average array of integers function
void Average(int inputArray[], int size){
    double sum = 0.0;
    int count = 0;
    double average = 0.0;
    
    //getting total sum and the count of numbers
    for(int i = 0; i < size; i++){
        sum += inputArray[i];
        count++;
    }
    
    //finding and printing the average 
    average = sum/count;
    cout << fixed << setprecision(2) << "Average grade: " << average << endl;
    
}//end Average function

int main(){
    //initializing data;
    string name = "John Smith";
    int age = 20;
    int sizeOfArray = 4;
    int average;
    
    //initializing name and age to Student Class constructor
    Student student1(name, age);
    
    //creating array with sizeOfArray numbers
    int arrayNum[sizeOfArray] = {90, 85, 92, 88}; 
    
    //taking the average of the array;
    Average(arrayNum, sizeOfArray);
    
    //Displaying function using pointer
    Student* student1Pointer = new Student(student1);
    student1Pointer->Display();
    
    //delete the pointer to free up memory
    delete student1Pointer;

    return 0;
    
}//end main

