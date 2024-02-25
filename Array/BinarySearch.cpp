#include <iostream>
using namespace std;

// Linear Search is to Search a Element in a sequence
int binaryseach(int arrnew[], int sizenew, int target_element, bool isAscending)
{
    int left = 0;            // First Element index
    int right = sizenew - 1; // Last Element index

  
        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (arrnew[mid] == target_element)
            {
                return mid;
            }

            if (isAscending)
            {
                // If array is in ascending order
                if (arrnew[mid] < target_element)
                {
                    left = mid + 1;
                }
                else
                   { right = mid - 1;}
            }
            else
            {
                // If array is in descending order
                if (arrnew[mid] < target_element)
                    {right = mid - 1;}
                else
                   { left = mid + 1;}
            }
        }
    

    return -1;
}

int main()
{
    // initialising & Declaring Array arr
     int arr[]={2,3,5,7,8,9,12,34};
   // int arr[] = {34, 12, 9, 8, 7, 5, 3, 2,1};
    int x;

    // sizeof(arr) gives the size od array in byte in case of int it is 4 byte
    // for this case size of(arr) is 40 and sizeof(arr[0]) is 4
    int size = sizeof(arr) / sizeof(arr[0]); // size =40/4 it is 10.
    int target = 12;

    // Check if the array is sorted in ascending order
    bool isAscending = arr[0] <= arr[size - 1];

    // Perform Linear Search
    int index = binaryseach(arr, size, target, isAscending);

    if(index != -1)
    {
        cout << "Element Found at index " << index;
    }
    else
    {
        cout << "Element not Found";
    }
}
