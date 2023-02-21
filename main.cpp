#include <iostream>
using namespace std;

//function to add letters to string
void AddCharacterToString(char word[], int lengthOfString)
{
	int ascii;
	for(int i=0; i<lengthOfString; i++)
	{
		ascii = 65+(rand()%(122-65+1));
		if(ascii>90 || ascii <97)
		{
			i = i-1;
		}
		else
		{
			word[i] = char(ascii);
		}
	}
	cout<<"\nLetter added";
}

//function to display string
void DisplayString(char word[] ,int lengthOfString)
{
	cout<<"\nTHE STRING IS : ";
	for(int i =0; i<lengthOfString; i++)
	{
		cout<<word[i]<<" ";	
	}
}
	
int main() 
{
	srand(time(0));
	//variable
	int lengthOfString;
	//randomly generating the length of string min length 5 and max length 20
	lengthOfString = 5+(rand()%(20-5+1));
	cout<<"\nlength is : "<<lengthOfString;
	//creating string of with random length;
	char word[lengthOfString];
	//function call to add letters to string
	AddCharacterToString(word , lengthOfString);
	cout<<"\nletters added to string";
	//function call to dispaly string
	DisplayString(word , lengthOfString);
	return 0;
}