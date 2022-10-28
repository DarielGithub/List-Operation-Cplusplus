#include <iostream>
using namespace std;

void info(){
    cout << "Program by: Avila, Dariel V." << endl;
    cout << "Course: DICT 2-1" << endl;
    cout << "Activity: UPDATE OPERATION" << endl;
}
void divider(){
    cout << "----------------------------------------------\n";
}
int main(){
    int LA[] = {45, 40, 50, 35, 55, 60};
    int item = 100,k = 3, n = 6;
    int j = n;
    
    info();
    divider();
    cout << "Print Linear Array Elements are: " << endl;

    for(int x = 0; x<n; x++){
         cout<<"LA [" << x <<"]: " << LA[x] << endl;
    }
    n++;
    
    divider();
    cout << "Print Linear Array Elements after Updation are: " << endl;

    LA[k] = item;
   
    for(int x = 0; x<n-1; x++){
         cout<<"LA [" << x <<"]: " << LA[x] << endl;
    }
    cout << endl;
    return 0;
}