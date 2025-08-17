/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:38:22 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/17 16:33:03 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main() {

	Animal*	tab[10];

	for (size_t i = 0; i < 5; i++) {
		tab[i] = new Cat();
		tab[i]->makeSound();
	}
	for (size_t i = 5; i < 10; i++) {
		tab[i] = new Dog();
		tab[i]->makeSound();
	}
		
	for (size_t i = 0; i < 10; i++)
		delete tab[i];
	
	std::cout << "[Testing Cat]" << std::endl;
	Cat *cat1 = new Cat();
	
	std::cout << std::endl << "// Test copy constructor" << std::endl;
	cat1->setIdea(0, "I want fish");
	Cat *cat2 = new Cat(*cat1);
	std::cout << "cat1 idea: " << cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea: " << cat2->getIdea(0) << std::endl;

	cat2->setIdea(0, "I want milk");

	std::cout << std::endl << "// After modification:" << std::endl;
	std::cout << "cat1 idea: " << cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea: " << cat2->getIdea(0) << std::endl;

	std::cout << std::endl << "// Test copy assignment" << std::endl;
	Cat cat3;
	Cat	cat4;
	
	cat3.setIdea(0, "I want milk");
	cat4 = cat3;
	std::cout << "cat3 idea after assignment: " << cat3.getIdea(0) << std::endl;

	delete cat1;
	delete cat2;
	return 0;
}
