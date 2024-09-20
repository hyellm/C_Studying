#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>  // sort

using namespace std;

int solution(vector<int> d, int budget) {
    int n = 0;

    // ������������ ����
    sort(d.begin(), d.end());

    // ���� ������� �μ� ����
    for (int i = 0; i < d.size(); i++)
    {
        if (budget < d[i])
            break;

        budget -= d[i];
        n++;  // ������ �μ� �� ++
    }

    return n;
}


/*
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int n = 0, tmp;
    int d_len = sizeof(d) / sizeof(d[0]);

    for (int i = 0; i < d_len - 1; i++)
    {
        for (int j = i + 1; j < d_len; j++)
        {
            if (d[i] > d[j])
            {
                tmp = d[i];
                d[i] = d[j];
                d[j] = tmp;
            }
        }
    }

    for (int i = 0; i < d_len; i++)
    {
        if (budget < d[i])
            break;

        budget = budget - d[i];
        n++;
    }

    return n;
}
*/