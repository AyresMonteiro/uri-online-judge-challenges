#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> read_map(int n, int m)
{
	char actual;
	vector<bool> line;
	vector<vector<bool>> map;

	for (int i = 0; i < n; i++)
	{
		line.assign(m, false);

		for (int j = 0; j < m; j++)
		{
			cin >> actual;

			if (actual == '#')
			{
				line[j] = true;
			}
		}

		map.push_back(line);
		line.clear();
	}

	return map;
}

void print_map(vector<vector<bool>> map)
{
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			cout << (map[i][j] ? 1 : 0);
		}
		cout << endl;
	}
}

bool is_coast_square(vector<vector<bool>> &map, int x, int y)
{
	if (!map[x][y])
	{
		return false;
	}

	if (x - 1 < 0 || !map[x - 1][y])
	{
		return true;
	}

	if (x + 1 > map.size() - 1 || !map[x + 1][y])
	{
		return true;
	}

	if (y - 1 < 0 || !map[x][y - 1])
	{
		return true;
	}

	if (y + 1 > map[0].size() - 1 || !map[x][y + 1])
	{
		return true;
	}

	return false;
}

int count_coast_squares(vector<vector<bool>> map)
{
	int coast_squares = 0;

	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map.size(); j++)
		{
			coast_squares += (is_coast_square(map, i, j) ? 1 : 0);
		}
	}

	return coast_squares;
}

int main()
{
	int map_width, map_height;

	cin >> map_width >> map_height;

	cout << count_coast_squares(read_map(map_width, map_height)) << endl;

	return 0;
}
