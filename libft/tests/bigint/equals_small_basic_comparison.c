

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_bigint	n2;

	n1 = c_bigint.new(3);
	n2 = c_bigint.new(5);
	n1.set_base_value(&n1, 8);
	n2.set_base_value(&n2, 8);
	if (c_bigint.isequal(n1, n2) != 1)
		return (-1);
	n2.set_base_value(&n2, 1);
	if (c_bigint.isequal(n1, n2) != 0)
		return (-1);
	return (0);
}
