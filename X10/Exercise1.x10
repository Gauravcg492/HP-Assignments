/*
*  Program to perform pi calcucation
*/
import x10.util.Random;

public class Exercise1 {
    public static def main(args: Rail[String]) {

    	val r = new Random();
    	var incir1:Double = 0.0;
    	var incir2:Double = 0.0;

    	finish {
            async{
                for (var i:Long=1 ; i<=10000; i++){
                    val x=r.nextDouble();
                    val y=r.nextDouble();
                    if(x*x + y*y <=1.0) incir1++;
                }
    	    }
    	    async{
                for (var i:Long=1 ; i<=10000; i++){
                    val x=r.nextDouble();
                    val y=r.nextDouble();
                    if(x*x + y*y <=1.0) incir2++;
                }
    	    }

    	}
    	val pi:Double = 4 * ((incir1 + incir2) / 20000);

    	Console.OUT.println("Value of pi : "+ pi);
    }
}