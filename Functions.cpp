#include "Functions.h"
Functions::Functions(){
    ifstream inputFile("test.txt");
    string line;
    if (!inputFile.is_open()){
        cout << "couldn't open file" << endl;
    }
    while (getline(inputFile, line)){
        vec.push_back(line);
    }
    inputFile.close();
    cout << vec.size() << endl;
}
vector<string> Functions::duplicate(){
    string tuple;
    set<string> seen;
    vector<string> newList;
      
    for (int i = 2; i < vec.size(); i++){
        tuple = vec[i];
        if (seen.find(tuple) == seen.end()){        // if tuple isn't in seen
            newList.push_back(vec[i]);
            seen.insert(tuple);
        }
    }
    return newList;
}
void Functions::printNewList(vector<string> list){
    for (int i = 0; i < list.size(); i++){
        cout << list[i] << endl;
    }
    cout << "New list length: " << list.size() << endl;
}