
def Merge(A, p, q, r):
	n1 = q - p + 1
	n2 = r - q
	L = []
	R = []

	for i in range(n1):
		L.append(A[p+i])

	for j in range(n2):
		R.append(A[q+j+1])

	print("l : {}".format(L))
	print("r : {}".format(R))

	i = 0
	j = 0
	k = p

	while i < n1 and j < n2:
		if L[i] <= R[j]:
			A[k] = L[i]
			i += 1
		else:
			A[k] = R[j]
			j += 1
		k+=1

	while i < n1 :
		A[k] = L[i]
		i+=1
		k+=1
	while j < n2 :
		A[k] = R[j]
		j+=1
		k+=1
	# if i < n1:
	# 	for z in range(k, r-p+1):
	# 		A[z] = L[i]
	# 		i +=1
	# elif j < n2:
	# 	for z in range(k, r-p+1):
	# 		A[z] = R[j]
	# 		j +=1
	print(A)
	print("==")
	


def MergeSort(A, p, r):
	if p < r:
		q = (p + r )// 2
		MergeSort(A, p, q)
		MergeSort(A, q+1, r)
		Merge(A, p, q ,r)
	

MergeSort([1,2,6,8,3,8,0,3,1,0,3,2,9], 0, 12)
		


