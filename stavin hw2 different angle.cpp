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
			if(i%21==0 && i!=0)cout<<endl;
			}cout<<endl;
			}
		}

//choose qualified words
void chCount(string lyric[], int array){
	for(int i=0; i<array-1; i++){
			int minIndex = i;
        	string minValue = lyric[i];
       			for(int index = i + 1; index < array; index++) {
            		if (lyric[index] < minValue) {
                		minValue = lyric[index];
                		minIndex = index;
            		}
        	}
        lyric[minIndex] = lyric[i];
        lyric[i] = minValue;
        	if (lyric[i].length()>=5){
    		cout << lyric[i] << " ";
    		for(int next= i+1; next<array; next++){
        		if(lyric[i]!=lyric[next]){
        			cout << lyric[next];
				}
			}
		cout << endl;
		}
	}
}
