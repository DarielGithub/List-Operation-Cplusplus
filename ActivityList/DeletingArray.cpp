#include<bits/stdc++.h>
using namespace std;

void info(){
    cout << "Program by: Avila, Dariel V." << endl;
    cout << "Course: DICT 2-1" << endl;
    cout << "Activity: DELETE OPERATION" << endl;
}
void divider(){
    cout << "----------------------------------------------\n";
}
int deleteElement(int arr[], int n, int x){
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
            break;

    if (i < n){
        n = n - 1;
        for (int j=i; j<n; j++)
            arr[j] = arr[j+1];
}
return n;
}
int main(){
    int LA[] = {45, 40, 50, 35, 55, 60};
    int n = sizeof(LA)/sizeof(LA[0]);
    int x = 50;
 
    info();
    divider();
    cout << "The Linear Array Elements are: " << endl;
    for (int i=0; i<n; i++){
        cout<<"LA [" << i <<"]: " << LA[i] << endl;
    }
    
    // Delete x from LA[]
    n = deleteElement(LA, n, x);
 
    divider();
    cout << "The Linear Array Elements after Deletion are: " << endl;
    for (int i=0; i<n; i++){
        cout<<"LA [" << i <<"]: " << LA[i] << endl;
    }
    cout << endl;
    return 0;
}