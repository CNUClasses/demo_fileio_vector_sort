#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;
const int SUCCESS=0;
const int COULD_NOT_OPEN_FILE =-1;

const string INPUT_FILE ="input.txt";
const string OUTPUT_FILE ="output.txt";
const char SEPERATOR = ' ';

struct person{
	string first;
	string last;
};

int main() {
	vector<person> mv;

	//lets open a file
	ifstream myInputfile;
	myInputfile.open(INPUT_FILE.c_str());

	//make sure its opened, return failure code if not
	if (!myInputfile.is_open())
		return COULD_NOT_OPEN_FILE;

	string line;
	person mp;

	//use for loop or while loop?
	//for(int i=0; i< WHATGOESHERE?<i++)  #bad choice if you have no idea how many times thru the loop
	while(!myInputfile.eof())	{

		//get a line line from file
		getline(myInputfile, line);

		//parsing out tokens between ' 's in that line
		//chuck each line in a struct that holds first name,last name
		stringstream ss(line);
		getline(ss, mp.first,SEPERATOR);
		getline(ss, mp.last,SEPERATOR);

		//put each struct in a vector
		mv.push_back(mp);
	}

	//close the file

	//sort the vector

	//write it back to another file

	return SUCCESS;
}
