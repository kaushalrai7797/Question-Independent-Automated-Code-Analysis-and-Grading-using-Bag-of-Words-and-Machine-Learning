#include <bits/stdc++.h>
using  namespace std;
void word_grid(vector<string> *, int);
void create_grids(string & , vector <char(*)[4]>&);
void copy_grid(char (*)[4], char (*)[4]);
bool is_less(char(*)[4], char(*)[4]);
void print_grid(char(*)[4]);
void reverse(string &);

char a[20000][4][4]; 
int curr = 0;
int N[100];

int main()
{
	std::ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	vector <string>s[50];
	for (int i = 0; i < T; i++)
	{
		cin >> N[i];
		for (int j = 0; j < N[i]; j++)
		{
			string temp;
			cin >> temp;
			s[i].push_back(temp);
		}

	}
	for (int i = 0; i < T; i++)
	{
		curr = 0;
		word_grid(s + i, N[i]);
		cout << endl;
	}
    return 0;
}

void word_grid(vector<string> *s, int N)
{
	vector < char(*)[4] > g_poss;// possible 4 x 4 grids
	char empty_grid[4][4] = { '0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0' };
	g_poss.push_back(empty_grid);
	bool flag = false;
	vector <string> s1;
	for (int i = 0; i < N; i++)
	{
		unsigned int j = 0;
		while (j != s1.size()
			&& !((*s)[i][0] == s1[j][0] && (*s)[i][1] == s1[j][1] && (*s)[i][2] == s1[j][2] && (*s)[i][3] == s1[j][3])
			&& !((*s)[i][0] == s1[j][3] && (*s)[i][1] == s1[j][2] && (*s)[i][2] == s1[j][1] && (*s)[i][3] == s1[j][0]))
		{
			j++;
		}
		if (j == s1.size())
			s1.push_back((*s)[i]);
	}
	for (unsigned int i = 0; i < s1.size(); i++)
	{
		create_grids(s1[i],g_poss);
	}
	if(g_poss.size() == 0)
		cout<< endl << "grid" << endl << "snot" << endl << "poss" << endl << "ible" << endl;
	else
	{
		for (unsigned int i = 0; i < g_poss.size(); i++)
		{
			for (int r = 0; r < 4; r++)
			{
				for (int c = 0; c < 4; c++)
				{
					if (g_poss[i][r][c] == '0')
						g_poss[i][r][c] = 'A';
				}
			}
		}
		unsigned int ind = 0;
		for (unsigned int i = 1; i < g_poss.size(); i++)
		{
			if (is_less(g_poss[i], g_poss[ind]))
				ind = i;
		}
		print_grid(g_poss[ind]);
		g_poss.clear();
	}
}

void create_grids(string &s,vector <char(*)[4]> &g_poss)
{
	string t(s);
	reverse(t);
	vector <char(*)[4]>temp;

	for (unsigned int i = 0; i < g_poss.size(); i++)
	{
		for (int r = 0; r < 4; r++)
		{
			bool col;//collision
			col = false;
			for (int c = 0; c < 4; c++)
			{
				if (g_poss[i][r][c] != '0' && s[c] != g_poss[i][r][c])
					col = true;
			}
			if (!col)
			{
				copy_grid(a[curr],g_poss[i]);
				for (int c = 0; c < 4; c++)
				{
					a[curr][r][c] = s[c];
				}
				temp.push_back(a[curr]);
				curr++;
			}
		}
		for (int c = 0; c < 4; c++)
		{
			bool col;//collision
			col = false;
			for (int r = 0; r < 4; r++)
			{
				if (g_poss[i][r][c] != '0' && s[r] != g_poss[i][r][c])
					col = true;
			}
			if (!col)
			{
				copy_grid(a[curr], g_poss[i]);
				for (int r = 0; r < 4; r++)
				{
					a[curr][r][c] = s[r];
				}
				temp.push_back(a[curr]);
				curr++;
			}
		}
		for (int r = 0; r < 4; r++)
		{
			bool col;//collision
			col = false;
			for (int c = 0; c < 4; c++)
			{
				if (g_poss[i][r][c] != '0' && t[c] != g_poss[i][r][c])
					col = true;
			}
			if (!col)
			{
				copy_grid(a[curr],g_poss[i]);
				for (int c = 0; c < 4; c++)
				{
					a[curr][r][c] = t[c];
				}
				temp.push_back(a[curr]);
				curr++;
			}
		}
		for (int c = 0; c < 4; c++)
		{
			bool col;//collision
			col = false;
			for (int r = 0; r < 4; r++)
			{
				if (g_poss[i][r][c] != '0' && t[r] != g_poss[i][r][c])
					col = true;
			}
			if (!col)
			{
				copy_grid(a[curr], g_poss[i]);
				for (int r = 0; r < 4; r++)
				{
					a[curr][r][c] = t[r];
				}
				temp.push_back(a[curr]);
				curr++;
			}
		}
	}
	g_poss = temp;
	temp.clear();
}

void copy_grid(char(*de)[4], char(*so)[4])
{
	for (unsigned int r = 0; r < 4; r++)
	{
		for (unsigned int c = 0; c < 4; c++)
		{
			de[r][c] = so[r][c];
		}
	}
	return;
}

bool is_less(char(*m)[4], char(*n)[4])
{
	for (int r = 0; r < 4; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			if (m[r][c] < n[r][c])
				return true;
			if (m[r][c] > n[r][c])
				return false;
		}
	}
	return false;
}

void print_grid(char(*a)[4])
{
	cout << endl;
	for (int r = 0; r < 4; r++)
	{
		for (int j = 0; j < 4; j++)
			cout << a[r][j];
		cout << endl;
	}
}

void reverse(string &s)
{
	char temp = s[0];
	s[0] = s[3];
	s[3] = temp;
	temp = s[1];
	s[1] = s[2];
	s[2] = temp;
	return;
}