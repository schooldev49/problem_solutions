#include <stdio.h>
typedef long long ll;

struct point{
    ll x,y,z;
};
ll max(ll a, ll b){
    return a > b ? a : b;
}
ll min(ll a, ll b){
    return a < b ? a : b;
}


int check(point a,point b,point c){
    ll t = (a.x - b.x) * (c.y - b.y) - (c.x - b.x) * (a.y - b.y);
    if (t > 0)return 1;
    else if(t < 0) return -1;
    return 0;
}

int intersect(ll a, ll b, ll c, ll d) {
  if (a > b) a ^= b ^= a ^= b;
  if (c > d) c ^= d ^= c ^= d;
  return max(a, c) <= min(b, d);
}

int intersect2(point a, point b, point c, point d) {
  if (!check(a, b, c) && !check(a, b, d)) {
    return intersect(a.x, b.x, c.x, d.x) && intersect(a.y, b.y, c.y, d.y);
  }
  return check(a, c, d) != check(b, c, d) && check(c, a, b) != check(d, a, b);
}

int main(){
    int x;scanf("%d",&x);
    point p1,p2,p3,p4;
    while(x--){
        scanf("%lld%lld%lld%lld%lld%lld%lld%lld", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y, &p4.x, &p4.y);
        printf(intersect2(p1, p2, p3, p4) ? "YES\n" : "NO\n");
    }
}