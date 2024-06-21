class Solution {
public:
    int compress(vector<char>& s) {
        int n=s.size();
        int i=0;
        int index =0;
        
        while(i<n){

            char curr_char=s[i];
            int count=0;

           /////find the count
            while(i<n && s[i]==curr_char){
                i++;
                count++;
            }
            ///asign them 
            s[index]=curr_char;
            index++;

            if(count>1){
               string count_string = to_string(count);

               for( char &ch : count_string){
                    s[index]=ch;
                    index++;
               } 
            }


        }
        return index;
    }
};