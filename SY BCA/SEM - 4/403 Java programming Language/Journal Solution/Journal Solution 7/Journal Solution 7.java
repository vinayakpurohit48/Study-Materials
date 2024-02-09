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
class test {
		
	public static void main(String Args[]) {
		StringOperation s1 = new StringOperation();
		String str = "SDJ International College";
		System.out.println("The Length is : " + s1.Findlength(str));
		System.out.println("The Length is : " + s1.CharReplace(str,'e','E'));
		System.out.println("The Length is : " + s1.toUpper(str));
		System.out.println("In Upper Case : " + s1.toUpper(str));
	}
}