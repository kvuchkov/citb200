#include <iostream>
#include <memory>

using namespace std;

class A {
public:
    A(int data) : data(data) {
        cout << "::A(" << data << ")" << endl;
    }
    ~A() {
        cout << "::~A(" << data << ")" << endl;
    }

    int data;
};

class AFactory {
public:
    AFactory() : a(new A(10)) {}
    shared_ptr<A> get() {
        return a;
    }
private:
    shared_ptr<A> a;
};

class Ptr {
public:
    Ptr() {}
    Ptr(AFactory * factory) : factory(factory) {}

    ~Ptr() {
        delete factory;
    }

    AFactory & operator*() {
        return *factory;
    }

private:
    Ptr(const Ptr &other) {
//        factory = new AFactory(*other.factory);
    }

    Ptr & operator=(const Ptr &other) {
        if(&other != this) {
            cout << "assignment" << endl;
            factory = new AFactory(*other.factory);
        }
        return *this;
    }

    AFactory * factory;
};

void doo(unique_ptr<AFactory> factory) {
    shared_ptr<A> a = factory->get();
    cout << a->data << endl;
}

void ffff(Ptr ptr) {

}

ostream &operator<<(ostream& out, AFactory& f) {
    cout << f.get()->data << endl;
}


void foo() {
    Ptr fac(new AFactory());
    cout << *fac << endl;
//    Ptr fac2(fac);
//    =(fac3, fac);
//    fac3.operator=(fac);


//    unique_ptr<AFactory> factory(new AFactory());
//
//    doo(factory);
//    doo(factory);
//    shared_ptr<A> a = factory->get();

//    delete factory;

//    cout << a->data << endl;
}

int main() {
    foo();
    cout << "THE END" << endl;
    return 0;
}