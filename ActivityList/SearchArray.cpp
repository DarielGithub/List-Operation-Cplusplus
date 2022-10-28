#include <iostream>
using namespace std;

void info(){
    cout << "Program by: Avila, Dariel V." << endl;
    cout << "Course: DICT 2-1" << endl;
    cout << "Activity: SEARCH OPERATION" << endl;
}
void divider(){
    cout << "----------------------------------------------\n";
}
int main(){
    int LA[] = {45, 40, 50, 35, 55, 60};
    int n = sizeof(LA)/sizeof(LA[0]);
    int elem = 55;
    int i = 0;

    info();
    divider();
    cout << "The Linear Array Elements are: " << endl;
    for(int x = 0; x<n; x++){
         cout<<"LA [" << x <<"]: " << LA[x] << endl;
    }

    while (i < n){
        if (LA[i] == elem) {
            break;
        }
        i++;
    }
 
    if (i < n){
        divider();
        cout << "Found Element " << elem << " at index " << i << endl << endl;
    }
    else {
        divider();
        cout << "Element is not present in the given array" << endl << endl;;
        cout << endl;
    }
    return 0;
}