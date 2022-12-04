#include <iostream>
#include <cstring>
using namespace std;
void Doctor(string words, string want){

	if (words.length()>=want.length())
		cout<<"go";
	else
		cout<<"no";

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string words, want;
	cin>>words>>want;

	Doctor(words, want);

	return 0;
}