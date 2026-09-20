public class PassArgument {
    public static void main(String args[]) {
        System.out.println("So tham so: "+args.length);
        for(int i=0;i<args.length;i++){
            System.out.println("args["+ i + "] = "+args[i]);
        }
        int n=Integer.parseInt(args[0]);
        System.out.println("n*2= "+n*2);
    }
}
