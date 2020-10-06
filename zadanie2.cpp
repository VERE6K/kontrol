#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	int x = 1, counter = -1, y = 0,max=0,Max =0;
	ifstream FILE;
	FILE.open("‪C:\\Users\\st063159\\Documents\\1.txt");
	FILE >> y;
	vector <int> file1;
	while (!FILE.eof()) {
		FILE >> y;
		if (y != 0) {
			file1.push_back(y);
			counter++;
		}
		else break;
	}

	for (int i = 0; i < counter; i++) {
		if (file1[i] % 7 == 0 && file1[i] % 49 != 0) {
			if (file1[i] > max)
				max = file1[i];
		}
		if (file1[i] % 7 != 0) {
			if (file1[i] > Max)
				Max = file1[i];

		}
		if (max == 0 || Max == 0)
			cout << 1;
		else
			cout << "pervoe - " <<max * Max <<"vtoroe -";
	}
	
	
	int z = 0,max2 =0,Max2 = 0,counter2=-1;
	ifstream FILE1;
	FILE1.open("‪C:\\Users\\st063159\\Documents\\2.txt");
	FILE1 >> z;
	vector <int> file2;
	while (!FILE.eof()) {
		FILE >> z;
		if (z != 0) {
			file2.push_back(z);
			counter2++;
		}
		else break;
	}

	for (int i = 0; i < counter2; i++) {
		if (file2[i] % 7 == 0 && file2[i] % 49 != 0) {
			if (file2[i] > max2)
				max2 = file2[i];
		}
		if (file2[i] % 7 != 0) {
			if (file2[i] > Max2)
				Max2 = file2[i];

		}
		if (max2 == 0 || Max2 == 0)
			cout << 1;
		else
			cout << max2 * Max2;
	}
}
