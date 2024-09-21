#include <iostream>
using namespace std;

int main(){

    // Let the first array be {1, 2, 3, 4, 5, 6, 7}
    // Let the second array be {5, 6, 7, 8, 9, 10, 11}

    int array1[7] = {1, 2, 3, 4, 5, 6, 7};
    int array2[7] = {5, 6, 7, 8, 9, 10, 11};

    cout<< "Let one array be {1, 2, 3, 4, 5, 6, 7}" << endl;
    cout<< "Let the other array be {5, 6, 7, 8, 9, 10, 11}" << endl;
    cout<< "The common elements in both the arrays are: ";

    for(int i = 0; i<=6; i++){

        for(int j=0; j<=6; j++){

            if(array1[i] == array2[j]){

                cout << array1[i] << " ";
            }
        }
    }

}
