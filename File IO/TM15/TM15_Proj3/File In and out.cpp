#include <iostream>
#include  <cstring>
#include  <fstream>
using namespace std;

struct Publisher
{
   char name[25];
   int id;
   int sold;
   char date[10];
};


void create_file(const char*filename)
{
	fstream myfile;
	myfile.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);
	cout<<"success "<<filename <<" found. \n";
	myfile.close();
	cout<<"\n";
}

//--------------------------------------function for for the first option----------------------------------------------

void Write_fput(const char*filename)
{
	FILE*fp;
	char ch;
	fp=fopen(filename,"a");
	if(fp==NULL)
	{
		fp=fopen(filename,"W");
	}
	if(fp)
	{
		ch=getc(stdin);
		while(ch!=EOF)
		{
			fputc(ch,fp);
			ch=getc(stdin);
		}
	}
	else
		perror("File opening failed");
	fclose(fp);
}


//--------------------------------------------function for the second option ----------------------------------------------------

void Read_fgetc(const char*filename)
{
	FILE*fp;
	char ch;
	fp=fopen(filename,"r");
	if(fp)
	{
		ch=getc(fp);
		while(ch!=EOF)
		{
			putchar(ch);
			ch=getc(fp);
		}
	}
	fclose(fp);
}

//------------------------------------------function to add names(option 3)-----------------------------------------------------------

void add_names(const char*filename)
{
	int n;
	FILE*fp;
	fp=fopen(filename,"a");
	if(fp==NULL)
	{
		fp=fopen(filename,"W");
	}
	if(fp)
	{
		char str[100];
		cout<<"Enter the Number of names you'd like to Enter: ";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"Enter the name # "<<i+1<<": ";
			cin>>str;
			fputs(str,fp);
			fputs("\n",fp);
		}
		fclose(fp);
	}
	else
		perror("file opening failed");
}

//------------------------------------------------------------------read the story using fgets----------------------------------

void read_story(const char*filename)
{
	/* opening file for reading */
	FILE*fp = fopen(filename, "r");
	char str[100];
	if(fp == NULL)
	{
		perror("Error opening file");
		return;
	}
	while(fgets(str,100,fp))
	{
		/* writing content to stdout */
		cout<<str;
	}
	fclose(fp);
} 

//----------------------------------------------------------write the Publisher date---------------------------------------------------

void write_date(const char*filename)
{
	FILE*fp;
	int retval,n;
	fp=fopen(filename,"a");
	if(fp==NULL)
	{
		fp=fopen(filename,"W");
	}
	Publisher p1;
	//cout<<"Enter The Number of publisher : ";
	//cin>>n;
	//for(int i=0;i<n;i++)
	//{
	cout << "Enter Full name: ";
    cin>>p1.name;
    cout << "Enter id: ";
    cin >>p1.id;
    cout << "Enter no. of book sold: ";
    cin >>p1.sold;
    cout<<"Enter date: ";
    cin>>p1.date;

    cout<<"\nDisplaying Information." << endl;
    cout<<"Name: "<<p1.name << endl;
    cout<<"id: "<<p1.id << endl;
    cout<<"Sold: "<<p1.sold<<endl;
    cout<<"date: "<<p1.date<<endl;
    retval=fwrite(&p1,sizeof(Publisher),1,fp);
		//fputs("\n",fp);
	//}
	fclose(fp);
}

//---------------------------------------------------------------read the publisher date---------------------------------------------------

void read_date(const char*filename)
{
	FILE*fp;
	Publisher p1; 
	fp=fopen(filename,"r");
	if(fp)
	{
		//cout<<"w1"<<endl;
		while(fread(&p1,sizeof(Publisher),1,fp))
		{
			cout<<"Name: "<<p1.name<<endl<<"Id: "<<p1.id<<endl<<"Sold: "<<p1.sold<<endl<<"Date: "<<p1.date<<endl<<endl;
		}
	}
	else
		perror("Error openaing file");
	fclose(fp);

}



int main(void)
{
	int x;
	const char*filename="story.txt";
	const char*pubname="publisher.txt";
	while(true)
	{
		cout<<"============================================================================\n";
		cout<<"				Menu										\n";
		cout<<"=============================================================================\n";
		cout<<"1.Write Story using fputc\n2.Read stroy using fgetc\n3.Add names Uisng fputs\n4.Read stroy Using fgets\n5.Write Publisher Date using fwrite\n6.Read publisher Date Using fread\n7.Exit\n";
		cout<<"Enter Yout option (1...7):  ";
		cin>>x;
		cout << "\033[2J\033[1;1H";
		switch(x)
		{
			case 1:
				Write_fput(filename);
				break;
			case 2:
				Read_fgetc(filename);
				break;
			case 3:
				add_names(filename);
				break;
			case 4:
				read_story(filename);
				break;
			case 5:
				write_date(pubname);
				break;
			case 6:
				read_date(pubname);
				break;
			case 7:
				exit(0);
			default:
				cout<<"Please Enter A valid input\n";
				break;
    // code block
}
	}
}
