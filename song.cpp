//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: Project 2C

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <typeinfo>
using namespace std;

class Song{
	public:
	string name;
	string artist;
	int duration;
	string genre;
};

	int g_capacity = 2;
	int g_size = 0;
Song *g_songs = new Song[g_capacity];

void allocateNew(){
	Song *newSongs = new Song[g_capacity *2];
	 for(int i =0; i < g_size; i++){
		 newSongs[i] = g_songs[i];
		 }
		 
	delete[] g_songs;
	g_songs = newSongs;
	g_capacity *= 2;

}

void readSongs(string filename){
	ifstream inputFile(filename);
	if(!inputFile){
		cout<< "error , couldn't open the file"<<filename<<endl;
		return;
		}
	
	string name, artist, genre;
	int duration;
	while(inputFile >> name >> artist >> duration >> genre){
			
			if(g_size == g_capacity){
				allocateNew();
			}
		g_songs[g_size].name = name;
		g_songs[g_size].artist = artist;
		g_songs[g_size].duration = duration;
		g_songs[g_size].genre = genre;
		g_size++;	
			
		}
	inputFile.close();
}

Song *getSongsFromDuration(int duration, int &durationsCount, int filter){
	Song *songs = new Song[g_size];
	durationsCount = 0;
	for(int i= 0 ; i < g_size; i++){
		if (filter == 0 || (g_songs[i].duration) >= duration){
			songs[durationsCount++] = g_songs[i];
			}
		}
		return songs;
	
	}

Song *getGenreSongs(string genre, int &genreCount){
	Song *songs = new Song[g_size];
	genreCount = 0;
	for(int i=0; i <g_size; i++){
		if(g_songs[i].genre == genre){
			songs[genreCount++] = g_songs[i];
			}
		}
		return songs;
	}	
	
string *getUniqueArtists(int &uniqueCount){
	string *artists = new string[g_size];
	uniqueCount = 0;
	for(int i =0; i<g_size; i++){
		if(find(artists, artists + uniqueCount, g_songs[i].artist) == artists + uniqueCount){
			artists[uniqueCount++] = g_songs[i].artist;
			}
		}
		return artists;
	}	

string getFavoriteArtist(){
	if(g_size == 0){
		return "";
		}
		int maxCount = 0;
		string maxArtist = "";
		for (int i =0; i <g_size; i++){
			int count = 0;
			for(int j =0; j<g_size; j++){
				if(g_songs[j].artist == g_songs[i].artist){
					count++;
					}
				}
			if(count > maxCount){
				maxCount = count;
				maxArtist = g_songs[i].artist;
				}	
			}
		return maxArtist;
	}








int main(){
	string filename = "songs.txt";
	readSongs(filename);
	int durationsCount;
	
	 Song* longSongs = getSongsFromDuration(300, durationsCount, 1);
    cout << "Songs with duration >= 300 seconds:" << endl;
    for (int i = 0; i < durationsCount; i++) {
        cout << longSongs[i].name << " by " << longSongs[i].artist << endl;
    }
    delete[] longSongs;

    // Test the getGenreSongs() function
    int genreCount;
    Song* rockSongs = getGenreSongs("Rock", genreCount);
    cout << "Songs in the Rock genre:" << endl;
    for (int i = 0; i < genreCount; i++) {
        cout << rockSongs[i].name << " by " << rockSongs[i].artist << endl;
    }
    delete[] rockSongs;

    // Test the getUniqueArtists() function
    int uniqueCount;
    string* uniqueArtists = getUniqueArtists(uniqueCount);
    cout << "Unique artists:" << endl;
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueArtists[i] << endl;
    }
    delete[] uniqueArtists;

    // Test the getFavoriteArtist() function
    string favoriteArtist = getFavoriteArtist();
    cout << "Favorite artist: " << favoriteArtist << endl;

    return 0;
	
	}
