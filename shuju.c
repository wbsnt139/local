#include <stdio.h>

// O(2^N)
// 쳲����������еĵݹ�д����ȫһ��ʵ��û�õ��㷨����Ϊ̫����
// ����׳˵ݹ�Fac��ʱ�临�Ӷȣ�
long long Fac(size_t N)
{
	if (0 == N)
		return 1;

	return Fac(N - 1)*N;
}

int main()
{
	printf("%lld\n", Fac(10000));

	return 0;
}