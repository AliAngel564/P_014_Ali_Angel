/*
Amerike University
Author: Ali Angel
Work #: 14
Date: 18/03/25
Description: This program will use functions and arrays to ask the user for seven numbers and then it will calculate the average of the numbers
*/

#include <iostream>
#include <conio.h>

using namespace std;

void getNums(float array[],int size);
float getAverage(float array[],int size); 

int main()
{
float nums[7];
cout << "This program will now ask you to write 7 numbers.\n";
getNums(nums,7);
cout << "\nWe will now give you the average of your numbers\n";
cout << "\nPRESS ANY KEY TO CONTINUE";
getch();
system("cls");
cout << "The Average of your seven numbers is: " << getAverage(nums,7);
return 0;
}

void getNums(float array[],int size)
{
    for(int i = 0;i < size;i++)
    {
        cout << "Give the number of array index  [" << i << "]: ";
        cin >> array[i];
    }
}

float getAverage(float array[],int size)
{
    float average = 0;
    for(int i = 0;i < size;i++)
    {
       average = average + array[i];
    }
    average = average / size;
    return average;
}