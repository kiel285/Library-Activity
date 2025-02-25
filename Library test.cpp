#include <iostream>
#include <vector>
using namespace std;

class Book{
	private:
		string Title;
		string Author;
		string ReleaseDate;
		string Genre;
		
		
	public:
		// Constructor
		Book(string Title, string Author, string ReleaseDate, string Genre){
			this->Title = Title;
			this->Author = Author;
			this->ReleaseDate = ReleaseDate;
			this->Genre = Genre;

		}
		
		// Destructor
		~Book(){
			cout<<"Destructor Initiated"<<endl;
		}
		
		void Display(){ 
			cout<<"Title: "<<Title<<endl;
			cout<<"Author: "<<Author<<endl;
			cout<<"Release Date: "<<ReleaseDate<<endl;
			cout<<"Genre: "<<Genre<<endl;
	
		}
	
};

int main(){
	vector<Book> books;
	int Shelf;
	char Loop = 'Y'; 
	
	while (Loop == 'Y' || Loop == 'y'){
        cout<<"----------------------------------"<<endl;
        cout<<"Choose Action Below"<<endl;
        cout<<"----------------------------------"<<endl;
		cout<<"Input 1 to Terminate Program"<<endl;
		cout<<"Input 2 to Input an entry"<<endl;
		cout<<"Input 3 to Display Shelf"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"Action: ";
		cin>>Shelf;
        cout<<"----------------------------------"<<endl;
		cin.ignore();
		switch(Shelf){
			case 1:
            {
				cout<<"Terminating Shelf"<<endl;
                cout<<"----------------------------------"<<endl;
				return 0;
				break;
            }
			case 2:
            {
				cout<<"Inputting Entry"<<endl;
				string Title; 
                string Author;
                string Genre; 
                string ReleaseDate;
				
                cout<<"----------------------------------"<<endl;
				cout<<"Enter Title Name: ";
				getline(cin, Title);

				cout<<"Enter Author Name: ";
				getline(cin, Author);
			
				cout<<"Enter Release Date: ";
				getline(cin, ReleaseDate);
			
				cout<<"Enter Genre: ";
				getline(cin, Genre);
                cout<<"----------------------------------"<<endl;
			
				books.push_back(Book(Title, Author, ReleaseDate, Genre));
				break;
            }
			case 3:{
                if (books.size()<1){
                    cout<<"Shelf is empty"<<endl;
                    cout<<"----------------------------------"<<endl;}
                    
                else{
				    cout<<"Displaying The Shelf"<<endl;
                    cout<<"----------------------------------"<<endl;
				    for (int i = 0;i<books.size();++i) {
                        cout<<"----------------------------------"<<endl;
					    cout<<"Book "<<i + 1<<endl;
					    books[i].Display(); }                    
				}
				break;
            }
			default:
                cout<<"Invalid Input"<<endl;
				break;
            
		}
		
		cout<<"Would you like to Repeat the Program? (Y/N): ";
		cin>>Loop;
		
	}
	
	return 0;
}
