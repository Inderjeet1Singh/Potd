class Solution {
public:
    bool isAnagram(string s, string t) {
        int first[26]={0};
    int second[26]={0};
    int i=0;
    while(s[i]!='\0'){
         int j=s[i];
        first[j-'a']++;   
        i++; 
    }
    i=0;
     while(t[i]!='\0'){
        int j=t[i];
        second[j-'a']++;   
        i++;
    }
    bool flag=true;
    for( i=0;i<26;i++){
        if(first[i]!=second[i]){
            flag=0;
            break;
        }
    }
    return flag;
 }
};