struct Graph{
	int V,E;
	int *Adj;
};

void floydwarshall(struct Graph *G);
void printSolution(struct Graph *G);

void floydwarshall(struct Graph *G){
	int i,j,k;
	int dist[G->V][G->V];
	
	for(i=0;i<G;i++)
	  for(j=0;j<G-V;i++)
	    dist[i][j]=*(G->Adj+i*G->V+j);
}

int main(){
	struct Graph *G;
	int i,j;
	int matrix[4][4]={{0,5,INF,10},
	{INF,0,3,INF},
	{INF,INF,0,INF},
	{IN F,INF,INF,0}};
	G=(struct Graph*)malloc(sizeof(struct Graph));
	G->V=4;
	G->E=4;
	G->Adj=malloc((G-V)*(G-V)*sizeof(int));
	for(i=0;i<G-V;i++)
	   for(j=0;j<G-V;j++)
	      *(G->Adj+i*G->V+j)=matrix[i][j];
	printf("Original distance\n");
	printSolution(G);
	floydwarshall(G);
	printf("Matrix below shows the shortest distances between every pair.");
	
	printSolution(G);      
}
