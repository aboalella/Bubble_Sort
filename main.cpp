#include <iostream>

using namespace std;

// template <typename T>
// void bubble_sory(T *arr, int Size)
// {
//     for(int i = 0; i < Size; i++)
//         for(int j = 0; j < Size - (i+1); j++)
//             if(arr[j] > arr[j+1])
//                 swap(arr[j],arr[j+1]);
// }

template <typename object>
void bubble_sory(object * arr, int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
        for(int j = 0; j < n-(i+1); j++)
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
}


int main()
{
    int arr[] = {5,3,13,2,11,4,7};
    int _size = sizeof(arr)/sizeof(arr[0]);
    bubble_sory(arr,_size);
    for(int i = 0; i < _size; i++)
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    return 0;
}
