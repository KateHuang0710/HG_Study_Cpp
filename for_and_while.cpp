#include <iostream>
#include <ctime>
using namespace std;

void wait (int sec);

int main()
{
	// Eat beef steaks
	for (int i = 0; i < 20; i++) {
		cout << "Sam told you to eat " << i << " beef steaks today." << endl;
		while (1) {
			if (i == 10){
				cout << "What do you want to do next?" << endl;
				string input;
				cin >> input;
				if (input == "eat" || input == "continue") {
					break;
				}
				else if (input == "sleep") {
					cout << "It's a good day to eat beef steaks. Don't go to bed to sleep!" << endl;
				}
				else {
					cout << "Invalid input. Please try again." << endl;
				}
			}
			else {
				break;
			}
		}
	}

	// Sleep and eat beef steaks
	clock_t a = 2 * CLOCKS_PER_SEC;
	int b = 1;
	cout << "Start!" << endl;
	clock_t start = clock();
	while (clock() - start < a);
	while (b <= 10) {
		cout << "I'm going to sleep. Zzz..." << endl;
		cout << "Now I sleep " << b << " times." << endl;
		b++;
	}
	
	// Eat beef steaks again
	int c = 1;
	while (c <= 10) {
		cout << "I'm awake. Let's eat " << c << " beef steak(s)." << endl << endl;
		wait (1);
		cout << "\r" << endl;
		c++;
	}

	wait (2);
	cout << "Goodbye!" << endl;

	// End of program
	cout << "Done!" << endl;
	system("pause");
	return 0;
}

void wait (int sec)
{
	clock_t xsec = sec * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < xsec);
}