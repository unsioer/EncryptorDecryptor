package top.enatsu;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here
        while (true) {
            Scanner input = new Scanner(System.in);
            String str = input.next();
            if (str.equals("aese")) {
                String rules = input.next();
                String content = input.next();
                System.out.println(MyAES.AESEncode(rules, content));
                System.out.println(MyAES.AESDecode(rules, MyAES.AESEncode(rules, content)));
            } else if (str.equals("aesd")) {
                String rules = input.next();
                String content = input.next();
                System.out.println(MyAES.AESDecode(rules, content));
                System.out.println(MyAES.AESEncode(rules, MyAES.AESDecode(rules, content)));
            } else if (str.equals("basee")) {
                String content = input.next();
                System.out.println(MyBase64.encode(content));
                System.out.println(MyBase64.decode(MyBase64.encode(content)));
            } else if (str.equals("based")) {
                String content = input.next();
                System.out.println(MyBase64.decode(content));
                System.out.println(MyBase64.encode(MyBase64.decode(content)));
            }
        }

    }
}
