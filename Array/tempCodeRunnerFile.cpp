int st=0,end=arr.size();
    while(st<=end){
        int mid = st + ((end-st)/2);
        if(arr[mid]==tar){
            return mid;
        }
        if(arr[st]<=arr[mid]){ //left sorted
            if(arr[st]<=tar && tar<=arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{//right sorted
            if(arr[mid]<=tar && tar<=arr[end]){
                st=mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;