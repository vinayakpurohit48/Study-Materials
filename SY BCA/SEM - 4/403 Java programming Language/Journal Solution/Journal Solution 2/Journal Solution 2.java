class Player {
    String[] Player_Name = new String[10];
    int[] Age = new int[10];
    int count;

    void Store_Details(String name, int age) {
        Player_Name[count] = name;
        Age[count] = age;
        count++;
    }

    void ShowDetails() {
        for (int i = 0; i < count; i++) {
            System.out.println("Player Name = " + Player_Name[i]);
            System.out.println("Player Age = " + Age[i]);
        }
    }
}

class Cricket_Player extends Player {
    String Country;

    void Store_Details(String name, int age, String country_nm) {
        super.Store_Details(name, age);
        Country = country_nm;
    }

    void ShowDetails() {
        System.out.println("\nPrinting Cricket_Player Details\n");
        super.ShowDetails();
        System.out.println("Country = " + Country);
    }
}

class Football_Player extends Player {
    String Country;

    void Store_Details(String name, int age, String country_nm) {
        super.Store_Details(name, age);
        Country = country_nm;
    }

    void ShowDetails() {
        System.out.println("\nPrinting Football_Player Details\n");
        super.ShowDetails();
        System.out.println("Country = " + Country);
    }
}

class Hockey_Player extends Player {
    String Country;

    void Store_Details(String name, int age, String country_nm) {
        super.Store_Details(name, age);
        Country = country_nm;
    }

    void ShowDetails() {
        System.out.println("\nPrinting Hockey_Player Details\n");
        super.ShowDetails();
        System.out.println("Country = " + Country);
    }
}

class test {

    public static void main(String args[]) {
        Cricket_Player cp1 = new Cricket_Player();
        Football_Player cp2 = new Football_Player();
        Hockey_Player cp3 = new Hockey_Player();
        cp1.Store_Details("Vinayak", 18, "India");
        cp1.Store_Details("Vishal", 19, "India");
        cp1.Store_Details("Shailesh", 20, "India");

        cp2.Store_Details("Yogendra", 18, "India");
        cp2.Store_Details("tarun", 19, "India");
        cp2.Store_Details("Kishor", 20, "India");

        cp3.Store_Details("Rohit", 18, "India");
        cp3.Store_Details("Nohit", 19, "India");
        cp3.Store_Details("oit", 20, "India");

        cp1.ShowDetails();
        cp2.ShowDetails();
        cp3.ShowDetails();
    }
}
