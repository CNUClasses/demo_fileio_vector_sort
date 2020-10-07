
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

const int SUCCESS = 0;
const int COULD_NOT_OPEN_FILE = -1;
const string INPUT_FILE = "input.txt";

struct person{
	string first;
	string last;
};

int main() {
	vector<person> people;

	//open a file
	ifstream myInputfile;
	myInputfile.open(INPUT_FILE.c_str());

	//verify that open succeeded
	if(!myInputfile.is_open())
		return COULD_NOT_OPEN_FILE;

	//read the file (parsing out tokens between ' 's
	//for (int i=0; i< SIZE?; i++)	//do not know number lines beforehand
	std::string line;				//temp var to hold each line read
	person mp;

	while(!myInputfile.eof()){	//no need to know how many lines in the file

		getline(myInputfile, line);

		//use a string stream object
		stringstream ss(line);

		//get each token from the line
		//chuck each line in a struct that holds first name,last name
		getline(ss,mp.first,' ');
		getline(ss,mp.last,' ');

		//put each struct in a vector
		people.push_back(mp);
	}

	//close the file

	//sort the vector

	//write it back to another file

	return SUCCESS;
}
