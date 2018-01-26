with open("shufflein.txt") as data:
	first = data.readline().split(" ");
	n = int(first[0]); k=first[1];
	second = data.readline().strip("\n").split(" ");
	third = data.readline().strip("\n").split(" ");
	a = len(third)-1;	
	while len(third)>1:
		print third;
		print second;
		
		for j in range(0,len(third)):
			for i in second: 
				if int(i)==third[j]: 
					second.remove(i);
					a=a-1;
					del third[j];
			third[j]=((int(third[j])+1) % n);
	print third;