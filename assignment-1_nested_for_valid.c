
int main()
{
	int a,b=6;
	char c[5]; // array declaration
	a = 5 + 3;
	b = ++a; // unary op
	int i,j;
	for(i = 0;i<5;++i)
	{
		for(j = 10; j > 100; ++j)
		{
			int k = a + b;
			b = b + 100;
		}
	}
}
