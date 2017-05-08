#include <boost/shared_ptr.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Product {
public:
    Product(const string &name, double price) : name(name), price(price) {
        cout << " :: Costructed (" << name << ")" << endl;
    }

    ~Product() {
        cout << " :: Destructed (" << name << ")" << endl;
    }

    const string &getName() const {
        return name;
    }

    const double getPrice() const {
        return price;
    }

private:
    string name;
    double price;
};

class ProductRepository {
public:
    ProductRepository() {
        data.push_back(shared_ptr<Product>(new Product("Chair", 12.90)));
        data.push_back(shared_ptr<Product>(new Product("Table", 27.10)));
        data.push_back(shared_ptr<Product>(new Product("Desk", 21.00)));
        data.push_back(shared_ptr<Product>(new Product("Cabinet", 18.70)));
    }

    shared_ptr<Product> getById(int id) {
        return data[id];
    }

private:
    vector<shared_ptr<Product> > data;
};

class Cart {
public:
    void add(shared_ptr<Product> product) {
        data.push_back(product);
    }

    void print(ostream &out) {
        out << "Invoice" << endl;
        out << setfill('-') << setw(50) << "" << setfill(' ') << endl;
        double sum = 0;
        for (int i = 0; i < data.size(); ++i) {
            sum += data[i]->getPrice();
            out << left << setw(40) << data[i]->getName() << right << setw(10) << data[i]->getPrice() << endl;
        }
        out << setfill('-') << setw(50) << "" << setfill(' ') << endl;
        out << left << setw(40) << "Total" << right << setw(10) << sum << endl;
    }

private:
    vector<shared_ptr<Product> > data;
};

int main() {
    ProductRepository *repo = new ProductRepository;
    cout << repo->getById(0)->getName() << endl;

    Cart *cart = new Cart;
    cart->add(repo->getById(1));
    cart->add(repo->getById(3));

    delete repo;

    cart->print(cout);

    delete cart;

    cout << "Done." << endl;

    return 0;
}