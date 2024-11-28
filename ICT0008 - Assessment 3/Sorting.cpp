//
//  Sorting.cpp
//  ICT0008 - Assessment 3
//
//  Created by Phelippe D Ambrosio on 28/11/2024.
//

#import "Testing.h"

void bookSorting(Book shelf[]) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (shelf[j].ISBN > shelf[j + 1].ISBN) {   //conditions when bubblesort happens
                int temp = shelf[j].ISBN;
                string tempTitle = shelf[j].title;
                string tempAuthor = shelf[j].author;
                bool tempAvailability = shelf[j].availability;
                
                shelf[j].ISBN = shelf[j + 1].ISBN;
                shelf[j].title = shelf[j + 1].title;
                shelf[j].author = shelf[j + 1].author;
                shelf[j].availability = shelf[j + 1].availability;
                
                shelf[j + 1].ISBN = temp;
                shelf[j + 1].title = tempTitle;
                shelf[j + 1].author = tempAuthor;
                shelf[j + 1].availability = tempAvailability;
            }
        }
    }
};

//output sorted array
void showOrderedBooks(Book shelf[]) {
    for (int i = 0; i < 5; ++i) {
        cout << shelf[i].title << " " << endl;
        cout << shelf[i].author << " " << endl;
        cout << shelf[i].ISBN << " " << endl;
        cout << shelf[i].availability << " " << endl;
        }
};


