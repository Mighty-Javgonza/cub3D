

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_bigint	n2;

	n1 = c_bigint.new(3);
	n2 = c_bigint.new(3);
	n1.set_base_value(&n1, 6ull);
	n2.set_base_value(&n2, 7ull);
	n1.mult(&n1, &n2);
	if (n1.data[0] != 0 || n1.data[1] != 0 || n1.data[2] != 42)
		return (-1);
	return (0);
}
