#include <iostream>
#include <cstring>
using namespace std;

void ConvertAlphabet(string words)
{
	for (int i=0; i<words.length(); i++)
	{
		if(words[i]>96)
			words[i]=words[i]-32;
		else
			words[i]=words[i]+32;
	}
	cout<<words;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string words;
	cin>>words;
	ConvertAlphabet(words);

	return 0;
}