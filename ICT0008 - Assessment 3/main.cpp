//
//  main.cpp
//  ICT0008 - Assessment 3
//
//  Created by Phelippe D Ambrosio on 28/11/2024.
//

#import "Testing.h"
#import "Sorting.h"


int main(int argc, const char * argv[]) {
    
    
    //bubbleSorting(array);
    
    Book shelf[6];      //initializing an array of 6 books
        
        //book 1
        shelf[0].title = "Pride and Prejudice";
        shelf[0].author = "Jane Austen";
        shelf[0].ISBN = 23;
        shelf[0].availability = true;
        
        //book 2
        shelf[1].title = "To Kill a Mockingbird";
        shelf[1].author = "Harper Lee";
        shelf[1].ISBN = 44;
        shelf[1].availability = true;
        
        //book 3
        shelf[2].title = "Fourth Wing";
        shelf[2].author = "Rebecca Yarros";
        shelf[2].ISBN = 12;
        shelf[2].availability = true;
        
        //book 4
        shelf[3].title = "The Women";
        shelf[3].author = "Kristin Hannah";
        shelf[3].ISBN = 73;
        shelf[3].availability = true;
        
        //book 5
        shelf[4].title = "The Lord of the Rings";
        shelf[4].author = "J. R. R. Tolkien";
        shelf[4].ISBN = 06;
        shelf[4].availability = true;
    
    bookSorting(shelf);
    
    showOrderedBooks(shelf);
    
    
    
    
    
    return 0;
}
