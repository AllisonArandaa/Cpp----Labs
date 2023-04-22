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
	    
	    
	 while(fin >> WORD >> POS){
		g_words[g_word_count] = WORD;
		g_pos[g_word_count]= POS;
		getline(fin, definitions);
		definitions = definitions.substr(3, definitions.length());
		g_definitions[g_word_count]= definitions;
		g_word_count++;
		
		
	 }
	 
}

int getIndex(string word){
	for( int i < 0; i< g_word_count; i++){
		if( g_words[i] == word )
		return i;
	}else{
		return -1;
		}
}

string getdefinition(string word){
	string definitions;
	
	for( int i< 0; i< g_word_count; i++){
		if( g_words[i]== word){
			definitions = g_definitions[i];
			return definitions;
			}
		}else{
			return NOT_FOUND;
		} 
	}
	
string getpos(string word){
	string pos;
	
	for(int i<0; i< g_word_count; i++){
		if( g_words[i] == word){
			post = g_pos[i];
			return pos;
			}else{
				return NOT_FOUND;
				}
			
			}

int countprefix(string prefix){
	string part;
	int count_prefix;
	for(int i<0; i< g_word_count; i++){
	    part = g_word[i].substr(0, prefix.length()); 
		if(part == prefix){
	    count_prefix++}
	    
	}
	}
	return count_prefix;
	
	}

bool addWord(string word, string definition, string pos){
	for (int i = 0; i < g_word_count; i++){
	
	    if(g_words[i] == word){
	    return false;
	    }
	}
	 
	    if (g_word_count == g_MAX_WORDS){
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
	int index = getIndex(word);
	if( index == -1){
		return false;
		}else{
			for( int i= index; i < g_word_count -1 ; i++){
				g_words[i] = g_words[i+1];
				g_definitions[i] = g_definitions[i+1];
				g_pos[i] = g_pos[i+1];
				}
				g_words[g_word_count-1] = "";
				g_definitions[g_word_count-1] = "";
				g_pos[g_word_count-1] = "";
				
				g_word_count--;
				return true;
				
			
			}
	
	
	}	


int main(){

/*readWords("file.txt");
for(int i = 0; i < g_word_count; i++){
	cout << g_words[i] <<endl;
	cout << g_pos[i] << endl;
	cout << g_definitions[i] << endl;
}
return 0;
*/

}
