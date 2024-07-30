class Solution {
public:
    string sortSentence(string s) {
        stringstream word(s);

        string temp;

    unordered_map<int,string> mp;

    int total_word_count=0;

    while(word >> temp){

    int pos=temp[temp.length()-1]-'0';

    temp.erase(temp.length()-1,temp.length()-1);

    mp[pos]=temp;

    total_word_count++;

    }

    string result="";

    for(int i=0;i<total_word_count;i++){

    result+=mp[i+1]+" ";

    }

    result.erase(result.length()-1,result.length()-1);

    return result;
    }
};
