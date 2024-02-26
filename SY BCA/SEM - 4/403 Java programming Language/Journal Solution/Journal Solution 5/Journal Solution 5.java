interface calculateArea{
	double calArea();
}

class Rectangle implements calculateArea {
	double lenght, width;
	Rectangle(double lenght, double width) {
		this.lenght = lenght;
		this.width = width;
	}
	
	public double calArea() {
		return lenght*width;
	}
	
}

class Triangle implements calculateArea {
	double base, height;
	Triangle(double base, double height) {
		this.base = base;
		this.height = height;
	}
	
	public double calArea() {
		return 0.5*base*height;
	}
	
}

class Square implements calculateArea {
	double side;
	Square(double side) {
		this.side = side;
	}
	
	public double calArea() {
		return side*side;
	}
	
}

class test {
	public static void main(String args[]) {
		Rectangle rectArea = new Rectangle(5.1,7.2);
		Triangle triArea = new Triangle(5.0,6.2);
		Square sqrArea = new Square(4.0);
		
		System.out.println("Area of Rectangle: "+rectArea.calArea());
		System.out.println("Area of Triangle: "+triArea.calArea());
		System.out.println("Area of Square: "+sqrArea.calArea());
	
	}
}