#include "MyLibrary.h"
#include <cstdio>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>

MyLibrary::MyLibrary(ostream& output_stream) : 
    output_stream(output_stream), books_number(0), books(0)
{

}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int* books) :
    output_stream(output_stream), books_number(books_number), books(books)
{
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int min, int max) :
    output_stream(output_stream), books_number(books_number)
{
    books = new int[books_number];
    for (int i = 0; i < books_number; i++)
    {
        books[i] = min + 1;
    }
}

void MyLibrary::print_books()
{
    output_stream << "Found " << books_number << " books" << endl;
    for (int i = 0; i < books_number; i++)
        output_stream << "Book: " << i << " " << books[i] << endl;
}

MyLibrary::~MyLibrary()
{
    delete[] books;
}

void MyLibrary::update_books_id_by_index(int book_index, int book_id)
{
    if (book_index < books_number)
        this->books[book_index] = book_id;
}