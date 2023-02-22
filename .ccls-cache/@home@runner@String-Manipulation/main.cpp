#include <iostream>
using namespace std;

//function to change case sensitive
void ChangeCase(string word, int length)
{
	int temp;
	for (int i=0;i<length;i++)
	{
		temp = int(word[i]);
		if(temp>=97 && temp<=122)
		{
			temp = temp - 32;
			word[i] = char(temp);
		}
		else if (temp>=65 && temp<=90)
		{
			temp = temp + 32;
			word[i] = char(temp);
		}	
	}
	cout<<"\nWORD AFTER CHANGING CASE";
	cout<<endl<<endl<<word;
}
	
int main() 
{
	int length;
	int option;
	string word;
	cout<<"\nENTER A WORD : ";
	cin>>word;
	cout<<"\nDEFAULT WORD";
	cout<<"\n\n"<<word;
	length = word.size();
	cout<<"\nOPTION";
	cout<<"\n1. CHANGE CASE";
	cout<<"\nENTER YOUR CHOICE : ";
	cin>>option;
	switch(option)
	{
		case 1:	
		ChangeCase( word, length);
		break;
		default:
		cout<<"\nINVALID OPTION";
		break;
	}
}