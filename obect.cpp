#include<iostream>

using namespace std;
/*
int main()
{
    string name;
    
    cout<<"What is your name?"<<endl;;
    cin>>name;
    string *addr = &name;
    cout<<"hello "<<name<<endl;
    cout<<addr;
}
*/
/*
class Book
{
    public:
    string title;
    string author;
    int pages;
    Book(string name)
    {
        cout<<"creating "<<name<<endl;//this is an connstructor function
                                        //this funx.will run when the object is created
    }
};

int main ()
{
    Book mybook("harry potter");
    mybook.title = "Harry Potter";
    mybook.author = "JK ROwling";
    mybook.pages = 500;
    cout<<mybook.author;
}*/

class Book
{
    public:
    string title;
    string author;
    int pages;
    Book(string name,string aauthor,int apages)//what happens if i enter only two parameters?
    {
        cout<<"creating "<<name<<endl;//this is an instructor function
                                        //this funx.will run when the object is created
        title = name;
        author = aauthor;
        pages = apages;                                
    }
};

int main()
{
    Book mybook("Harry Potter" , "JK Rowling",500);
    cout<<mybook.author;
}