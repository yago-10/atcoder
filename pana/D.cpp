#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
    ll N;
    if(N==1){
        cout << "a" << endl;
    }else if(N==2){
        cout << "aa" << endl;
        cout << "ab" << endl;
    }else if(N==3){
        cout << "aaa" << endl;
        cout << "aab" << endl;
        cout << "aba" << endl;
        cout << "abb" << endl;
        cout << "abc" << endl;
    }else if(N==4){
        cout << "aaaa" << endl;
        cout << "aaab" << endl;
        cout << "aabb" << endl;
        cout << "abbb" << endl;
        cout << "abbc" << endl;
        cout << "abcc" << endl;
        cout << "abcd" << endl;
    }else if(N==5){
        cout << "aaaaa" << endl;
        cout << "aaaab" << endl;
        cout << "aaabb" << endl;
        cout << "aabbb" << endl;
        cout << "abbbb" << endl;
        cout << "abbbc" << endl;
        cout << "abbcc" << endl;
        cout << "abccc" << endl;
        cout << "abcdd" << endl;
        cout << "abcde" << endl;
    }else if(N==6){
        cout << "aaaaaa" << endl;
        cout << "aaaaab" << endl;
        cout << "aaaabb" << endl;
        cout << "aaabbb" << endl;
        cout << "aabbbb" << endl;
        cout << "abbbbb" << endl;
        cout << "abbbbc" << endl;
        cout << "abbbcc" << endl;
        cout << "abbccc" << endl;
        cout << "abcccc" << endl;
        cout << "abcccd" << endl;
        cout << "abccdd" << endl;
        cout << "abcddd" << endl;
        cout << "abcdde" << endl;
        cout << "abcdee" << endl;
        cout << "abcdef" << endl;
    }else if(N==7){
        cout << "aaaaaaa" << endl;
        cout << "aaaaaab" << endl;
        cout << "aaaaabb" << endl;
        cout << "aaaabbb" << endl;
        cout << "aaabbbb" << endl;
        cout << "aabbbbb" << endl;
        cout << "abbbbbb" << endl;
        cout << "abbbbbc" << endl;
        cout << "abbbbcc" << endl;
        cout << "abbbccc" << endl;
        cout << "abbcccc" << endl;
        cout << "abccccc" << endl;
        cout << "abccccd" << endl;
        cout << "abcccdd" << endl;
        cout << "abccddd" << endl;
        cout << "abcdddd" << endl;
        cout << "abcddde" << endl;
        cout << "abcddee" << endl;
        cout << "abcdeee" << endl;
        cout << "abcdeef" << endl;
        cout << "abcdeff" << endl;
        cout << "abcdefg" << endl;
    }else if(N==8){
        cout << "aaaaaaaa" << endl;
        cout << "aaaaaaab" << endl;
        cout << "aaaaaabb" << endl;
        cout << "aaaaabbb" << endl;
        cout << "aaaabbbb" << endl;
        cout << "aaabbbbb" << endl;
        cout << "aabbbbbb" << endl;
        cout << "abbbbbbb" << endl;
        cout << "abbbbbbc" << endl;
        cout << "abbbbbcc" << endl;
        cout << "abbbbccc" << endl;
        cout << "abbbcccc" << endl;
        cout << "abbccccc" << endl;
        cout << "abcccccc" << endl;
        cout << "abcccccd" << endl;
        cout << "abccccdd" << endl;
        cout << "abcccddd" << endl;
        cout << "abccdddd" << endl;
        cout << "abcddddd" << endl;
        cout << "abcdddde" << endl;
        cout << "abcdddee" << endl;
        cout << "abcddeee" << endl;
        cout << "abcdeeee" << endl;
        cout << "abcdeeef" << endl;
        cout << "abcdeeff" << endl;
        cout << "abcdefff" << endl;
        cout << "abcdeffg" << endl;
        cout << "abcdefgg" << endl;
        cout << "abcdefgh" << endl;
    }else if(N==9){
        cout << "aaaaaaaaa" << endl;
        cout << "aaaaaaaab" << endl;
        cout << "aaaaaaabb" << endl;
        cout << "aaaaaabbb" << endl;
        cout << "aaaaabbbb" << endl;
        cout << "aaaabbbbb" << endl;
        cout << "aaabbbbbb" << endl;
        cout << "aabbbbbbb" << endl;
        cout << "abbbbbbbb" << endl;
        cout << "abbbbbbbc" << endl;
        cout << "abbbbbbcc" << endl;
        cout << "abbbbbccc" << endl;
        cout << "abbbbcccc" << endl;
        cout << "abbbccccc" << endl;
        cout << "abbcccccc" << endl;
        cout << "abccccccc" << endl;
        cout << "abccccccd" << endl;
        cout << "abcccccdd" << endl;
        cout << "abccccddd" << endl;
        cout << "abcccdddd" << endl;
        cout << "abccddddd" << endl;
        cout << "abcdddddd" << endl;
        cout << "abcddddde" << endl;
        cout << "abcddddee" << endl;
        cout << "abcdddeee" << endl;
        cout << "abcddeeee" << endl;
        cout << "abcdeeeee" << endl;
        cout << "abcdeeeef" << endl;
        cout << "abcdeeeff" << endl;
        cout << "abcdeefff" << endl;
        cout << "abcdeffff" << endl;
        cout << "abcdefffg" << endl;
        cout << "abcdeffgg" << endl;
        cout << "abcdefggg" << endl;
        cout << "abcdefggh" << endl;
        cout << "abcdefghh" << endl;
        cout << "abcdefghi" << endl;
    }else if(N==10){
        cout << "aaaaaaaaaa" << endl;
        cout << "aaaaaaaaab" << endl;
        cout << "aaaaaaaabb" << endl;
        cout << "aaaaaaabbb" << endl;
        cout << "aaaaaabbbb" << endl;
        cout << "aaaaabbbbb" << endl;
        cout << "aaaabbbbbb" << endl;
        cout << "aaabbbbbbb" << endl;
        cout << "aabbbbbbbb" << endl;
        cout << "abbbbbbbbb" << endl;
        cout << "abbbbbbbbc" << endl;
        cout << "abbbbbbbcc" << endl;
        cout << "abbbbbbccc" << endl;
        cout << "abbbbbcccc" << endl;
        cout << "abbbbccccc" << endl;
        cout << "abbbcccccc" << endl;
        cout << "abbccccccc" << endl;
        cout << "abcccccccc" << endl;
        cout << "abcccccccd" << endl;
        cout << "abccccccdd" << endl;
        cout << "abcccccddd" << endl;
        cout << "abccccdddd" << endl;
        cout << "abcccddddd" << endl;
        cout << "abccdddddd" << endl;
        cout << "abcddddddd" << endl;
        cout << "abcdddddde" << endl;
        cout << "abcdddddee" << endl;
        cout << "abcdddeeee" << endl;
        cout << "abcddeeeee" << endl;
        cout << "abcdeeeeee" << endl;
        cout << "abcdeeeeef" << endl;
        cout << "abcdeeeeff" << endl;
        cout << "abcdeeefff" << endl;
        cout << "abcdeeffff" << endl;
        cout << "abcdefffff" << endl;
        cout << "abcdeffffg" << endl;
        cout << "abcdefffgg" << endl;
        cout << "abcdeffggg" << endl;
        cout << "abcdefgggg" << endl;
        cout << "abcdefgggh" << endl;
        cout << "abcdefgghh" << endl;
        cout << "abcdefghhh" << endl;
        cout << "abcdefghhi" << endl;
        cout << "abcdefghii" << endl;
        cout << "abcdefghij" << endl;
    }

    return 0;    
}