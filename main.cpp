#include <iostream>
#define NOMINMAX
#include <Windows.h>

int main() 
{
	SetConsoleOutputCP(1252);
	std::cout << "Il m'a demandé \" Comment vas - tu ? \"" << std::endl;
	std::cout << "j'ai " << 2536 << " ans";
	return 0;
}