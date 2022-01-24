//Leetcode 2114
// cpp sol
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwords = 0;

        for(int i = 0;i<sentences.size();i++){
            int countedwords = 0;
            for(int j = 0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    countedwords++;
                }
            }
            if(maxwords < countedwords){
                maxwords = countedwords;
            }
        }
        return maxwords+1;
    }
};

//java sol
class Solution {
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for(String s: sentences){
            max = Math.max(max,s.split(" ").length);
        }
        return max;
    }
}

//Python
class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max = 0
        
        for i in sentences:
            if max < len(i.split(' ')):
                max = len(i.split(' '))
        return max