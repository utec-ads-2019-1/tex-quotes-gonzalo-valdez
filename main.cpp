#include <iostream>
#include <vector>
using namespace std;

int count=0;
void replace(string& line){
    if (count%2==0) {
        line.replace(line.find('"'),1,"``");
    }
    if (count%2!=0) {
        line.replace(line.find('"'),1,"''");
    }
    count++;
}

int main() {
    vector<string> lines;
    string line;
    while (getline(cin,line)) {
        while (line.find('"') != string::npos){
            replace(line);
        }
        cout<<line<<endl;
    }
}
