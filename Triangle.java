import java.util.*;


public class Triangle{

	private int base = 0 ;
	private int height = 0;
	
	public Triangle(){
	     base = 0;
	     height = 0;
	
	}
	public Triangle(int base1, int height1){
	
	this.base = base1;
	this.height = height1;
	 
	}
	
	
	public Double getArea(){
	 
	       return (0.5 * this.base * this.height) ;
	     
	}
	public String show(){
	   return ("base ="+this.base+"height ="+this.height);
	   
	
	}
	
	
	public static void main(String[] args){
	
	   Scanner obj = new Scanner(System.in);
	   int ans = 1;
	   while(ans == 1)
	   {
	   System.out.println("Enter base of triangle 1");
	   int b1 = obj.nextInt();
	   System.out.println("Enter height of triangle 1");
	   int h1 = obj.nextInt();
	   System.out.println("Enter base of triangle 2");
	   int b2 = obj.nextInt();
	   System.out.println("Enter height of triangle 2");
	   int h2 = obj.nextInt();
	   Triangle Tri = new Triangle(b1,h1);
	   Triangle yTri = new Triangle(b2,h2);
	    if(h1 <= 0 || b1 <= 0){
	     System.out.println("height or base can't be zero or negative");
	     break;
	    }
	    else
	    {
	   	System.out.println(Tri.show());
	    }
	   
	   System.out.println("Tri"+" "+Tri.getArea());
	   if(h2 <= 0 || b2 <= 0)
	   {
	     System.out.println("height or base can't be zero or negative");
	     break;
	   }
	   else{
	   System.out.println(yTri.show());
	   }
	   System.out.println("yTri"+" "+yTri.getArea());
	   System.out.println(Double.compare(Tri.getArea(),yTri.getArea()));
	   compare(Tri,yTri);
	   System.out.println("Do you want to compare 1 for yes 0, for no");
	   ans = obj.nextInt();
	  }
	}
	
	public static void compare(Triangle t1,Triangle t2)
	{
	  if(Double.compare(t1.getArea(),t2.getArea()) == 1)
	  {
	   System.out.println("t1 has greater area,area ="+t1.getArea());
	  }
	  else if(Double.compare(t1.getArea(),t2.getArea()) == -1)
	  {
	    System.out.println("t2 has greater area,area ="+t2.getArea());
	  }
	  else
	  {
	    System.out.println("equal areas");
	  }
	}
}



