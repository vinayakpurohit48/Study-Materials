interface interface1 {
	void method1();
}

interface interface2 {
	void method2();
}

class MyClass implements interface1,interface2 {
	public void method1() {
		System.out.println("Method 1 Called !!");
	}
	
	public void method2() {
		System.out.println("Method 2 Called !!");
	}
}

class main {
	public static void main(String Args[]) {
		MyClass myClass = new MyClass();
		
		myClass.method1();
		myClass.method2();
	}
}