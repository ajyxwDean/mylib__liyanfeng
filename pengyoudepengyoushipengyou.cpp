/*


朋友的朋友是朋友
题目描述
生活中人际关系网络经常会因为"桥梁"的存在而发展，比如A和B是朋友，B和C是朋友，那么A和C可以通过B认识从而成为朋友
，我们称A和C为间接朋友。现在有n个人编号为1至n，存在m对朋友关系，每对朋友关系a b表示a和b互为朋友，问x和y两人
的关系

输入格式
第一行一个整数m表示关系数

接下来m行每行两个整数a b表示a和b互为朋友

最后一行两个整数x y表示询问

输出格式
如果两个人为朋友输出friend

如果两个人为间接朋友输出indirect friend

如果两个人毫无关系输出stranger

输入输出样例
输入 #1

2
1 2
2 3
1 3
输出 #1

indirect friend  
输入 #2

2
1 2
2 3
1 4
输出 #2

stranger
说明/提示
0<n,m<=100,0<a,b,x,y<=n



*/

#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
int flag = 0;
int main(){
    int m,a,b;
    for(int i = 0; i < m; i++){
        cin >> a;
        cin >> b;
        v[a].push_back(b);
        v[b].push_back(a);
        if(v[a].size() > 0){
            for(int i = 0; i < v[a].size(); i++){
                v[i].push_back(b);
                v[b].push_back(i);
            }
        }
        if(v[b].size() > 0){
            for (int i = 0; i < v[b].size(); i++)
            {
                /* code */
                v[i].push_back(a);
                v[a].push_back(i);
            }
            
        }
        if(!v[a].size() - 1 && !v[b].size()){
            //do nothing
        }
    }
    int x,y;
    cin >> x >> y;
    for(int i = 0; i < v[x].size(); i++)
    {
        if(v[x][i] == y){
            flag = 1;
        }
    }
    if(!flag)
        cout << "stranger";
    else
        cout << "frienđ";
    return 0;
}
/*
1 2
1 - 2 - 3




*/

/*
#include<bits/stdc++.h>
using namespace std;
int n,a,b,x[109][109];
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    x[a][b]=x[b][a]=1;
  }
  scanf("%d%d",&a,&b);
  if(x[a][b]){
    printf("friend");
  }else{
    for(int i=0;i<100;i++){
      if(x[b][i]&&x[a][i]){
        printf("indirect friend");
        return 0;
      }
    }
    printf("stranger");
  }
}


*/