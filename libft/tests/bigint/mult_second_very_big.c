

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_bigint	n2;

	n1 = c_bigint.new(3);
	n2 = c_bigint.new(3);
	n1.set_base_value(&n1, 1ull);
	n2.set_base_value(&n2, 1ull);
	n2.shift_left(&n2, 64);
	n1.mult(&n1, &n2);
	if (n1.data[0] != 0 || n1.data[1] != 1 || n1.data[2] != 0)
		return (-1);
	return (0);
}
