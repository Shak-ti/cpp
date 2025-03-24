#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

//struct : même syntaxe. Cependant les structs ont par défaut un scope public,
// alors que les classes ont par défaut un scope privé

class PhoneBook {

	//public : accessible depuis l'extérieur de la classe
	public:

		Contact	contactList[8];
		// Attribut membre : variable appartenant à la classe
		// Pas mal de les initialiser dans le constructeur

		PhoneBook( void );
		~PhoneBook( void );
		// Le destructeur est appellé automatiquement lorsque la variable instanciée par
		//le constructeur disparait (ex: quand une fonction se termine)

		// Fonctions membre : peuvent être appelées par la classe
		void	add( void );
		void	search( void ) const;
		void	exit( void ) const;
		bool	testFull( void ) const;
		// const signifie qu'on ne fait aucune modification de l'instance courante dans cette fonction
};


#endif
