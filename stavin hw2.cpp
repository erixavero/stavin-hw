#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// functions used
void openFile(string [], int);
void chCount(string [], int);

int main(){
	int words= 242;
	string lyrics[words];
	
	openFile(lyrics, words);
	chCount(lyrics, words);
	
return 0;}

//input lyrics
void openFile(string lyric[], int array){
	ifstream file("stavin hw2 lyrics.txt");
	if(file.is_open()){
		lyric[array];
		for(int i=0; i<array;i++){
			file>>lyric[i];
			cout<<lyric[i] <<" ";
			if(i%20==0 && i!=0){
				cout<<endl;
			}
			}
		}
	}

//count amount of letters in each word
void chCount(string lyric[], int array){
	for(int i=0; i<array; i++){
		string str= lyric[i];
		if(str.length()>=5){
			cout<<lyric[i] <<endl;
		}
	}
}

