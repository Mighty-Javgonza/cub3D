


int main()
{
	struct s_bigint	n;

	n = c_bigint.new(3);
	n.set_base_value(&n, 32);
	if (n.data[2] != 32)
		return (-1);
	return (0);
}
