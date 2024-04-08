class Calc {
	double area(double radius) {
		return 3.14 * radius * radius;
	}
	
	double area(double lenth, double width) {
		return lenth * width;
	}
	
	double area(double side, boolean isSqure) {
		return side * side;
	}
}
class main {
	public static void main(String Args[]) {
		Calc c1 = new Calc();
		System.out.println("Area of Circle : " + c1.area(7.2));
		System.out.println("Area of Rectangle : " + c1.area(7.2 * 5.1));
		System.out.println("Area of Square : " + c1.area(5.0,true));
	}
}