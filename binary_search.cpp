#include<bits/stdc++.h>
using namespace std;
vector<int> s={12,26,31,37,39,40,55,63,82,90};
//判定用関数
bool solve(int mid,int key){
	
	if(s[mid]>=key){
		return true;
	}
	return false;
}
int Search(int key){
	int ng=-1;   		   //値が存在しない
	int ok=(int)s.size();      //値が存在する
	//okとngの大きさは考えなくてよい
	while(abs(ok-ng)>1){
		int mid=(ok+ng)/2;
		//s[mid]がtrueか判定
		if(solve(mid,key)){
			ok=mid;
		}
		else {
			ng=mid;
		}
	}
	return ok;
}
int main(void){
	
	int x=1;
	while(x!=0){
		scanf("%d",&x);
		printf("%d\n",Search(x));
	}
	return 0;
}