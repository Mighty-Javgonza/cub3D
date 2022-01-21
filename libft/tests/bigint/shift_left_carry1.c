

 #include <stdio.h>

int main()
{
	struct s_bigint	n;

	n = c_bigint.new(3);
	n.set_base_value(&n, 1);
	n.shift_left(&n, 64);
	if (n.data[1] != 1 || n.data[2] != 0)
		return (-1);
	return (0);
}
