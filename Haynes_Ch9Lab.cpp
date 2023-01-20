// Steven Haynes
// Program Status: Complete

// A program that allows the user to enter 10 song and artists into a playlist and will
// sort the entries by artist order. The program uses 10 element arrays of STRUCTURE OBJECTS
// that holds two string variables: artist and title. Once the data has been read in and stored,
// it sorts the entries in ascending order by artist, and then displays the sorted array.

#include <iostream>
#include <string>

using namespace std;


struct PlayList		// Defining a structure.
{string artist,		// Structure variables.
		 song;
};



void getData(string);		// Formula prototype to get that data. (Incomplete, may need a return?)
void sortList(PlayList array[], int size);		// Formula prototype to sort the data. (Incomplete, may need a return?)
void showList(const PlayList array[], int size);		// Formula prototype to display the data. (Incomplete, may need a return?)




int main()

{

const int ELEMENTS = 10;	// Constant for number of items in the playlist.
PlayList playList[ELEMENTS];		// Defining the playList array within the PlayList structure.



	cout << "Enter " << ELEMENTS << "artists and their songs. \n";
		
	for (int index = 0; index < ELEMENTS; index++)		// Loop	
	{
		cout << "\nArtist #" << (index + 1) << ":";
		getline (cin, playList[index].artist);		// Get the artists.
		cout << "Song from this artist: ";
		getline (cin, playList[index].song);		// Get the songs.
	}	
				
sortList(playList, ELEMENTS);	// Sort the play list by artist.

showList(playList, ELEMENTS);	// Show the play list.


	
return 0;
}


// Formula to sort the play list.	
void sortList(PlayList array[], int size)	
{
	bool swapped;
	
	do
	{
		swapped = false;
		for (int count = 0; count < (size - 1); count++)
		{	
			if (array[count].artist > array[count + 1]. artist)
			{
				swap (array[count], array[count + 1]);
				swapped = true;
			}
		}
	}
	while (swapped);
}


// Formula to show the play list.
void showList(const PlayList array[], int size)	
{
	cout << "\t\t\tPlaylist\n" << endl;		// Create a header.
	cout << "\tArtist\t\tTitle\n" << endl;;
	cout << "===================================" << endl;
	
	for (int count = 0; count < size; count++)
		cout<< array[count].artist << "\t\t\t" << array[count].song << endl;
}	