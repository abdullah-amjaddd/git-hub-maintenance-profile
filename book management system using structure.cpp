#include<iostream>
using namespace std;
struct Book{
string title;
string author;
float price;
};
void addBook(Book &book) {
cout<<"Enter book name:";
cin>>book.title;
cout<<"Enter book's author name:";
cin>>book.author;
cout<<"Enter book price:";
cin>>book.price;
cout<<"Book details added successfully:"<<endl;
}
void displayBook(const Book &book) {
cout<<"The name of the book is:"<<book.title<<endl;
cout<<"The author of the book is:"<<book.author<<endl;
cout<<"The price of the book is:"<<book.price<<endl;
}
int main() {
Book book;
cout<<"Adding book:"<<endl;
addBook(book);
cout<<"display book:"<<endl;
displayBook(book);
return 0;
}