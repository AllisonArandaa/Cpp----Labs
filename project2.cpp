//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: Project 2.ABC

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


const int MAX_SONGS = 100;
string g_song_names[MAX_SONGS];
string g_artist_names[MAX_SONGS];
int g_song_durations[MAX_SONGS];
int g_num_songs = 0;

string * getGenreSongs(string genre, int &genreCount) {
    vector genre_songs;     // to hold the songs of the given genre
    for (int i = 0; i < g_num_songs; i++) {
        if (g_genres[i] == genre) {
            genre_songs.push_back(g_song_names[i]);     // add song name to vector
        }
    }
    genreCount = genre_songs.size();   // update count parameter
    if (genreCount == 0) {
        return new string[0];   // return empty array
    }
    else {
        string *result = new string[genreCount];    // allocate memory for result array
        for (int i = 0; i < genreCount; i++) {
            result[i] = genre_songs[i];     // copy each song name to result array
        }
        return result;
    }
}

string * getSongsFromDuration(int duration, int &durationsCount, int filter) {
    vector duration_songs;     // to hold the songs with the given duration
    for (int i = 0; i < g_num_songs; i++) {
        int song_duration = g_song_durations[i];
        if ((filter == 0 && song_duration > duration) ||    // greater than filter
            (filter == 1 && song_duration < duration) ||    // less than filter
            (filter == 2 && song_duration == duration)) {   // equal to filter
            duration_songs.push_back(g_song_names[i]);      // add song name to vector
        }
    }
    durationsCount = duration_songs.size();    // update count parameter
    if (durationsCount == 0) {
        return new string[0];   // return empty array
    }
    else {
        string *result = new string[durationsCount];    // allocate memory for result array
        for (int i = 0; i < durationsCount; i++) {
            result[i] = duration_songs[i];     // copy each song name to result array
        }
        return result;
    }
}

string * getUniqueArtists(int &uniqueCount) {
    // Create a set of unique artist names
    set uniqueArtists;
    for (int i = 0; i < g_num_songs; i++) {
        uniqueArtists.insert(g_artist_names[i]);
    }

    // Copy unique artist names to a dynamically allocated array
    string *uniqueArray = new string[uniqueArtists.size()];
    int i = 0;
    for (auto it = uniqueArtists.begin(); it != uniqueArtists.end(); ++it) {
        uniqueArray[i] = *it;
        i++;
    }

    // Update uniqueCount parameter with the number of unique artists
    uniqueCount = uniqueArtists.size();

    // Return the dynamically allocated array of unique artist names
    return uniqueArray;
}


//
int g_curr_size = 2;
int g_number_of_songs = 0;
string *g_song_names = new string[g_curr_size];
string *g_artist_names = new string[g_curr_size];
int *g_song_durations = new int[g_curr_size];
string *g_genres = new string[g_curr_size];

void allocateNew() {
    string *new_song_names = new string[g_curr_size * 2];
    string *new_artist_names = new string[g_curr_size * 2];
    int *new_song_durations = new int[g_curr_size * 2];
    string *new_genres = new string[g_curr_size * 2];
    for (int i = 0; i < g_curr_size; i++) {
        new_song_names[i] = g_song_names[i];
        new_artist_names[i] = g_artist_names[i];
        new_song_durations[i] = g_song_durations[i];
        new_genres[i] = g_genres[i];
    }
    g_curr_size *= 2;
    delete[] g_song_names;
    delete[] g_artist_names;
    delete[] g_song_durations;
    delete[] g_genres;
    g_song_names = new_song_names;
    g_artist_names = new_artist_names;
    g_song_durations = new_song_durations;
    g_genres = new_genres;
}

void readSongs(string filename) {
    ifstream infile(filename);
    string line;
    while (getline(infile, line)) {
        if (g_number_of_songs == g_curr_size) {
            allocateNew();
        }
        size_t colon_pos = line.find(":");
        string song_name = line.substr(0, colon_pos);
        line = line.substr(colon_pos + 1);
        size_t hyphen_pos = line.find("-");
        string artist_name = line.substr(0, hyphen_pos);
        line = line.substr(hyphen_pos + 1);
        size_t genre_pos = line.find("-");
        string genre = line.substr(0, genre_pos);
        line = line.substr(genre_pos + 1);
        size_t space_pos = line.find(" ");
        int song_duration = stoi(line.substr(0, space_pos));
        g_song_names[g_number_of_songs] = song_name;
        g_artist_names[g_number_of_songs] = artist_name;
        g_genres[g_number_of_songs] = genre;
        g_song_durations[g_number_of_songs] = song_duration;
        g_number_of_songs++;
    }
}

int main() {
    readSongs("song.txt");
    cout << "g_curr_size: " << g_curr_size << endl;
    cout << "g_number_of_songs: " << g_number_of_songs << endl;
    cout << "g_song_names: ";
    for (int i = 0; i < g_number_of_songs; i++) {
        cout << g_song_names[i] << ", ";
    }
    cout << endl;
    cout << "g_artist_names: ";
    for (int i = 0; i < g_number_of_songs; i++) {
        cout << g_artist_names[i] << ", ";
    }
    cout << endl;
    cout << "g_genres: ";
    for (int i = 0; i < g_number_of_songs; i++) { 
        cout << g_genres[i] << ", "; 
    } 
    cout << endl;
    cout << "g_song_durations: ";
    for (int i = 0; i < g_number_of_songs; i++){
		cout << g_song_durations[i]<< ", ";
    }
    cout <<endl;
    
    
    return 0;
    
}
    
