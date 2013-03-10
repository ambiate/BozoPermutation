/*
**The bozo permutation.
*/

#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// BozoPermutation
template <typename T>
vector<vector<T> > BozoPermutation(vector<T> p) {
    int sizeFactorial = fact(p.size());
    set<vector<T> > abc;
    while(abc.size() != sizeFactorial) {
        random_shuffle(p.begin(), p.end());
        abc.insert(p);
    }

    vector<vector<T> > xyz;
    typename set<vector<T> >::iterator iter;
    for(iter = abc.begin(); iter != abc.end(); iter++)
        xyz.push_back(*iter);
    
    return xyz;

}