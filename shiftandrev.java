class Sample{
public static void  main (String[]args){

String str="abdef";


String output3 = shiftAndReverse(str);

String output2=shift1(output3);
System.out.print(output2);


}
  public static String shiftAndReverse(String str) {
        String result = "";

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            char shifted = (char) ((ch - 'a' + 1) % 26 + 'a');  
            result = result + shifted;
        }

        return result;
    }

public static String shift1(String str){
 String rev="";
 for(int i=str.length()-1;i>=0;i--){
  char ch=str.charAt(i);
  
 rev=rev+ch;
 
 }
 return rev;

}

}

