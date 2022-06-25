#include <iostream>
#include <ctime>

using namespace std;

int Timer(int f, int s) {
	time_t timer = time(0);
	tm *ltm = localtime(&timer);
	//cout << ltm->tm_hour << endl;
	if (f <= ltm->tm_hour and s >= ltm->tm_hour)
	{
		return 1;
	} else {
		return 0;
	}
}

int main(int argc, char** argv) {
	if (Timer(15, 22) == 1) {
		cout << "123";
	} else {
		cout << "321";
	}
	//system("DEXModules/Keypad.exe");
	return 0;
}
