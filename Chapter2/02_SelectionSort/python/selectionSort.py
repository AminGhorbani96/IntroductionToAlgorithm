A = [5, 2, 4, 6, 1, 3]

for index in range(0, len(A)):
	minimum_index = index
	for j in range(index + 1, len(A)):
		if A[j] < A[minimum_index]:
			minimum_index = j

	print("min : {}".format(A[minimum_index]))
	print("current state : {}".format(A))
	temp = A[index]
	A[index] = A[minimum_index]
	A[minimum_index] = temp
	index +=1
	
print(A)

