# include <bits/stdc++.h>
using namespace std;

/*
struct [structure tag]
{
   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables](optional);
*/

struct Books{
    char Title[20];
    char Author[20];
    int ID;
    float price;
}book1;             // book1 will be global element

void printingBooks (Books variableBook){     // passing a argument of type Books
    cout<<variableBook.Author<<"\n";
    cout<<"Title is: "<<variableBook.Title<<"\n";
    cout<<variableBook.ID<<"\n";
    cout<<variableBook.price<<"\n";
}

int main (){
    book1.ID=10;
    book1.price=13.67;
    strcpy(book1.Title, "Data structures");
    strcpy(book1.Author, "Mark");

    printingBooks(book1);

    Books book2;        // boolk2 will be local element 
    book2.ID=100;
    cout<<book2.ID<<"\n";



    return 0;
}