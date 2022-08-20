#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    long long x,y;
    while(n--){
        scanf("%lld%lld",&y,&x);
        if(y>x){
		    if(y%2==0) printf("%lld\n",y*y - x + 1);
		    else printf("%lld\n",(y-1)*(y-1) + x);
	    }
	    else{
		    if(x%2)printf("%lld\n",x*x - y + 1);
		    else printf("%lld\n",(x-1)*(x-1) + y);
	    }
    }
}