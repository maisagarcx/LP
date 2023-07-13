for(int i=0;i<size;i++){
		flag=0;
		for(int j=0;j<size;j++){
			if(M[i][j]==W[j]){
				flag+=1;
			}
		}
		if(flag==sizeOfWord){
			count+=1;
		}
	}
