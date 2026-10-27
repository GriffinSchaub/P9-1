//
//
//
//
//

#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main(void) {

	string inputword;

	cout << "Enter a word and thsi program will count the letters: ";
	getline(cin,inputword);

	cout << endl << countVowel(inputword);

}


int countVowel(string str) {

	int vowelCount=0;
	int letterNumber=0;

	for (int letterNum = 0;letterNum <= str.length(); letterNum++) {

		if (str[letterNum] == 'A' || str[letterNum] == 'a' || str[letterNum] == 'E' || str[letterNum] == 'e') {
			vowelCount++;
		}
		if (str[letterNum] == 'I' || str[letterNum] == 'i' || str[letterNum] == 'O' || str[letterNum] == 'o') {
			vowelCount++;
		}
		if (str[letterNum] == 'U' || str[letterNum] == 'u') {
			vowelCount++;
		}
	}
	 
	return (vowelCount);

}
