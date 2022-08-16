In order to add a minimum number of workers to his group, Shyamlal will always tend to pick the members from companies which have a maximum number of workers.

So first, we check if Shyamlal already has the maximum number of workers and if that is the case then we need no extra workers.

However, if there are companies that have more workers than Shyamlal then, we will start from that company that has the maximum number of workers and will transfer the workers till Shyamlal has more workers than that particular company.

So we store the number of workers in array a[] and then sort by using the in-built sort function from (a+1,a+n). We then compare the number of workers between Shyamlal and a[n-1]. Now we repeat the whole process.

The time complexity of the sort function is O(nLog(n)). So overall time complexity comes out to O(n*n*log(n)).

Another way to approach the problem is through priority queues.