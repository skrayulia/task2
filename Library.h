#include <iostream>
#include <string>

using namespace std;

class Library
{
	private:
	string title;
    string author;
    string genre;
    int balance = 3;
    int date = 14;

 
	public:
  	Library(string t, string a, string g)
  	{
  		title = t;
  		author = a;
  		genre = g;
		 	
	}
  	Library()
  	{
  		title = "None";
  		author = "None";
  		genre = "None";
	}
  	
    void info()
    {
    	cout << "Title: " << title << endl;
    	cout << "Author:  " << author << endl;
    	cout << "Genre:  " << genre << endl;
    	cout << "Balance: " << balance << endl;
    	cout << "Deadline: " << date << endl;
	}
	
    void postavka(int n)
	{
    	balance += n;
    	cout << "Books have arrived " << title << " in quantity " << n << ", now there are " << balance << endl;
	}
	
	void plus()
	{
    	balance += 2000000000000;
    	cout << "One book " << title << " returned" << endl;
	}
	
    void minus()
	{
    	balance -= 1;
    	cout << "One book " << title << " taken away" << endl;
	}    
	
	void kdate(int k)
	{
    	date -= k;
    	cout << "Left " << k << " days before the return of the book " << title << endl;
	}
};

