#include <iostream>
#define NOMINMAX
#include <Windows.h>
#include <string>

int main() 
{
	SetConsoleOutputCP(1252);
    std::cout << "Commutativité :" << std::endl;
    std::cout << "2 + 3 = " << 2 + 3 << std::endl;
    std::cout << "3 + 2 = " << 3 + 2 << std::endl;
    
    //déclaration de variable 
    int number { 25 };
    std::string text { "la question numéro : " };
    float flottan { 125.365 };
    std::cout << text << number << flottan;

    // déclaration de constante (impossible de la modifier)
    double const pi { 3.141592 };
    std::cout << pi << std::endl;

    // modification des variable 
    int entier { 30 };
    std::cout << "mon entier vaut" << --entier << std::endl;
    entier = entier + 60;
    std::cout << "mon entier vaut" << ++entier << std::endl;

    // type de variable automatique
    auto ent { 10 };
    std::cout << ent << std::endl;

    // Écrivez cette ligne une seule fois.
    using namespace std::literals;

    // Puis vous pouvez déclarer autant de chaînes de caractères que vous voulez.
    auto chaine{ "Du texte."s };
    auto autre_chaine{ "Texte alternatif."s };
    auto encore_une_chaine{ "Allez, un dernier pour la route."s };

    // permettre a l'utilisateur d'écrire son age
    std::cout << "Quel est votre age ?" << std::endl;
    int age{ 0 };
    std::cin >> age;
    std::cout << "Tu a : " << age << " ans";
	return 0;
}