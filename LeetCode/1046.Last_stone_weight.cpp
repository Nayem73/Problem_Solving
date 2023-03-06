class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        multiset<int, greater<int>> st;
        for (int X: stones) {
            st.insert(X);
        }


        while ((int)st.size() > 1) {
            auto it1 = st.begin();
            auto it2 = st.begin();
            ++it2;
            if (*it1 != *it2) {
                st.insert(*it1 - *it2);
            }

            //cout<<"-- " << *it1 << ' ' << *it2 << endl;
            
            st.erase(it1);
            st.erase(it2);

            //for (int X: st) cout << X << ' ';
            //cout << endl;
        }

        if (st.empty()) return 0;
        return *st.begin();
    }
};

//8 7 4 2 1 1

//1  

//4 2 1 1 1
//2

//2 1 1 1

//1 1 1

