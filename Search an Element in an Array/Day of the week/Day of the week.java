import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
public static void main (String[] args) {
Scanner scan = new Scanner(System.in);
int testCase = scan.nextInt();
for(int i = 0; i < testCase; i++) {
int d = scan.nextInt();
int m = scan.nextInt();
int y = scan.nextInt();
findD(d, m, y);
}
}

public static void findD(int d, int m, int y) {
int[] t = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
if(m < 3)
y = y - 1;
int day = (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
printDay(day);
}
public static void printDay(int day) {
switch(day) {
case 0:
System.out.println("Sunday");
break;
case 1:
System.out.println("Monday");
break;
case 2:
System.out.println("Tuesday");
break;
case 3:
System.out.println("Wednesday");
break;
case 4:
System.out.println("Thursday");
break;
case 5:
System.out.println("Friday");
break;
case 6:
System.out.println("Saturday");
break;
}
}
}
