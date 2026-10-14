import java.io.*;
public class vidu2{
    public static void main(String[] args) {
        
final char BLANK =32;
final String fileName="HStream.txt";
int[] a={1,2,3,4,5};
char n='5';
try (DataOutputStream ds=new DataOutputStream(
    new FileOutputStream(fileName))){
        ds.writeChar(n);
        ds.writeChar(BLANK);
        for(int value :a){
            ds.writeChar(BLANK);
        }
        ds.writeUTF(fileName);

    }catch (IOException e){
        e.printStackTrace();
    }
}}