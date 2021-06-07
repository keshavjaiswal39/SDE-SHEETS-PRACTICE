class solution 
{
  public:
	  int *findTwoElement(int *arr, int n) 
	  {
	    int *res= new int(2);
	    int freq[n+1]={0};
	    
		for (int i=0;i<n;i++)
	    {
	      freq[arr[i]]++; // go to that particular index and increment it by 1 
	    }
	    
		for (int i=0;i<n;i++)
	    {
	      if (freq[arr[i]]>1) // if the index is greater then 1 that means it is a duplicate element 
	        res[0]=arr[i];
	      if (freq[i]==0) // the index which will be having 0 will be the missing number 
	        res[1]=i;
	    }
	    
	    if (res[1]==0)
	      res[1]=n;
	    
		return res;
	  }
};
