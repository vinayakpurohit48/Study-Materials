class main {
	public static void main(String Args[]) {
		int counterInt = 0;
		int counterString = 0;

		System.out.println("Passed Arguments Are: ");
	
		for(int i=0; i<Args.length; i++) {
		
			System.out.println(Args[i]+"\n");
			try {
				Integer.parseInt(Args[i]);
				counterInt++;
				
			} catch (Exception e) {
				counterString++;
			}
				
		}
		System.out.println("Total Integer Value : " + counterInt);
		System.out.println("Total String Value : " + counterString);
	
	}

}