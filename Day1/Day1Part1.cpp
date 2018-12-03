#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

    string frequency;
    int finalFrequency = 0;

	ifstream in_stream("Day1Part1Input.txt");
    
    while (getline(in_stream, frequency)){
		finalFrequency += stoi(frequency);
	}

    cout << finalFrequency << endl;

    return 0;
}