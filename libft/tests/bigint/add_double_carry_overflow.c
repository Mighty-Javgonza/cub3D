

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_bigint	n2;

	n1 = c_bigint.new(3);
	n2 = c_bigint.new(3);
	n1.set_base_value(&n1, -1ull);
	n1.shift_left(&n1, 64);
	n1.data[2] = -1ull;
	n2.set_base_value(&n2, 1);
	n1.add(&n1, &n2);
	if (n1.data[0] != 1 || n1.data[1] != 0 || n1.data[2] != 0)
		return (-1);
	return (0);
}
