#include "pch.h"
#include "CppUnitTest.h"
#include <stdexcept>
#include "../Lab1_4sem/RBTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(insert)
		{
			RBTree* tree = new RBTree;
			tree->insert(40, "one");
			tree->insert(50, "two");
			tree->insert(70, "three");
			tree->insert(20, "four");
			tree->insert(30, "five");
			tree->insert(10, "six");
			tree->insert(25, "seven");
			tree->insert(5, "eight");
			int a[8] = {30, 20, 50, 10, 25, 40, 70, 5};
			tree->create_queue();
			for (int i = 0; i < 8; i++)
			{
				Assert::AreEqual(tree->start->key, a[i]);
				tree->start = tree->start->next;
			}
			tree->clear();
		}
		TEST_METHOD(remove)
		{
			RBTree* tree = new RBTree;
			tree->insert(40, "one");
			tree->insert(50, "two");
			tree->insert(70, "three");
			tree->insert(20, "four");
			tree->insert(30, "five");
			tree->insert(10, "six");
			tree->insert(25, "seven");
			tree->insert(5, "eight");
			tree->remove(5);
			tree->insert(5, "nine");
			tree->remove(10);
			tree->remove(5);
			tree->remove(25);
			tree->remove(20);
			tree->remove(40);
			tree->remove(30);
			int a[2] = {50, 70};
			tree->create_queue();
			for (int i = 0; i < 2; i++)
			{
				Assert::AreEqual(tree->start->key, a[i]);
				tree->start = tree->start->next;
			}
			tree->clear();
		}

		TEST_METHOD(find)
		{
			RBTree* tree = new RBTree;
			tree->insert(40, "one");
			tree->insert(50, "two");
			tree->insert(70, "three");
			tree->create_queue();
			Assert::AreEqual(tree->find(50)->key, 50);
			tree->clear();
		}
	};
}
