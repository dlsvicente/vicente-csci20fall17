#include <iostream>
using namespace std;


class Book {
private:
string bookname_;
string authfirstname_;
string authlastname_;
int yearpub_;

public:
void SetTitle(string book_name){
bookname_ = book_name;
}
void SetBookAuthFirst(string first_name)
{
authfirstname_ = first_name;
}

void SetBookAuthLast(string last_name){

authlastname_ = last_name;
}
void SetYearCopyrighted(int year_pub){
yearpub_ = year_pub;
}
string GetTitle()
{
return bookname_;
}

string GetBookAuthFirst()
{
 return authfirstname_;

}
string GetBookAuthLast()
{
    return authlastname_;
}


int GetYearCopyrighted()
{
    return yearpub_;
}

void print()
{
    cout << "Book Title:" << bookname_ << endl;
    cout << "Author Name: " << authfirstname_ << " " << authlastname_ << endl;
    cout << "Copyright Year: " << yearpub_ << endl;
}

};
int main () {
    string book_title;
    string first_name_auth;
    string last_name_auth;
    int pub_year;
    
    
 Book bookA;
  Book bookB;
     Book bookC;
      Book bookD;
       Book bookE;
 
 cout << "enter Book A Name: ";
 cin >> book_title;
 bookA.SetTitle(book_title); // enter book name using underscores as spaces.
 
 cout << endl << endl << "Book A Author First Name: ";
 cin >> first_name_auth;
 bookA.SetBookAuthFirst(first_name_auth);
 
 cout << endl << endl << "Book A Author Last Name: ";
 cin >> last_name_auth;
 bookA.SetBookAuthLast(last_name_auth);
 
 cout << endl << endl << "Year book A was Copyrighted: ";
 cin >> pub_year;
 bookA.SetYearCopyrighted(pub_year);
 cout << endl << endl << endl;
 
  cout << "enter Book B Name: ";
 cin >> book_title;
 bookB.SetTitle(book_title); // enter book name using underscores as spaces.

 
 cout << endl << endl << "Book B Author First Name: ";
 cin >> first_name_auth;
 bookB.SetBookAuthFirst(first_name_auth);
 
 cout << endl << endl << "Book B Author Last Name: ";
 cin >> last_name_auth;
 bookB.SetBookAuthLast(last_name_auth);
 
 cout << endl << endl << "Year book B was Copyrighted: ";
 cin >> pub_year;
 bookB.SetYearCopyrighted(pub_year);
  cout << endl << endl << endl;
 
 cout << "enter Book C Name: ";
 cin >> book_title;
 bookC.SetTitle(book_title); // enter book name using underscores as spaces.
 
 cout << endl << endl << "Book C Author First Name: ";
 cin >> first_name_auth;
 bookC.SetBookAuthFirst(first_name_auth);
 
 cout << endl << endl << "Book C Author Last Name: ";
 cin >>  last_name_auth;
 bookC.SetBookAuthLast(last_name_auth);
 
 cout << endl << endl << "Year book C was Copyrighted: ";
 cin >> pub_year;
 bookC.SetYearCopyrighted(pub_year);
  cout << endl << endl << endl;
 
 cout << "enter Book D Name: ";
 cin >> book_title;
 bookD.SetTitle(book_title); // enter book name using underscores as spaces.
 cout << endl << endl << "Book D Author First Name: ";
 cin >> first_name_auth;
 
 bookD.SetBookAuthFirst(first_name_auth);
 cout << endl << endl << "Book D Author Last Name: ";
 cin >> last_name_auth;
 bookD.SetBookAuthLast(last_name_auth);
 
 cout << endl << endl << "Year book D was Copyrighted: ";
 cin >> pub_year;
 bookD.SetYearCopyrighted(pub_year); 
  cout << endl << endl << endl;
 
 cout << "enter Book E Name: ";
 cin >> book_title;
 bookE.SetTitle(book_title); // enter book name using underscores as spaces.
 
 cout << endl << endl << "Book E Author First Name: ";
 cin >> first_name_auth;
 bookE.SetBookAuthFirst(first_name_auth);
 cout << endl << endl << "Book E Author Last Name: ";
 cin >> last_name_auth;
 bookE.SetBookAuthLast(last_name_auth);
 
 cout << endl << endl << "Year book E was Copyrighted: ";
 cin >>pub_year;
 bookE.SetYearCopyrighted(pub_year);
  cout << endl << endl << endl;
 

    bookA.GetTitle(); 
    bookA.GetBookAuthFirst();
    bookA.GetBookAuthLast();
    bookA.GetYearCopyrighted();
    
    bookB.GetTitle();
    bookB.GetBookAuthFirst();
    bookB.GetBookAuthLast();
    bookB.GetYearCopyrighted();
  
    bookC.GetTitle();
    bookC.GetBookAuthFirst();
    bookC.GetBookAuthLast();
    bookC.GetYearCopyrighted();
    
    bookD.GetTitle();
    bookD.GetBookAuthFirst();
    bookD.GetBookAuthLast();
    bookD.GetYearCopyrighted();
    
    bookE.GetTitle();
    bookE.GetBookAuthFirst();
    bookE.GetBookAuthLast();
    bookE.GetYearCopyrighted();
    cout<< "BookA" << endl;
    bookA.print();
    cout << endl << endl;
    cout << "BookB" << endl;
    bookB.print();
    cout << endl << endl;
    cout << "BookC" << endl;
    bookC.print();
    cout<< endl << endl;
    cout << "bookD" << endl;
    bookD.print();
    cout << endl << endl;
    cout << "BookE" << endl; 
    bookE.print();
    cout << endl << endl;
    
    
    
 

    
}