// If constructor is not there then the local elements will initialized with garbage value

#include <bits/stdc++.h>
using namespace std;

struct Student{
    int ID, year;
    char name[20];

    Student (){         // intializes both global and local element with the given value
        ID=6; year=2017;

        // memset (array_name, 0, sizeof(array_name));  to initialize the name with null
        memset (name, 0, sizeof(name));  
    }
}student1;      // global element

char X;

int main (){
    cout<<student1.ID<<" "<<student1.year<<" "<<student1.name<<"\n";

    Student student2;       // local element 
    cout<<student2.ID;
    cout<<"a"<<X<<"\n";

    return 0;
}