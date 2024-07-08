import java.util.regex.*;
import java.util.*;
import java.util.StringTokenizer; 
import java.io.*;  
class reg{  
public static void main(String args[]){  
// System.out.println(Pattern.matches("[0-9]{3}", "33"));//true  
// System.out.println(Pattern.matches("[a-zA-Z0-9]{6}", "kkvarun32"));//false (more than 6 char)  
// System.out.println(Pattern.matches("[a-zA-Z0-9]{6}", "JA2Uk2"));//true  
// System.out.println(Pattern.matches("[a-zA-Z0-9]{6}", "arun$2"));//false ($ is not matched)  
String payacc = "";
String k = "336-345-789";
boolean matchCheck = true;
                      StringTokenizer st2 = new StringTokenizer(k, "-");
                      while(st2.hasMoreTokens())
                      {
                          System.out.println(st2.nextToken());
                          Pattern p = Pattern.compile("[0-9]{3}"); 
                        Matcher m = p.matcher(st2.nextToken());  
                        matchCheck = m.matches();
                        //   matchCheck = Pattern.matches("[0-9]{3}",st2.nextToken());
                          if(!matchCheck){
                              
                              payacc = "Enter correct Debit/Credit Card";
                              break;
                            }
                              
                      }
                      if(matchCheck){
                          payacc = "Order Accepted";}

                          System.out.println(payacc);
} 

}
String payacc = "";
String k = "36-345-789";
boolean matchCheck = true;
                      StringTokenizer st2 = new StringTokenizer(k, "-");
                      while(st2.hasMoreTokens())
                      {
                          String s = st2.nextToken();
                          System.out.println(s);
                        Pattern p = Pattern.compile("[0-9]{3}"); 
                        Matcher m = p.matcher(s);  
                        matchCheck = m.matches();
                        matchCheck = Pattern.matches("[0-9]{3}",s);
                          if(!matchCheck){
                              
                              payacc = "Enter correct Debit/Credit Card";
                              break;
                            }
                              
                      }
                      if(matchCheck){
                          payacc = "Order Accepted";}

                          System.out.println(payacc);
} 