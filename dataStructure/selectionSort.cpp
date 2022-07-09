//Selection Sort

#include <iostream>

using namespace std;

void selection(int arr[], int n) {
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1;j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }    

    // for(i = 0; i < n; i++) {
    //     for(j = i; j < n; j++) {
    //         if(arr[j] < arr[i]) {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {
    int size, i;
    cin >> size;

    int arr[size];

    for(i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selection(arr, size);

    return 0;
}