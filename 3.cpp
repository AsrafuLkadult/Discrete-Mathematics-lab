#include<bits/stdc++.h>
using namespace std;
#define INF 99999
int path[100][100];
int graph[100][100];
/*int Pfind(int src,int dst)
{
   if(src==dst)
       {
          cout<<"Path :"<<src;
          return 0;
       }
    Pfind(src,path[src][dst]);
        cout<<" "<<src;
} */
int main()
{

    freopen("in.txt","r",stdin);
    int node,edge,cost,n1,n2;
     cout<<"enter number of Node and Edge :\n";
     cin>>node>>edge;

          for(int i=1;i<=node;i++){

              for(int j=1;j<=node;j++)

          {
              if(i==j)
            {
               graph[i][j]=0;

            }
            else
                graph[i][j]=INF;

               //  path[i][j]=i;
                }

     }
     cout<<"adjacent and cost :\n";

      for(int i=1;i<=edge;i++)
      {
           cin>>n1>>n2>>cost;
           graph[n1][n2]=cost;   //since for Bidirectional graph otherwise first step
            graph[n2][n1]=cost;
      }

       for(int k=1;k<=node;k++){
        for(int i=1;i<=node;i++)
        {
             for(int j=1;j<=node;j++){
           graph[i][j]=min(graph[i][k]+graph[k][j],graph[i][j]);
           //path[i][j]=path[k][j];
                        }
           }

        }
        cout<<"Shortest path Matrix is :\n";
          cout<<"_________________________\n";

            for(int i=1;i<=node;i++)
     {
       for(int j=1;j<=node;j++)
          {
            if(graph[i][j]==INF)
            {
              cout<<"INF"<<"\t";
            }
            else
                cout<<graph[i][j]<<"\t";

          }
          cout<<endl;

     }
cout<<"__________________________\n";

/* int src ,dst;
  cout<<"Enter the source and Destination :\n";
  cin>>src >> dst;

  cout<<"Distance : "<<graph[src][dst]<<endl;
     Pfind(src,dst);
     */

}
