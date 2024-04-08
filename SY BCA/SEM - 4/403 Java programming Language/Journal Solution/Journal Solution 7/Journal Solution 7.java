class StringOperation {
	int Findlength(String str) {
		return str.length();
	}
	
	String CharReplace(String str, char oldchar, char newchar) {
		return str.replace(oldchar,newchar);
	}
	String toUpper(String str) {
	    return str.toUpperCase();
	}
}
class main {
		
	public static void main(String Args[]) {
		StringOperation s1 = new StringOperation();
		String str = "SDJ International College";
	System.out.println("The Length of " + str +" is : " + s1.Findlength(str));
		System.out.println("After Replacing char : " + s1.CharReplace(str,'e','E'));
		System.out.println(str +" in Upper character : " + s1.toUpper(str));
	}
}