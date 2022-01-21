

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_bigint	n2;

	n1 = c_bigint.new(3);
	n1.set_base_value(&n1, 6ull);
	n2 = c_bigint.copy(&n1);
	if (n1.data[0] != 0 || n1.data[1] != 0 || n1.data[2] != 6)
		return (-1);
	return (0);
}
