#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <set>

using namespace std;

int main() {

	ifstream in_stream("Day1Part1Input.txt");
    bool found = false;
    
    string frequency;
    int currentFrequecy = 0;
    vector<int> allFrequencies;
    set<int> reachedFrequencies;
    pair<set<int>::iterator, bool> ret;

    reachedFrequencies.insert(currentFrequecy);

    while (getline(in_stream, frequency)){
		allFrequencies.push_back(stoi(frequency));
	}

    int i = 0;

    while(!found) {
        currentFrequecy += allFrequencies.at(i);

        if(!reachedFrequencies.insert(currentFrequecy).second) {
            cout << currentFrequecy << endl;
            return 0;
        }

        i++;
        i = i%allFrequencies.size();
    }
    return 0;
}