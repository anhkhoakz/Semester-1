# Logic to check Armstrong number


Input a number from user. Store it in some variable say num. Make a temporary copy of the value to some another variable for calculation purposes, say originalNum = num.

Count total digits in the given number, store result in a variable say digits.

Initialize another variable to store the sum of power of its digits ,say sum = 0.

Run a loop till num > 0. The loop structure should look like while(num > 0).

Inside the loop, find last digit of num. Store it in a variable say lastDigit = num % 10.

Now comes the real calculation to find sum of power of digits. Perform sum = sum + pow(lastDigit, digits).

Since the last digit of num is processed. Hence, remove last digit by performing num = num / 10.

After loop check if(originalNum == sum), then it is Armstrong number otherwise not.




# Logic to check Prime number


Input a number from user. Store it in some variable say num.

Declare and initialize another variable say isPrime = 1. isPrime variable is used as a notification or flag variable. Assigning 0 means number is composite and 1 means prime.

Run a loop from 2 to num/2, increment 1 in each iteration. The loop structure should be like for(i=2; i<=num/2; i++).

Check, divisibility of the number i.e. if(num%i == 0) then, the number is not prime.Set isPrime = 0 indicating number is not prime and terminate from loop.

Outside the loop check the current value of isPrime. According to our assumption if it is equal to 1 then the number is prime otherwise composite.




# Logic to check Perfect number


Input a number from user. Store it in some variable say num.

Initialize another variable to store sum of proper positive divisors, say sum = 0.

Run a loop from 1 to num/2, increment 1 in each iteration. The loop structure should look like for(i=1; i<=num/2; i++).Why iterating from 1 to num/2, why not till num? Because a number does not have any proper positive divisor greater than num/2.

Inside the loop if current number i.e. i is proper positive divisor of num, then add it to sum.

Finally, check if the sum of proper positive divisors equals to the original number. Then, the given number is Perfect number otherwise not.




# Algorithm Decimal to Binary conversion


begin:

read (decimal);

binary ← 0; place ← 1; rem ← 0;

while (decimal > 0) do 

begin 

    rem ← decimal % 2;

    binary ← (rem * place) + binary;

    place ← place * 10;

    decimal ← decimal / 2;

end

write('Binary = ' binary)

end




# Logic to find factorial of a number


Input a number from user. Store it in some variable say num.

Initialize another variable that will store factorial say fact = 1.

Why initialize fact with 1 not with 0? This is because you need to perform multiplication operation not summation. Multiplying 1 by any number results same, same as summation of 0 and any other number results same.


Run a loop from 1 to num, increment 1 in each iteration. The loop structure should look like for(i=1; i<=num; i++).

Multiply the current loop counter value i.e. i with fact. Which is fact = fact * i.


