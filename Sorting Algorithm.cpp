//This program will use a selection sorting algorithm to sort a set of numbers
//Pedro Ayala
#include <iostream>

using namespace std;

const int ELEM = 6; //Global number of elements

void sort(int []);  //function prototype to sort array

int main()
{
    int Array[ELEM] = {5, 7, 2, 8, 9, 1};   //array initialization

    sort(Array);    //calls sorting function

    return 0;
}

//function to sort the array
void sort (int Array[])
{
    bool sorted;    //checks if the array is sorted

    do  //while loop to go through the array
    {
        sorted = true;

        //loop to sort the array
        for (int index = 0; index < ELEM; index++)
        {
            //conditional to check array values
            if (Array[index] > Array[index + 1])
            {
                //values swap
                int temp = Array[index];
                Array[index] = Array[index + 1];
                Array[index + 1] = temp;

                sorted = false; //allows sorting to loop again
            }

        cout << Array[index] << " ";    //displays each value

        }
        cout << endl;
    }
    while (!sorted);    //stops the loop when all values are in ascending order
    
}
