class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
         // 2nd approach using the hashset
        unordered_set<string> st;
        for(auto &path : paths)
        {
            string source = path[0];

            st.insert(source); //outgoing age
        }
        for(auto &path : paths)
        {
            string dest = path[1];

           if(st.find(dest)==st.end())
           {
            return dest;
           }
        }
        return "";
    }
};