#include <stdio.h> 
int i,j,v,e,m,n,s; 
int a[10][10],visit[10]; 
void dfs(int u) 
{ 
int i,j,k,l,m,w; 
visit[u]=1; 
printf("%d ",u); 
for(w=1;w<=v;w++) 
{ 
if(a[u][w]==1) 
{ 
if(visit[w]==0) 
{ 
//printf("{%d %d}",u,w); 
dfs(w); 
} 
} 
} 
} 
int main() 
{ 
printf("Enter number of vertices: "); scanf("%d",&v); 
printf("Enter number of edges: "); scanf("%d",&e); 
for(i=1;i<=v;i++) 
{ 
visit[i]=0; 
for(j=1;j<=v;j++) 
{ 
a[i][j]=0; 
} 
} 
for(i=1;i<=e;i++) 
{ 
printf("Enter edges of Graphs:\n"); scanf("%d",&m); 
scanf("%d",&n); 
a[m][n]=1; 
a[n][m]=1;
} 
for(i=1;i<=v;i++) 
{ 
for(j=1;j<=v;j++) 
{ 
printf("%d ",a[i][j]); 
} 
printf("\n"); 
} 
printf("Source: "); 
scanf("%d",&s); 
i=1; 
while(visit[i]!=1) 
{ 
dfs(i); 
printf("debug: %d",i); i++; 
} 
return 0; 
}
