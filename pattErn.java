class HelloIndia {
	  public static void main(String[] args) {
	        printPattern();
	    }

	    public static void printPattern() {
	        int rows = 5; 

	        for (int i = 0; i < rows; i++) {
	         
	            for (int j = 0; j < i; j++) {
	                System.out.print(""); 
	            }

	            
	            int num = (i % 2 == 0) ? 1 : i + 1;
	            for (int k = 0; k <= i; k++) {
                if(i!=0&&k!=0){
               System.out.print(" " +"#" + " "+num  );
                  num = (i % 2 == 0) ? num + 1 : num - 1;
                
                }else {
	                System.out.print(" " +num  );
	                num = (i % 2 == 0) ? num + 1 : num - 1;
	            }
}
	            System.out.println();
	        }
	    }



		}
