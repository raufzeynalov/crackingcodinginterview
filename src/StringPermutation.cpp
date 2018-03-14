#include <iostream>
#include<string>
using namespace std;


void permutation(string str, string prefix) {
	if (str.length() == 0) {
		cout<<prefix<<endl;
	}
	else {
		for (unsigned i = 0; i < str.length(); i++) {
			string first = str.substr(0, i);
			string second = str.substr(i + 1);
			string rem = first + second;
			permutation(rem, prefix + str.at(i));
		}
	}

}

void permutation(string str) {

	permutation(str, "");
}

int main() {
	permutation("Rauf");

	system("PAUSE");
	return 0;
}