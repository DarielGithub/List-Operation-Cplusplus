#include <iostream>
using namespace std;

void info(){
    cout << "Program by: Avila, Dariel V." << endl;
    cout << "Course: DICT 2-1" << endl;
    cout << "Activity: INSERT OPERATION" << endl;
}
void divider(){
    cout << "----------------------------------------------\n";
}
int* insertX(int n, int arr[], int x, int pos){
    int i;

    n++;
 
    for (i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
 
    arr[pos - 1] = x;
 
    return arr;
}
int main(){
    int LA[] = {45, 40, 50, 35, 55, 60};
    int item, pos, n = 7;
    int j = n;

    info();
    divider();
    cout << "The Linear Array Elements are: " << endl;
    for(int x = 0; x<n-1; x++){
         cout<<"LA [" << x <<"]: " << LA[x] << endl;
    }

    item = 100;
    pos = 3;

    insertX(n, LA, item, pos);

    divider();
    cout << "The Linear Array Elements after insertion are: " << endl;
    for(int x = 0; x<n; x++){
         cout<<"LA [" << x <<"]: " << LA[x] << endl;
    }
    cout << endl;
    return 0;
}