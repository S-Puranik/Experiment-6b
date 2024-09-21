#include <iostream>
using namespace std;

int main(){

    // Let the array be {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<< "For an array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}: " << endl;

    cout<< "The odd elements are: ";

    for(int i=0; i<=9; i++){

        int element = array[i];

        if(element % 2 != 0){

            cout<< element << " ";
        }
    }

    cout<< endl << "The even elements are: ";

    for(int i=0; i<=9; i++){

        int element = array[i];

        if(element % 2 == 0){

            cout<< element << " ";
        }
    }

}
