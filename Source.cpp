#include "RBTree.h"
#include <iomanip>
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	RBTree* tree = new RBTree;
	tree->insert(5, "one");
	tree->insert(10, "two");
	tree->insert(15, "three");
	tree->get_keys();
	tree->get_values();
	tree->print();
	tree->remove(5);
	tree->remove(10);
	tree->remove(15);
	tree->get_keys();
	tree->get_values();
	tree->print();
	tree->clear();
}