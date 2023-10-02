#include<iostream> 
using namespace std; 

void MonsterGen(); 

int main() {
	char input; 
	while (1) {

		MonsterGen();
		cout << "press any key to continue..." << endl;
		cin >> input;
	}
}

void MonsterGen() {
	int num = rand() % 100;
	if (num < 15) {
		cout << "freddy crugger spawned." << endl;
	} 
	else if (num < 20) {
		cout << "michael myers spawned" << endl;
	} 
	else if (num < 50) {
		cout << "leather face apperad" << endl;
	} 
	else if (num < 75) {
		cout << "the toxic evenger apperad" << endl;
	}
	else {
		cout << "dr mo spawned!" << endl; 
	} 
} 
