class test {
	public static void main(String Args[]) {
		int a = 4;
		int b = 0;
		
		try {
			if (b == 0) {
				throw new ArithmeticException("Division by zero isn't possible");
			} else {
				int result = a/b;
				System.out.println("Result of division: " + result);
			}		
		} catch (Exception e) {
			System.out.println("Error : " + e);
		}
	}
}