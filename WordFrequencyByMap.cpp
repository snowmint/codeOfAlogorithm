/*
Sample Input:

one 
little 
two 
little 
three 
little 
Indians 
# 
one 
little 
four 
Indians 
indians 

Sample Output:

one 1 
little 3 
four 0 
Indians 1 
indians 0 
*/

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> mymap;
    map<string, int>::iterator it;
    string input, wantToFind;
    
    while(cin >> input) {
        if(input.compare("#") == 0) break;
    	  it = mymap.find(input);
    	  if(it != mymap.end()) {
    		    mymap[input] += 1;
    	  }
    	  else {
    		    mymap[input] = 1;
    	  }
    }
    while(cin >> wantToFind) {
        if(cin.eof()) break;
        it = mymap.find(wantToFind);
      
        if(it != mymap.end()) {
            cout << wantToFind << " " << mymap.find(wantToFind)->second << endl;
    	  }
    	  else {
    		    cout << wantToFind << " 0" << endl;
    	  }
	  }
    return 0;
}
