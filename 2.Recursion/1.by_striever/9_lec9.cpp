// qn--> you have to print the combination by picking the one element only once you can't pick more than once and 
// the comnination should not contain the dupicate items and the combination should be int the sorted oreder
// like if 1 2 1 is there then 2 1 1 can't be there 

// arr[]=[1,1,1,2,2] target=4
// ans--> 1,1,2
//        2,2


// this problem can be done as the previous one but one diff is that while picking pass the ind+1 and ans can be take in the from of set of vector insted of vector of vector
// so it will not aloow the dupicate vectors 
// but previous qn take time complexity (2^t)*k but here it will take the (2^t)*klogK because in the previous one we are puting the vector in the another vector but here we are copying the value in the set
// so interviwer will not like the extra logarithmic factor so we optimise it 

// so instead of pick and not pick here we try to pick subsequences

// f(ind,target,ds,ans){
//     for(ind-->n-1){
//         if(arr[i]>target) break;
//         ds.add[arr[i]];
//         f(i+1,target-arr[i],ds,ans)
//         ds.remove()
//     }
// }

// whenver ther is n element then the number of sequences is 2^N