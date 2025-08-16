/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:38:22 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 15:19:37 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << std::endl;
	std::cout << "=== Animal Tests ===" << std::endl;
	std::cout << "[Cat]      Type: " << i->getType() << std::endl;
	std::cout << "[Dog]      Type: " << j->getType() << std::endl;
	std::cout << "[Animal]   Type: " << meta->getType() << std::endl << std::endl;

	std::cout << "[Cat]      Sound: ";
	i->makeSound();
	std::cout << "[Dog]      Sound: ";
	j->makeSound();
	std::cout << "[Animal]   Sound: ";
	meta->makeSound();

	std::cout << std::endl << "=== WrongAnimal Tests ===" << std::endl;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();

	std::cout << std::endl;
	std::cout << "[WrongCat]     Type: " << wrongi->getType() << std::endl;
	std::cout << "[WrongAnimal]  Type: " << wrongmeta->getType() << std::endl << std::endl;

	std::cout << "[WrongCat]     Sound: ";
	wrongi->makeSound();
	std::cout << "[WrongAnimal]  Sound: ";
	wrongmeta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	delete wrongmeta;
	delete wrongi;
	return 0;
}
