class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        if(name.length() > typed.length())
            return false;

        int j = 0, i;

        for(i = 0; i < name.length(); i++) {

            bool flag = false;

            for(j = j; j < typed.length(); j++) {
                
                if(name[i] == typed[j]) {
                    j++;
                    flag = true;
                    break;
                }

                if(i == 0 || name[i - 1] != typed[j])
                    return false;
                
            }

            if(!flag)
                return false;
        }

        i--;
        j--;
        
        while(j < typed.length() && name[i] == typed[j]) 
            j++;
            
        return (j == typed.length());
    }
};