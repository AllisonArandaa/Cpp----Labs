/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Project.A.B.C


*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <climits>
#include <stdlib.h>

using namespace std;

const int g_MAX_WORDS = 1000;
int g_word_count = 0;
string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];



	
void readWords(string filename){
	ifstream fin(filename);
    if( fin.fail()){
	    exit(1);}
	    string WORD; 
	    string POS;
	    string definitions;
	    string junk;
	    
	    
	 while(fin >> WORD >> POS>> junk){
		g_words[g_word_count] = WORD;
		g_pos[g_word_count]= POS;
		getline(fin, definitions);
		definitions = definitions.substr(1);
		g_definitions[g_word_count]= definitions;
		g_word_count++;
		
		
	 }
	 
}

int getIndex(string word){
	int index = -1;
	for( int i = 0; i< g_word_count; i++){
		if( g_words[i] == word ){
			index = i;
	    }
		
	}
	return index;
}


string getDefinition(string word) {
	string definitions;
	
	for( int i= 0; i< g_word_count; i++){
		if( g_words[i]== word){
			definitions = g_definitions[i];
			return definitions;
			}
		}
		return "NOT_FOUND";
		 
}
	
string getPOS(string word) {
	string pos;
	
	for(int i=0; i< g_word_count; i++){
		if( g_words[i] == word){
			pos = g_pos[i];
			return pos;
			}else{
				return "NOT_FOUND";
				}
			
			}
			return "NOT_FOUND";
}			

int countPrefix(string prefix){
	string part;
	int count_prefix =0;
	for(int i=0; i< g_word_count; i++){
	    part = g_words[i].substr(0, prefix.length()); 
		if(part == prefix){
	    count_prefix++;
	    }
	    
	}
	
	return count_prefix;
	
	}

bool addWord(string word, string definition, string pos) {
	for (int i = 0; i < g_word_count; i++){
	
	    if(g_words[i] == word){
	    return false;
	    }
	}
	 
	    if (g_word_count >= g_MAX_WORDS){
			return false;
			}
		
	g_words[g_word_count] = word;
	g_definitions[g_word_count] = definition;
	g_pos[g_word_count] = pos;
	
	g_word_count++;
	
	return true;
			   
	}
	
	
bool editWord(string word, string definition, string pos){
	int index = -1; // 
	
	for( int i=0; i < g_word_count; i++){
		if( g_words[i] == word){
			index = i;
			break;
			
			}
		
		}
	    if (index == -1){
			return false;
			}
	g_definitions[index] = definition;
	g_pos[index] = pos;
	return true;
	}

bool removeWord(string word){
	int tracker = getIndex(word);
	
	if(getIndex( word) == -1){
		
		return false;
		}
			

				g_words[tracker] = g_words[g_word_count-1];
				g_definitions[tracker] = g_definitions[g_word_count-1];
				g_pos[tracker] = g_pos[g_word_count-1];
				
				g_words[g_word_count-1] = "";
				g_definitions[g_word_count-1] = "";
				g_pos[g_word_count-1] = "";
				
				g_word_count--;
				return true;
			
	
	
}	



void gameLoop() {
    int difficulty, tries;
    string word, current;
    char letter;
    while (true) {
        cout << "Welcome to Hangman!" << endl;
        cout <<  "0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
        cin >> difficulty;
        while (difficulty < 0 || difficulty > 3) {
            cout <<  "Enough horseplay >_< !\n0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
            cin >> difficulty;
        }
        if (difficulty == 3) {
            cout << "If you're hangry, go grab a bite! See what I did there?" << endl;
            break;
        }
        word = getRandomWord();
        current = maskWord(word);
        tries = getTries(difficulty);
        while (tries != 0) {
            cout << "Life: ";
            printAttempts(tries, difficulty);
            cout << endl << "Word: "<< current << endl;
            cout << "Enter a letter: ";
            cin >> letter;
            
            if (!revealLetter(word, letter, current)) {
                tries--;
            }
            if (current == word) {
                break;
            }
            if (tries == 2) {
                cout << "The part of speech of the word is "<< getPOS(word) << endl;
            }
            if (tries == 1) {
                cout << "Definition of the word: " << getDefinition(word) << endl;
            }
        }
        if (tries == 0) {
            cout << "The word is \"" << word << "\". Better luck next time! You're getting the ..ahem.. hang of it." << endl;
        }
        else {
            cout << "Congrats!!!" << endl;
        }
    }
}


string getRandomWord() {
    srand((unsigned) time(NULL));
    int index = rand() % g_word_count;
    return g_words[index];
}

string maskWord(string word){
	
	}

/*int main(){

	readWords("file.txt");
	for (int i = 0; i < g_word_count; i++){
		cout << g_words[i];
		cout << g_pos[i];
		cout << g_definitions[i];
	}
	int test = getIndex("Grumpy");
	cout<< test;

	return 0;


}
*/
