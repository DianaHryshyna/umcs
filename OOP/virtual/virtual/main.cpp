#include <iostream>

using namespace std;

class Gun {
public:
	virtual void shoot() {
		cout << "BAND!" << endl;
	}
};

class SubmachineGun: public Gun {
public:
	virtual void shoot() {
		cout << "BAND!BAND!BAND!" << endl;
	}
};

class Player {
public:
	void shoot(Gun* gun) {
		gun->shoot();
	}
};

class Bazooka: public Gun {
public:
	void shoot() {
		cout << "BUUUUUUUUUUUUNG!" << endl;
	}
};

int main() {
	Gun gun;
	SubmachineGun machinegun;
	Player player;
	Bazooka bazooka;

	player.shoot(&gun);
	player.shoot(&machinegun);
	player.shoot(&bazooka);
	//Gun *lala = &gun;
	//lala->shoot();
	system("pause");
	return 0;
}