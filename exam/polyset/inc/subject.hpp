#ifndef SUBJECT_HPP
# define SUBJECT_HPP
# include <iostream>

class bag {
	public:
		virtual void	insert( int ) = 0;
		virtual void	print( void ) const = 0;
		virtual void	clear( void ) = 0;
};

class searchableBag : virtual public bag {
	public:
		virtual bool	has( int ) const = 0;
};

class arrayBag : virtual public bag {
	protected:
		int				*_data;
		unsigned int	_size;

	public :
		arrayBag( void );
		arrayBag( const arrayBag& );
		virtual ~arrayBag( void );
		arrayBag&	operator=( const arrayBag& );

		virtual void	insert( int );
		virtual void	print( void ) const;
		virtual void	clear( void );
};

class treeBag : virtual public bag {
	protected:
		struct Node {
			int value;
			Node* left;
			Node* right;
			Node(int v) : value(v), left(NULL), right(NULL) {}
		};

		Node* _root;

		void	insertNode(Node*& node, int value);
		void	printNode(Node* node) const;
		void	clearNode(Node*& node);
		bool	hasNode(Node* node, int value) const;
		Node*	copyNode(Node* node);


	public:
		treeBag(void);
		treeBag(const treeBag& other);
		virtual ~treeBag(void);
		treeBag& operator=(const treeBag& other);

		virtual void insert( int );
		virtual void print( void ) const;
		virtual void clear( void );
};

#endif
