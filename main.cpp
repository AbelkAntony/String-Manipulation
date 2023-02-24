#include <iostream>
using namespace std;

//
void RandomString()
{
	srand(time(0));
	int length = 5 + rand()%6;

	string randomString = "";
	
	for(int i=0; i<length; i++)
	{
		bool isCaps = rand() % 2;

		char min = isCaps?'A':'a';
		char max = isCaps?'Z':'z';

		char letter = min +rand() % (max - min + 1);
		randomString += letter;
	}
	cout<<randomString<<endl;
	//return randomString;
}

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
	string tempWord = word;
	int count = 0;
	while(length>0)
	{
		for(int i=0; i<length; i++)
		{
			if(tempWord[0]==tempWord[i])	
			{
				count +=1;
			}
		}
		cout<<endl<<tempWord[0]<<" REPEATS "<<count<<" TIMES";
		count = 0;
		char temp = tempWord[0];
		for(int j=0; j<length; j++)
		{
			if(tempWord[j]==temp)
			{
				for(int k=j;k<length;k++)
				{
					tempWord[k]= tempWord[k+1];
				}
				j--;
				length--;
			}
		}
	}
}

//function to reverse vowel only
void ReverseVowel(string word ,int length)
{
	string tempWord = word;
	int positionOfVowels[length];
	int reversedPosition[length];
	int position=0;
	for (int i=0;i<length;i++)
	{
		if(tempWord[i]=='a'||tempWord[i]=='A'||tempWord[i]=='e'||tempWord[i]=='E'||tempWord[i]=='i'||tempWord[i]=='I'||tempWord[i]=='o'||tempWord[i]=='O'||tempWord[i]=='u'||tempWord[i]=='U')
		{
			positionOfVowels[position]=i;
			position++;
		}
	}
	for(int i=0;i<position;i++)
	{
		reversedPosition[position-1-i]	= positionOfVowels[i];
	}
	for(int i=0;i<position;i++)
	{
		tempWord[reversedPosition[i]]=word[positionOfVowels[i]] ;
	}
	cout<<"\nWORD AFTER REVERSED VOWEL : "<<tempWord;
	
}

//function to sort string in alphabetic order
void SortString(string word ,int length)
{
	char temp;
	for(int i=0;i<length; i++)
	{
		for(int j =i+1;j<length;j++)
		{
			if(word[i]>word[j])
			{
				temp = word[i];
				word[i] = word[j];
				word[j] = temp;
			}
		}
	}
	cout<<"\nSTRING AFTER SORTED = "<<word;
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
	cout<<"\n4. REVERSE VOWELS ONLY";
	cout<<"\n5. SORT THE ARRAY IN ALPHABETIC ORDER";
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
		case 4:
		ReverseVowel(word , length);
		break;
		case 5:
		SortString(word , length);
		break;
		default:
		cout<<"\nINVALID OPTION";
		break;
	}
}