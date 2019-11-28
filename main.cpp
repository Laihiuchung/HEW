#include <iostream>
#include <stdio.h>

class weapon
{
	
public:
	virtual void DMG() = 0;
};

class knife : public weapon
{
public:
	void DMG()
	{
		std::cout << "knife weaponed" << std::endl;
		printf("DMG+5\n");
	}
};

class sword : public weapon
{
public:
	void DMG()
	{
		std::cout << "sword weaponed" << std::endl;
		printf("DMG+10\n");
	}
};

int main()
{
	knife knife;
	knife.DMG();
	sword sword;
	sword.DMG();
	system("pause");
	return 0;
}

//hello :D
