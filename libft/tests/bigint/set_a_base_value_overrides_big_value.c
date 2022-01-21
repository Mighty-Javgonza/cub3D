


int main()
{
	struct s_bigint	n;

	n = c_bigint.new(3);
	n.set_base_value(&n, 1);
	n.shift_left(&n, 65);
	n.set_base_value(&n, 32);
	if (n.data[2] != 32 || n.data[1] != 0 || n.data[0] != 0)
		return (-1);
	return (0);
}
