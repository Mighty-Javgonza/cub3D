#! bin/bash

for f in tests/*/*.lib_test; do
	./"$f"
done
