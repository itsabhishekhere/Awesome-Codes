int min(int a,int b,int c){
	int min = a;
	int out = 1; //1 for r1
	if(b<min){
		min=b;
		out=2; //2 for r2
	}
	if(c<min){
		min=c;
		out=3; //3 for r3
	}
	return out;
}

// While using this algo. use this below funct. and pass 4 values in array
/*
    d1,d2,d3: size 5 for each array, containing distance of each with 5 rest.
    busy: size 3 conating 1 for busy and o for not for the index delivery boy like index 0 for d1, 1 for d2 and 3 for d3.
*/
void find_delivery_boy(int d1[], int d2[], int d3[], int busy[])
{
	# merge all three arrays to one
	int arr[15];
	int out[5];
	
	for(int i=0; i<15; i++){
		if(i<5){
			arr[i] = d1[i];
		}
		else if(i>=5 && i<10){
			arr[i] = d2[i-5];
		}
		else if(i>=10){
			arr[i] = d3[1-10];
		}
	}
	
	for(int j=0; j<5; j++){
		out[j] = min(arr[j]+(busy[0]*INT_MAX), arr[j+5]+(busy[0]*INT_MAX) ,arr[j+10]+(busy[0]*INT_MAX))
//		update accordingly
        for(int z=j+1; z<5; z++){
        	arr[z + (out[j]-1)*5] = //UPDATE here the new distances 
		}
	}
	
    return out;
	
}
