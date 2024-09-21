#include <iostream>
using namespace std;

int main(){

    // Let the array be {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Let the array be {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << endl;
    cout << "Exchanging the first and last element of the array: " << endl;
    cout << "The new array becomes: ";

    int temp = array[9];
    array[9] = array[0];
    array [0] = temp;

    for(int i=0; i<=9; i++){

        cout << array[i] << " ";
    }

    
return 0;
}
