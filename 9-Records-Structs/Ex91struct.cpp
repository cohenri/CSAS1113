// Ex91struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Ex90struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//demonstration of c++ struct features
//  note comments at end of file on strings
#include <iostream>
#include <cstring>

using namespace std;

struct Books {
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

int main() {
	struct Books Book[2];        // Declare Book1 of type Book
	//struct Books Book2;        // Declare Book2 of type Book

	// book 1 specification
	strcpy_s(Book[0].title, "Learn C++ Programming");
	strcpy_s(Book[0].author, "Chand Miyan");
	strcpy_s(Book[0].subject, "C++ Programming");
	Book[0].book_id = 6495407;

	// book 2 specification
	strcpy_s(Book[1].title, "Telecom Billing");
	strcpy_s(Book[1].author, "Yakit Singha");
	strcpy_s(Book[1].subject, "Telecom");
	Book[1].book_id = 6495700;

	// Print Book info
	for (int index = 0; index < 2; index++) {
		cout << endl;
		cout << "Book " << index << " title : " << Book[index].title << endl;
		cout << "Book " << index << " author : " << Book[index].author << endl;
		cout << "Book " << index << " subject : " << Book[index].subject << endl;
		cout << "Book " << index << " id : " << Book[index].book_id << endl;
	}
	
	/*
	// Print Book2 info
	cout << endl;
	cout << "Book 2 title : " << Book2.title << endl;
	cout << "Book 2 author : " << Book2.author << endl;
	cout << "Book 2 subject : " << Book2.subject << endl;
	cout << "Book 2 id : " << Book2.book_id << endl;
	*/
	return 0;
}
/*
Universal C runtime routines by category:
  https://docs.microsoft.com/en-us/cpp/c-runtime-library/run-time-routines-by-category?view=msvc-170

  string manipulation
  find: strcpy, strcpy_s
*/

/*
Because strcpy does not check for sufficient space in strDestination
before it copies strSource, it is a potential cause of buffer overruns.
Therefore, we recommend that you use strcpy_s instead.
*/

/*
The strcpy_s function copies the contents in the address of src,
including the terminating null character, to the location that's
specified by dest.
The destination string must be large enough to hold the source
string and its terminating null character. The behavior of strcpy_s
is undefined if the source and destination strings overlap.
*/