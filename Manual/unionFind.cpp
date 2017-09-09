//Author: Andres-Felipe Ortega-Montoya
//unionFind.cpp
#include <bits/stdc++.h>
#define DEBUG
#ifdef DEBUG
#define Debug(x) cout << x
#else
#define Debug(x)
#endif

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 1 << 30;
const int MAXV = 1000;

int un[MAXV];
int rnk[MAXV];

void setUn(){
  for(int i = 0; i < MAXV; ++i)
    un[i] = i;
}

int find(int a){
  return un[a] == a? a : un[a] = find(un[a]);
}

bool merge(int a, int b){
  x = find(a);
  y = find(b);
  if(x != y){
    if (rnk[x] > rnk[y]) un[y] = x;
    else {
      un[x] = y;
      if (rnk[x] == rnk[y]) rnk[y]++;
    }
    return true;
  }
  return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
}
