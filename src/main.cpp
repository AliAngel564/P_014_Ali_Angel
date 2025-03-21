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

float getAverage(float array[],int size); 

int main()
{
float nums[7];
cout << "This program will now ask you to write 7 numbers.\n";
for(int i = 0;i < 7;i++)
    {
        cout << "Give the number of array index  [" << i << "]: ";
        cin >> nums[i];
    }
cout << "\nWe will now give you the average of your numbers\n";
cout << "\nPRESS ANY KEY TO CONTINUE";
getch();
system("cls");
cout << "The Average of your seven numbers is: " << getAverage(nums,7);
return 0;
}

float getAverage(float array[],int size)
{
    float sum = 0;
    for(int i = 0;i < size;i++)
    {
       sum = sum + array[i];
    }

    return sum/size;  
}