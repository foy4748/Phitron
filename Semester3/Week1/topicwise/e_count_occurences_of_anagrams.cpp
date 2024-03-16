#include <bits/stdc++.h>

// Thanks to this youtube video
// https://www.youtube.com/watch?v=fYgU6Bi2fRg&t=255s

using namespace std;

int main() {
  // Write your code here
  string txt, pat;
  cin >> txt >> pat;

  int window_size = pat.size();
  int txt_size = txt.size();

  // map<char, int> pat_mp;
  // int pat_mp[26] = {0};
  // int txt_mp[26] = {0};
  vector<int> pat_mp(26, 0);
  vector<int> txt_mp(26, 0);

  for (int i = 0; i < window_size; i++) {
    char c = pat[i];
    pat_mp[c - 'a']++;
  }
  for (int j = 0; j < window_size; j++) {
    char c = txt[j];
    txt_mp[c - 'a']++;
  }

  int count = 0;

  for (int i = 0; i < txt_size - window_size + 1; i++) {
    // map<char, int> txt_mp;
    /*
bool isMatched = true;
for (char c : pat) {
  // cout << c << "\t" << txt_mp[c] << "\t" << pat_mp[c] << "\n";
  if (pat_mp[c - 'a'] != txt_mp[c - 'a'])
    isMatched = false;
}
// cout << "\n";
    */

    // if (isMatched)
    if (pat_mp == txt_mp)
      count++;
    char cs = txt[i];
    txt_mp[cs - 'a']--;
    char ce = txt[i + window_size];
    txt_mp[ce - 'a']++;
  }

  cout << count << "\n";

  return 0;
}
