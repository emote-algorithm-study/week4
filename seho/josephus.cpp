#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int case_n, number_person, number_skip;
	vector<int> vector_person;
	vector<int>::iterator iter;
	int suicide_target;


	cin >> case_n;
	for (int i = 0; i < case_n; ++i)
	{
		
		cin >> number_person >> number_skip;
		
		for (int j = 0; j < number_person; ++j)
		{
			vector_person.push_back(j + 1); // ��� ��ȣ 1 ~ �Űܼ� �迭�� �߰���.
		}

		// ù��° ������� ����.
		suicide_target = 0;
		iter = vector_person.begin();
		while (1)
		{
			iter = vector_person.erase(iter); // �ݺ��ڰ� ����Ű�� ���� ����
			// ��ȯ ���� ������ ������ ������ ����Ŵ.***********
			// iter���� �ڵ����� ������ ����Ŵ.
			// iter�� ��ȯ������ ���Ҵ� ���� ������ ++ ����ÿ� ������ �߻��Ѵ�. why? ... null�� ����Ų�ٴµ�?


			// ���� �� ���Ұ����� 2���̸� ������ ��ġ ��� �� Ż��(����)
			if (vector_person.size() == 2)
			{
				for (int k = 0; k < vector_person.size(); ++k)
				{
					cout << vector_person[k] << " ";
				}
				cout << endl;
				break; // while�� Ż��
			}
			else
			{
				for (int k = 0; k < number_skip -1 ; ++k) // N(number_skip)��ŭ �����ڸ� �ǳʶٴ� ����. // ������ �ڵ����� 1��ŭ ���������Ƿ� skip -1 �ݺ�
				{
					if (iter == vector_person.end()) // Error 2�� ���� �߰�
					{
						iter = vector_person.begin();
					}
					++iter; // Error2 : ������ ������ ���Ұ� ������ ���, �̹� �ݺ��ڰ� end�� ����Ű�� �ִ� ��� ++�� ���� �߻�. �׷��Ƿ� end���� �տ����� �˻��ʿ�
					if (iter == vector_person.end()) // ���� end��ġ�� ����Ű�� ���, �ٽ� ó���� ����Ű�� + 1��.(end�� ���� ������ ����Ű�� ������ + 1��) // ���� �˾�����, end�� �ٽ� begin�� ����Ű�� ��.
					{
						iter = vector_person.begin();
						//++iter;
					}
				}
			}
		}
		
		
		vector_person.clear(); // �ش� case ���� ��, vector clear
	}

}