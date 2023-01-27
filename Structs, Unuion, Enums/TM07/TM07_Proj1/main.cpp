#include<iostream>
#include <fstream>

using namespace std;

#define forn(i,n)for(i=0;i<n;i++)
#define ll long long

struct Book
{
	int copies;
	int id;
	char name[50];
};

//----------------------------------------------functio to read details of books------------------------------------

void read_book(const char*filename)
{
	Book p1;
	char data[500];
	string line;
	ifstream myfile;
	myfile.open(filename);
	if(myfile)
	{
		while(true)
		{
			cout<<"******************************************************\n";
			myfile>>data;
			cout<<"Copies: "<<data<<endl;
			myfile>>data;
			cout<<"Id: "<<data<<endl;
			getline(myfile,line);
			cout<<"Name:"<<line<<endl;
			if(myfile.eof())break;
		}
		cout<<"******************************************************\n";

	}
	else
		perror("Error openaing file");
	myfile.close();
}

//-------------------------------------------------function to request a book------------------------------------------------------

void request_book(const char*filename)
{
	const char*tem_file="temp.txt";
	ofstream outfile(tem_file);
    ifstream readfile(filename);
    string line;
    string search;
    string copy,id;
    int p;
    bool valid=false;
    cout<<"Enter The Id :: ";
    cin>>search;
    while(true)
	{
		readfile>>copy;
		readfile>>id;
		getline(readfile,line);
		if(id==search)
		{
			valid=true;
			p=stoi(copy);
			if(p==0)
			{
				printf("This Book is Presently not on our self.pls try letter\n");
			}
			else
			{
				p=p-1;
				printf("Congratulation Customer your Book is Allocated.Please collect it from the shell\n");
			}
			copy=to_string(p);
		}
		outfile<<copy<<"  ";
		outfile<<id;
		outfile<<line<<"\n";
		if(readfile.eof())break;
	}
	if(!valid)
	{
		printf("Book id is Not Correct.Please try again\n");
	}
	remove(filename);
    rename(tem_file,filename);
}

//--------------------------------------------function to return a book---------------------------------------------------

void return_book(const char*filename)
{
	const char*tem_file="temp.txt";
	ofstream outfile(tem_file);
    ifstream readfile(filename);
    string line;
    string search;
    string copy,id;
    int p;
    bool valid=false;
    cout<<"Enter The Id :: ";
    cin>>search;
    while(true)
	{
		readfile>>copy;
		readfile>>id;
		getline(readfile,line);
		if(id==search)
		{
			valid=true;
			p=stoi(copy);
			p=p+1;
			printf("Thank you Customer Please Place the  Book on the shell\n");
			copy=to_string(p);
		}
		outfile<<copy<<"  ";
		outfile<<id;
		outfile<<line<<"\n";
		if(readfile.eof())break;
	}
	if(!valid)
	{
		printf("Book id is Not Correct.Please try again\n");
	}
	remove(filename);
    rename(tem_file,filename);
}

int main(void)
{
	int option;
	ll i;
	const char*filename="books_database.txt";
	printf("\n\n*****Hello Customer,Welcome To GoodWill Library.*****\n\n\n");
	forn(i,1000000000);
	cout << "\033[2J\033[1;1H";
	while(true)
	{
		printf("================================================================================\n");
		printf("Please select one option from bellow:\n1) View list of books on our shelves\n2) Request for a new book\n3) Return a book\n4) Exit\n: ");
		cin>>option;
		switch(option)
		{
			case 1:
				read_book(filename);
				break;
			case 2:
				request_book(filename);
				break;
			case 3:
				return_book(filename);
				break;
			case 4:
				exit(0);
			default:
				printf("Please Enter A valid option\n");
				break;
		}
	}
}
