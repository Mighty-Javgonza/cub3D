

 #include <stdio.h>

int main()
{
	struct s_bigint	n;

	n = c_bigint.new(3);
	n.set_base_value(&n, 1);
	n.shift_left(&n, 3);
	n.shift_right(&n, 3);
	if (n.data[1] != 0 || n.data[2] != 1)
		return (-1);
	return (0);
}
