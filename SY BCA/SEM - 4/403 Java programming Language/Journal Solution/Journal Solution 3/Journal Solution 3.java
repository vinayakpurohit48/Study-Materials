class Student {
	int Roll_no;
	String SName;
	
	void StoreData(int Roll_no, String SName) {
		this.Roll_no = Roll_no;
		this.SName = SName;
	}
	
	void DisplayData() {
		System.out.println("\nDisplaying Record.... \n");
		System.out.println("Roll No : " + Roll_no);
		System.out.println("Student Name : " + SName);
	}
}

class main {
	
	public static void main(String args[]) {
		Student s1 = new Student();
		s1.StoreData(872,"Vinayak");
		s1.DisplayData();
	}
}