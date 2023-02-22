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

//function to create new string with next letter 
void StringWithNextLetter(string word,int length)
{
	int ascii;
	string newWord = word;
	for (int i=0; i<length;i++)
	{
		ascii = int(word[i]);
		if(ascii == 90)
		{
			ascii = 65;
			newWord[i] = char(ascii);	
		}
		else if(ascii == 122)
		{
			ascii =97;
			newWord[i] = char(ascii);
		}
		else
		{
			ascii +=1;
			newWord[i] = char (ascii);
		}
	}
	cout<<"\nOLD WORD = "<<word;
	cout<<"\nNEW WORD = "<<newWord;
}

//function to get the cout of duplicate
void GetCoutOfLetter(string word ,int length)
{
	
}
	
int main() 
{
	//variables
	int length;
	int option;
	string word;
	//user input
	cout<<"\nENTER A WORD : ";
	cin>>word;
	length = word.size();
	//display options
	cout<<"\nOPTION";
	cout<<"\n1. CHANGE CASE";
	cout<<"\n2. CREATE A NEW STRING WITH NEXT LETTER";
	cout<<"\n3. GET THE COUT OF EACH CHARACTER PRESENT";
	cout<<"\nENTER YOUR CHOICE : ";
	cin>>option;
	switch(option)
	{
		case 1:	
		ChangeCase( word, length);
		break;
		case 2:
		StringWithNextLetter(word , length);
		break;
		case 3:
		GetCoutOfLetter(word , length);
		break;
		default:
		cout<<"\nINVALID OPTION";
		break;
	}
}