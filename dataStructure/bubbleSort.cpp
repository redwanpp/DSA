#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
        for(j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        
        cout << endl;
    }

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

    bubbleSort(arr, size);

    return 0;
}