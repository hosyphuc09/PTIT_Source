import java.util.Scanner;

public class J03021 {
    static boolean check(String s){
        for(int i=0;i<=s.length()/2;i++){
            if(s.charAt(i)!=s.charAt(s.length()-i-1)) return false; 
        }
        return  true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while (t-->0) {
            String s=sc.next();
            String s1="";
            for(int i=0;i<s.length();i++){
                char a=s.charAt(i);
                if(a=='A'||a=='B'||a=='C'||a=='a'||a=='b'||a=='c'){
                    s1+='2';
                }else if(a=='D'||a=='E'||a=='F'||a=='d'||a=='e'||a=='f'){
                    s1+='3';
                }else if(a=='G'||a=='H'||a=='I'||a=='g'||a=='h'||a=='i'){
                    s1+='4';
                }else if(a=='J'||a=='K'||a=='L'||a=='j'||a=='k'||a=='l'){
                    s1+=5;
                }else if(a=='M'||a=='N'||a=='O'||a=='m'||a=='n'||a=='o'){
                    s1+='6';
                }else if(a=='P'||a=='Q'||a=='R'||a=='S'||a=='p'||a=='q'||a=='r'||a=='s'){
                    s1+='7';
                }else if(a=='T'||a=='U'||a=='V'||a=='t'||a=='u'||a=='v'){
                    s1+='8';
                }else if(a=='W'||a=='X'||a=='Y'||a=='Z'||a=='w'||a=='x'||a=='y'||a=='z'){
                    s1+='9';
                }
            }
            if(check(s1)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
