#include <iostream>
#include "windows.h"
using namespace std;

int ifuckedyourmother;
char x;

class stand {
	public:
		int money;
		int ingredients;
		int lemonade;
};

int main() {
	
	stand obj;
	obj.money = 1;
	obj.ingredients = 0;
	obj.lemonade = 0;

	while (1) {
		cout << "you have: " << obj.money << " money, " << obj.ingredients << " and " << obj.lemonade << " you can either buy(b), make(m), or sell(s). ";
		cin >> x;
		switch (x) {
			case 'b':
				if (obj.money > 0) {
					obj.money--;
					obj.ingredients++;
				}
		}
	}
}