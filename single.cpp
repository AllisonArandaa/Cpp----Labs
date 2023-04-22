//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: Project 2

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int g_number_of_songs = 5;
string g_song_names[g_number_of_songs] = {"Killshot", "Takeover","Spectre","Ether","No Title"};
string g_genres [g_number_of_songs] = {"HipHop", "HipHop", "EDM", "HipHop", "Jpop"};
int g_song_durations[g_number_of_songs] = {3,4,3,5,2};
string g_artist_names[g_number_of_songs] = {"Eminem", "Eminem", "Jay Z", "Jay Z", "Nas"};



int g_curr_size = 2;
int g_number_of_songs = 0;

string *g_song_names = new string[g_curr_size];
string *g_artist_names = new string[g_curr_size];
int *g_song_durations = new int[g_curr_size];
string *g_genres = new string[g_curr_size];


void allocateNew(){
	g_curr_size *= 2;
	
	//new arrays with double the size
	string *new_song_names = new string[g_curr_size];
	string *new_artist_names = new string[g_curr_size];
	int *new_song_durations = new int[g_curr_size];
	string *new_genres = new string[g_curr_size];
	
	//copy to the new arrays
	for (int i=0; i < g_number_of_songs; i++){
		new_song_names[i] = g_song_names[i];
		new_artist_names[i] = g_artist_names[i];
		new_song_durations[i] = g_song_durations[i];
		new_genres[i] = g_genres[i];
		}

}

void readSongs(string filename){
	ifstream file("songs.txt");
	if(file.is_open()){
		string line;
		while(getline(file,line)){
			
			if(g_number_of_songs >= g_curr_size){
				allocateNew();
			}
			if(line.empty()){
			continue;
			}
			int delimiter_pos = line.find(":");
			string property = line.substr(0, delimiter_pos);
			string value = line.substr(delimiter_pos +1);
		
		if(property == "Song Name"){
			g_song_names[g_number_of_songs]= value;
			}else if(property == "Artist Name"){
				g_artist_names[g_number_of_songs]= value;
			}else if(property == "GENRE"){
				g_genres[g_number_of_songs]= value;
			}else if(property == "Duration"){
				int duration = stoi(value);
				g_song_durations[g_number_of_songs]= duration;
				g_number_of_songs++;
				}
		}
	file.close();
}
}

int main(){
	readSongs("songs.txt");
	cout<<"Number of songs: "<<g_number_of_songs<<endl;
	cout<<"Songs Names: "<<endl;
	
	for(int i =0; i < g_number_of_songs; i++){
		cout<< g_song_names[i]<<endl;
		}
	cout<< "Artist Names: "<< endl;
	for(int i = 0; i < g_number_of_songs; i++){
		cout << g_artist_names[i]<<endl;
		}
	cout<< "Songs Duration: "<<endl;
	for(int i = 0 ; i< g_number_of_songs; i++){
		cout<< g_song_durations[i]<<endl;
		}	
	cout<< "Genres: "<<endl;
	for(int i=0; i< g_number_of_songs; i++){
		cout<< g_genres[i]<< ",";
		}	
		cout<<endl;
		return 0;
	
	}
