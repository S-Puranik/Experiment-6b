#include <iostream>
using namespace std;

int main(){

    // Let the array be {1, 2, 3, 4, 5}

    int array[5] = {1, 2, 3, 4, 5};

    cout<< "For an array {1, 2, 3, 4, 5}, multiplying each element by 5: " << endl;
    for(int i=0; i<=4; i++){

        array[i] *= 5;
        cout << array[i] << endl;
    }
}
