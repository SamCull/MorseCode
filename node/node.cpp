#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct node {
	char data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int idata)
{
	struct node* node = new struct node;
	node->data = idata;
	node->left = NULL;
	node->right = NULL;
	return node;
}


int main()
{
	int choice;
	struct node* root = newNode(' ');
	struct node* current = root;

	// Left side of Node

	root->left = newNode('e');
	root->left->left = newNode('i');
	root->left->left->left = newNode('s');
	root->left->left->left->left = newNode('h');
	root->left->left->left->right = newNode('v');
	root->left->left->right = newNode('u');
	root->left->left->right->left = newNode('f');

	root->left->right = newNode('a');
	root->left->right->left = newNode('r');
	root->left->right->left->left = newNode('l');
	root->left->right->right = newNode('w');
	root->left->right->right->left = newNode('p');
	root->left->right->right->right = newNode('j');

	// Right side of Node

	root->right = newNode('t');
	root->right->left = newNode('n');
	root->right->left->left = newNode('d');
	root->right->left->left->left = newNode('b');
	root->right->left->left->right = newNode('x');
	root->right->left->right = newNode('k');
	root->right->left->right->left = newNode('c');
	root->right->left->right->right = newNode('y');

	root->right->right = newNode('m');
	root->right->right->left = newNode('g');
	root->right->right->left->left = newNode('z');
	root->right->right->left->right = newNode('q');
	root->right->right->right = newNode('o');

	std::string line;
	//struct node* current = root;

	cout << "-------------------------------------------------------------------------" << endl;
	cout << "Select a file you wish to translate from Morse to English" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "1 - Translate file 1" << endl;
	cout << "2 - Translate file 2" << endl;
	cout << "3 - Translate file 3" << endl;
	cout << "4 - Translate file 4" << endl;
	cout << "5 - Translate file 5" << endl;
	cin >> choice;

	if (choice == 1)
	{
		std::string line;
		std::ifstream myfile("file1.txt");

		if (myfile.is_open())
		{
			while (std::getline(myfile, line))
			{
				for (int i = 0; i < line.length(); i++)
				{
					// line.at(i) returns char at position i in string.
					char morse = line.at(i);

					if (morse == '-') {	// if morse character is a -, move right of tree
						current = current->right;
					}

					else if (morse == '.') {	// if morse character is a ., move left of tree
						current = current->left;

					}

					else if (morse == '/') {	// if morse character is a /, make a space
						cout << " ";
					}
					else if (morse == ' ') {	// if morse character is a " ", count as word and return to start of root and repeat
						cout << current->data;
						current = root;			// return to root once word is printed
					}


					//std::cout << c;
				}
				std::cout << std::endl;
			}
			myfile.close();
		}
	}

	if (choice == 2)
	{
		std::string line;
		std::ifstream myfile("file2.txt");

		if (myfile.is_open())
		{
			while (std::getline(myfile, line))
			{
				for (int i = 0; i < line.length(); i++)
				{
					// line.at(i) returns char at position i in string.
					char c = line.at(i);

					if (c == '-') {
						current = current->right;
					}

					else if (c == '.') {
						current = current->left;

					}

					else if (c == '/') {
						cout << " ";
					}
					else if (c == ' ') {
						cout << current->data;
						current = root;
					}


					//std::cout << c;
				}
				std::cout << std::endl;
			}
			myfile.close();
		}
	}

	if (choice == 3)
	{
		std::string line;
		std::ifstream myfile("file3.txt");

		if (myfile.is_open())
		{
			while (std::getline(myfile, line))
			{
				for (int i = 0; i < line.length(); i++)
				{
					// line.at(i) returns char at position i in string.
					char c = line.at(i);

					if (c == '-') {
						current = current->right;
					}

					else if (c == '.') {
						current = current->left;

					}

					else if (c == '/') {
						cout << " ";
					}
					else if (c == ' ') {
						cout << current->data;
						current = root;
					}


					//std::cout << c;
				}
				std::cout << std::endl;
			}
			myfile.close();
		}
	}

	if (choice == 4)
	{
		std::string line;
		std::ifstream myfile("file4.txt");

		if (myfile.is_open())
		{
			while (std::getline(myfile, line))
			{
				for (int i = 0; i < line.length(); i++)
				{
					// line.at(i) returns char at position i in string.
					char c = line.at(i);

					if (c == '-') {
						current = current->right;
					}

					else if (c == '.') {
						current = current->left;

					}

					else if (c == '/') {
						cout << " ";
					}
					else if (c == ' ') {
						cout << current->data;
						current = root;
					}


					//std::cout << c;
				}
				std::cout << std::endl;
			}
			myfile.close();
		}
	}


	if (choice == 5)
	{
		std::string line;
		std::ifstream myfile("file5.txt");

		if (myfile.is_open())
		{
			while (std::getline(myfile, line))
			{
				for (int i = 0; i < line.length(); i++)
				{
					// line.at(i) returns char at position i in string.
					char c = line.at(i);

					if (c == '-') {
						current = current->right;
					}

					else if (c == '.') {
						current = current->left;

					}

					else if (c == '/') {
						cout << " ";
					}
					else if (c == ' ') {
						cout << current->data;
						current = root;
					}


					//std::cout << c;
				}
				std::cout << std::endl;
			}
			myfile.close();
		}
	}
}


