#include "../inc/subject.hpp"

#include <iostream>

arrayBag::arrayBag(void) : _data(NULL), _size(0) {}

arrayBag::arrayBag(const arrayBag& toCopy) : _data(NULL), _size(toCopy._size)
{
	if (_size > 0) {
		_data = new int[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = toCopy._data[i];
	}
}

arrayBag::~arrayBag(void)
{
	clear();
}

arrayBag& arrayBag::operator=(const arrayBag& toCopy)
{
	if (this != &toCopy) {
		clear();
		_size = toCopy._size;
		if (_size > 0) {
			_data = new int[_size];
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = toCopy._data[i];
		}
	}
	return *this;
}

void arrayBag::insert(int x)
{
	int* newData = new int[_size + 1];

	for (unsigned int i = 0; i < _size; i++)
		newData[i] = _data[i];

	newData[_size] = x;

	delete[] _data;
	_data = newData;
	_size++;
}

void arrayBag::print(void) const
{
	for (unsigned int i = 0; i < _size; i++)
		std::cout << _data[i] << " ";
	std::cout << std::endl;
}

void arrayBag::clear(void)
{
	delete[] _data;
	_data = NULL;
	_size = 0;
}

treeBag::treeBag(void) : _root(NULL) {}

treeBag::treeBag(const treeBag& other) : _root(NULL)
{
	_root = copyNode(other._root);
}

treeBag::~treeBag(void)
{
	clear();
}

treeBag& treeBag::operator=(const treeBag& other)
{
	if (this != &other)
	{
		clear();
		_root = copyNode(other._root);
	}
	return *this;
}


void treeBag::insert(int value)
{
	insertNode(_root, value);
}

void treeBag::print(void) const
{
	printNode(_root);
	std::cout << std::endl;
}

void treeBag::clear(void)
{
	clearNode(_root);
}

treeBag::Node* treeBag::copyNode(Node* node)
{
	if (!node)
		return NULL;

	Node* newNode = new Node(node->value);
	newNode->left = copyNode(node->left);
	newNode->right = copyNode(node->right);
	return newNode;
}

void treeBag::insertNode(Node*& node, int value)
{
	if (!node)
	{
		node = new Node(value);
		return;
	}
	if (value < node->value)
		insertNode(node->left, value);
	else
		insertNode(node->right, value);
}

void treeBag::printNode(Node* node) const
{
	if (!node)
		return;
	printNode(node->left);
	std::cout << node->value << " ";
	printNode(node->right);
}

void treeBag::clearNode(Node*& node)
{
	if (!node)
		return;
	clearNode(node->left);
	clearNode(node->right);
	delete node;
	node = NULL;
}

bool treeBag::hasNode(Node* node, int value) const
{
	if (!node)
		return false;
	if (node->value == value)
		return true;
	if (value < node->value)
		return hasNode(node->left, value);
	return hasNode(node->right, value);
}
