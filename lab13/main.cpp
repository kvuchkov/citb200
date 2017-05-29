#include <iostream>
#include <vector>
#include <list>

#define DEBUG

using namespace std;

template<typename T>
class Collection {
public:
    Collection() {
        length = 0;
        capacity = 0;
        data = new T[0];
    }

    Collection(const Collection<T> &other) : Collection() {
        copyFrom(other);
    }

    ~Collection() {
        delete[] data;
    }

    void add(T value) {
        if (length == capacity)
            resize(max(capacity * 2, 2));
        data[length++] = value;
    }

    T &operator[](int idx) {
        return data[idx];
    }

    Collection<T> &operator=(const Collection<T> &other) {
        if (this != &other) {
            copyFrom(other);
        }
        return *this;
    }

    int getLength() const {
        return length;
    }

    void print(ostream &out) {
        for (int i = 0; i < length; i++) {
            out << data[i];
            if (i < length - 1)
                out << " ";
        }
    }

private:
    int length;
    int capacity;
    T *data;

    void resize(int newCapacity) {

        T *newData = new T[newCapacity];
        for (int i = 0; i < length; i++) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;

        capacity = newCapacity;
    }

    void copyFrom(const Collection<T> &other) {
        resize(other.capacity);
        length = other.length;
        for (int i = 0; i < length; i++) {
            data[i] = other.data[i];
        }
    }
};

template<typename T>
ostream &operator<<(ostream &out, Collection<T> collection) {
    collection.print(out);
    return out;
}

int main(int argc, char *argv[]) {

    Collection<int> collection;
    collection.add(1);
    collection.add(2);
    collection.add(3);
    collection.add(4);
    collection.add(5);
    collection.add(6);

    cout << "Length: " << collection.getLength() << endl;
    cout << "2nd: " << collection[2] << endl;
    collection[2] = 30;
    cout << "2nd: " << collection[2] << endl;

    cout << "original: " << collection << endl;

    Collection<int> second = collection;
    second.add(7);
    second[3] = 40;

    cout << "original: " << collection << endl;
    cout << "copy:     " << second << endl;

    second = collection;
    second[4] = 50;
    second.add(8);
    cout << "original: " << collection << endl;
    cout << "copy2:    " << second << endl;

    return 0;
}