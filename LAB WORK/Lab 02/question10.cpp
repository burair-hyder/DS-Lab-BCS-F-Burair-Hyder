#include <iostream>
using namespace std;

int main() {
	
	
    int categ;
    
    
    cout << "Enter number of categories to store : ";
    cin >> categ;

    int *numBooks = new int[categ];
    
    int **books = new int*[categ];

    for (int i = 0; i < categ; i++) {
        cout << "Enter number of books in Category " << i + 1 << ": ";
        cin >> numBooks[i];

        books[i] = new int[numBooks[i]];
        
        for (int j = 0; j < numBooks[i]; j++) {
            cout << "Enter Book ID for Category " << i + 1 
                 << ", Book " << j + 1 << ": ";
            cin >> books[i][j];
        }
    }

    int searchid;
    cout << "Enter Book ID to search: ";
    cin >> searchid;

    bool found = false;
    
    for (int i = 0; i < categ; i++) {
    	
        for (int j = 0; j < numBooks[i]; j++) {
        	
            if (books[i][j] == searchid) {
            	
                cout << "Book ID " << searchid << " found in Category " << i + 1 << endl;
                
                found = true;
            }
        }
    }
    if (!found) {
        cout << "Book ID " << searchid << " not found in any category." << endl;
    }

    for (int i = 0; i < categ; i++) {
    	
        delete[] books[i];
    }
    
    delete[] books;
    
    delete[] numBooks;

}
