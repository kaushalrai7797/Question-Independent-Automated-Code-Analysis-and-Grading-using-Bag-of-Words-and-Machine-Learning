#include<stdio.h>
#include<string.h>
#define swap( a, b ) a^=b,b^=a,a^=b

int n, an;
char a[32][5];
char grid[4][4], answer[4][4];
const char gridsnotpossible[4][4] = { "grid", "snot", "poss", "ible" };

void reverse( char *a ) {
	swap( a[0], a[3] );
	swap( a[1], a[2] );
}

void gridcpy( char a[4][4], char b[4][4] ) {
	int i,j;
	for( i=0; i<4; ++i )
		for(  j=0; j<4; ++j )
			a[i][j] = b[i][j];
}

void transform( char a[4][4] ) {
	int i,j;
	for(  i=0; i<4; ++i )
		for( j=0; j<4; ++j )
			if( a[i][j] == '-' )
				a[i][j] = 'A';
}

int gridcmp( char a[4][4], char b[4][4] ) {
	int i,j;
	for( i=0; i<4; ++i )
		for(j=0; j<4; ++j )
			if( a[i][j] != b[i][j] )
				return a[i][j] - b[i][j];
	return 0;
}

void gen( int x ) {
	if( x == an )
	{
		char temp[4][4];
		gridcpy( temp, grid );
		transform(grid);
		if( gridcmp(grid, answer) < 0 )
			gridcpy( answer, grid );
		gridcpy( grid, temp );
		return;}
	int f,i,j;
	char temp[4];
	for(i=0; i<4; ++i )
	{
		f = 1;
		for( j=0; f==1 && j<4; ++j )
			if( !(grid[i][j] == '-' || a[x][j] == grid[i][j]) )
				f = 0;
		if( f == 1 )
		{
			for(j=0; j<4; ++j )
				temp[j] = grid[i][j];
			for(j=0; j<4; ++j )
				grid[i][j] = a[x][j];
			gen( x+1 );
			for(j=0; j<4; ++j )
				grid[i][j] = temp[j];}
		f = 1;
		for(j=0; f==1 && j<4; ++j )
			if( !(grid[i][j] == '-' || a[x][3-j] == grid[i][j]) )
				f = 0;
		if( f == 1 )
		{
			for(j=0; j<4; ++j )
				temp[j] = grid[i][j];
			for(j=0; j<4; ++j )
				grid[i][j] = a[x][3-j];
			gen( x+1 );
			for(j=0; j<4; ++j )
				grid[i][j] = temp[j];}}
	for(j=0; j<4; ++j )
	{
		f=1;
		for(i=0; f==1 && i<4; ++i )
			if( !(grid[i][j] == '-' || a[x][i] == grid[i][j]) )
				f = 0;
		if( f == 1 )
		{
			for(i=0; i<4; ++i )
				temp[i] = grid[i][j];
			for(i=0; i<4; ++i )
				grid[i][j] = a[x][i];
			gen(x+1);
			for(i=0; i<4; ++i )
				grid[i][j] = temp[i];}
		f=1;
		for(i=0; f == 1 && i<4; ++i )
			if( !(grid[i][j] == '-' || a[x][3-i] == grid[i][j]) )
				f = 0;
		if( f == 1 )
		{
			for(i=0; i<4; ++i )
				temp[i] = grid[i][j];
			for(i=0; i<4; ++i )
				grid[i][j] = a[x][3-i];
			gen(x+1);
			for(i=0; i<4; ++i )
				grid[i][j] = temp[i];}}}
int _main() {
	int i,j,f;
	scanf("%d", &n); an=0;
	for(i=0; i<n; ++i )
	{
		char temp[5];
		scanf("%s\n", temp);
		f=1;
		for(j=0; f==1 && j<an; ++j )
		{
			if( !strcmp(a[j], temp) )
				f=0;
			reverse( temp );
			if( !strcmp(a[j], temp) )
				f=0;}
		if( f == 1 )
			strcpy( a[an++], temp );}
	for(i=0; i<4; ++i )
		for(j=0; j<4; ++j )
			grid[i][j] = '-', answer[i][j] = gridsnotpossible[i][j];
	gen( 0 );
	for(i=0; i<4; ++i )
	{
		for(j=0; j<4; ++j )
			printf("%c", answer[i][j]);
		printf("\n");}
	printf("\n");}

int main() {
	int t;
	for( scanf("%d", &t); t--; )
		_main();}
