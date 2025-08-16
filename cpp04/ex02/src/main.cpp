/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:38:22 by sconiat           #+#    #+#             */
/*   Updated: 2025/08/16 15:28:13 by sconiat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main() {
		
	Cat *cat1 = new Cat();
	cat1->setIdea(0, "I want fish");

	Cat *cat2(cat1);
	std::cout << std::endl << "// Test copy constructor" << std::endl;
	std::cout << "cat1 idea: " << cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea: " << cat2->getIdea(0) << std::endl;

	cat2->setIdea(0, "I want milk");

	std::cout << std::endl << "// After modification:" << std::endl;
	std::cout << "cat1 idea: " << cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea: " << cat2->getIdea(0) << std::endl;

	Cat *cat3;
	cat3 = cat1;
	std::cout << std::endl << "// Test copy assignment" << std::endl;
	std::cout << "cat3 idea after assignment: " << cat3->getIdea(0) << std::endl;

	delete cat1;

	std::cout << std::endl << "////Testing Dog" << std::endl;
	Dog *Dog1 = new Dog();
	Dog1->setIdea(0, "I want fish");

	Dog *Dog2(Dog1);
	std::cout << std::endl << "// Test copy constructor" << std::endl;
	std::cout << "Dog1 idea: " << Dog1->getIdea(0) << std::endl;
	std::cout << "Dog2 idea: " << Dog2->getIdea(0) << std::endl;

	Dog2->setIdea(0, "I want milk");

	std::cout << std::endl << "// After modification:" << std::endl;
	std::cout << "Dog1 idea: " << Dog1->getIdea(0) << std::endl;
	std::cout << "Dog2 idea: " << Dog2->getIdea(0) << std::endl;

	Dog *Dog3;
	Dog3 = Dog1;
	std::cout << std::endl << "// Test copy assignment" << std::endl;
	std::cout << "Dog3 idea after assignment: " << Dog3->getIdea(0) << std::endl;

	delete Dog1;
	
	return 0;
}
