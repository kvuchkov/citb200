#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Product
{
	// Code here...
};

class Inventory
{
	// Code here...
};

void print(const Inventory &inventory);
void print(const Product &product);
void printLine(char c, int w);

// DO NOT CHANGE THIS FUNCTION
int main(int argc, char const *argv[])
{
	cout << fixed << setprecision(2);

	Inventory inventory;

	Product glass("Glass", "Crystal glass for wine", 12.40);
	Product vase("Vase", "Glass vase for flowers", 20.0);
	Product carpet("Carpet", "Wool carpet 50x120", 64.90);

	print(glass);

	inventory.add(glass, 12);
	inventory.add(vase, 3);
	inventory.add(carpet, 1);

	print(inventory);

	int glasses = inventory.take(glass, 1); // should return the items taken and decrease the number of items in the inventory
	if (glasses != 1)
	{
		cout << "Wrong answer" << endl;
		return -1;
	}
	print(inventory); // 11 glasses left

	int vases = inventory.take(vase, 3);
	if (vases != 3)
	{
		cout << "Wrong answer" << endl;
		return -1;
	}

	print(inventory); // 0 vases left

	int carpets = inventory.take(carpet, 2);
	if (carpets != 1)
	{
		cout << "Wrong answer" << endl;
		return -1;
	}

	print(inventory); // zero carpets left

	inventory.add(glass, 3);
	print(inventory); // 14 glasses left

	return 0;
}

// DO NOT CHANGE THIS FUNCTION
void printLine(char c, int w)
{
	cout << setfill(c) << setw(w) << "" << setfill(' ') << endl;
}

// DO NOT CHANGE THIS FUNCTION
void print(const Inventory &inventory)
{
	printLine('-', 40);
	cout << "Inventory" << endl;
	printLine('-', 40);
	for (auto product : inventory.getProducts())
	{
		cout << setw(20) << left << product.getName() << right << setw(10) << product.getPrice() << setw(10) << inventory.query(product) << endl;
	}
	printLine('=', 40);
	cout << endl;
}

// DO NOT CHANGE THIS FUNCTION
void print(const Product &product)
{
	cout << setw(20) << left << product.getName() << right << setw(10) << product.getPrice() << endl;
	printLine('-', 30);
	cout << product.getDescription() << endl;
	printLine('=', 30);
	cout << endl;
}

// Add your function definitions (body) below.
// Code here...
