class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        for(char i:stones){
            m[i]++;
        }
        int j=0;
        for(char i:jewels){
            j+=m[i];
        }
        return j;
    }
};
