# Hall 14 Mess

IIT Kanpur inaugurates the new Hall 14 for its students and now there is a vacancy for the company to run the mess. Several companies are competing to get the contract at the same price. To run the mess most efficiently, the HEC is looking for a company which can provide the maximum number of workers at the same price. Each company has a different number of workers but one company named 'ShyamLal Catering' is too desperate to win the contract. So he tries to get some of the workers working for another company to work for him by paying them extra money.

```
example;

If Shyamlal has 8 workers and others have { 7,9,13,4,8,2 } workers, so to win the contract, he just needs to bribe 3 workers so that now, he has 11 and others have { 7,9,10,4,8,2 } workers.

```

Shyamlal wants to win the contract by bribing the minimum number of workers, so he has to pay the minimum extra amount. But he cannot figure out how many workers he needs to bribe.

Your task is to help him find the minimum number of workers that he needs to bribe to win the contract.

## Input

The first line contains a single integer t -> Number of companies { 2 <= t <=1000 };

The second line contains n -> Number of workers that Shyamlal has { 1 <= n <= 10000 };

The third line contains the t-1 spaced integers a[I], representing the number of workers of other companies. { 1<= a[I] <= 10000 }

In the end, the number of workers for some companies may be 0.


## Output

Print the minimum number of extra workers he needs.


## TestCase

Input

```
7
8
7 9 13 4 8 2
```

output

```
3
```

Explanation: 

To overtake the company with 13 workers, Shyamlal needs to get at least 3 workers from them. So now, Shyamlal has 11 workers and other companies have { 7,9,10,4,8,2 } workers.
Here clearly Shyamlal will win the contract.





