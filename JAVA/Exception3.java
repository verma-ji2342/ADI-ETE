public class Exception3 {
    
    // public static void main(String []args){
    //     int amount = 6000;
    //     int withdrwal = 7000;
    //     if(withdrwal > amount){
    //         throw new ArithmeticException("Insufficient Balance : ");
    //     }
    //     amount -= withdrwal;
    //     System.out.println("Transection successfully ");
    //     System.out.println("Remaining Balace is "+amount);
    // }

    // Secomd method of doing same thing
    

    public static void main(String []args){
        int amount = 6000;
        int withdrwal = 5000;
        try{
            if(withdrwal > amount){
                throw new ArithmeticException("Insufficient Balance : ");
            }
            amount -= withdrwal;
            System.out.println("Transection successfully ");
        }catch(ArithmeticException e) {
            System.out.println("Exception : "+e.getMessage());
        }
        
        System.out.println("Remaining Balace is "+amount);
    }
}
