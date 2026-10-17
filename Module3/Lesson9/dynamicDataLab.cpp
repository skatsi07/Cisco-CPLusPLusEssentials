#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Collection {
	int  elno;
	int *elements;
};

void AddToCollection(Collection &col, int element) {

	// see if empty
    if (col.elno == 0) {
        //allocate 1 len vector
        col.elno = 1;
        col.elements = new int[1];
        col.elements[0] = element;
    }
    else {
        //create elno+1 new vector and allocate space
        int *temp = new int[col.elno+1];

        //copy contents of original vector to temp
        for(int i = 0; i < col.elno; i++) {
            temp[i] = col.elements[i];
        }

        //add new element to end of temp
        temp[col.elno] = element;
        col.elno++;

        //free the old vector
        delete[] col.elements;

        //point the original vector to the new one
        col.elements = temp;
    }

}

void PrintCollection(Collection col) {
	cout << "[ ";
	for(int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void) {
	Collection collection = { 0, NULL };

	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for(int i = 0; i < elems; i++)
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete[] collection.elements;
	return 0;
}