#include <iostream>
using namespace std;


//Linear Search is to Search a Element in a sequence
int linearseach(int arrnew[],int sizenew , int target_element)
{
    for(int i=0 ;i<sizenew;i++)
    {
        if(arrnew[i]==target_element)
        {
            return i;
        }

    }

    return -1;
}

int main()
{
    //initialising & Declaring Array arr
    int arr[]={2,3,5,7,8,9,0,12,34,6};
    int x;

    //sizeof(arr) gives the size od array in byte in case of int it is 4 byte 
    //for this case size of(arr) is 40 and sizeof(arr[0]) is 4 
    int size=sizeof(arr)/sizeof(arr[0]); // size =40/4 it is 10.
    int target=12;

    //Perform Linear Search
    int index=linearseach(arr,size,target);

    if(index!=-1)
    {
        cout<<"Element Found at index "<<index;
    }
    else
    {
        cout<< "Element not Found";
    }

}
