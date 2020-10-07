#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

const int SUCCESS=0;
const int COULD_NOT_OPEN_FILE = -1;
const char DELIMETER_TO_SEARCH_FOR = ',';

const string INPUT_FILE = "input.txt";
struct person{
	string first;
	string last;
};

int main() {
	vector<person> mv;

	//lets open a file
	ifstream myInputfile;
	myInputfile.open(INPUT_FILE.c_str());

	//verify that the file is open
	if(!myInputfile.is_open())
		return COULD_NOT_OPEN_FILE;

	std::string line;
	person mp;

	//how to read? for loop? while loop?
	while(!myInputfile.eof()){

		getline(myInputfile, line);

		//read the file (parsing out tokens between DELIMETER_TO_SEARCH_FOR)
		//chuck each line in a struct that holds first name,last name
		stringstream ss(line);
		getline(ss,mp.first,DELIMETER_TO_SEARCH_FOR);
		getline(ss,mp.last,DELIMETER_TO_SEARCH_FOR);

		//put each struct in a vector
		mv.push_back(mp);
	}





	//close the file

	//sort the vector

	//write it back to another file

	return SUCCESS;
}
