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
<<<<<<< HEAD
			cout<<lyric[i] <<" ";
			if(i%21==0 && i!=0)cout<<endl;
			}cout<<endl;
=======
			}
>>>>>>> 1db34798d61f29421fb5d86f71d925d738ed2434
			}
		}

//choose qualified words
void chCount(string lyric[], int array){
<<<<<<< HEAD
	for(int i=0; i<array-1; i++){
=======
	for(int i=0; i<array; i++){
>>>>>>> 1db34798d61f29421fb5d86f71d925d738ed2434
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
        		if(lyric[i]==lyric[next]){
        			cout << "*";
			}
		}
		cout << endl;
		}
		}
	}
