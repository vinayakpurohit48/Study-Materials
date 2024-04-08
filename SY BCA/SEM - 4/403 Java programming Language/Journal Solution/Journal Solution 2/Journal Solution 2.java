class Player {
    private String name;
    private int age;
    
    public Player(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class CricketPlayer extends Player {
    private String teamName;
    
    public CricketPlayer(String name, int age, String teamName) {
        super(name, age);
        this.teamName = teamName;
    }
    
    public void display() {
        super.display();
        System.out.println("Team: " + teamName);
    }
}

class FootballPlayer extends Player {
    private String teamName;
    
    public FootballPlayer(String name, int age, String teamName) {
        super(name, age);
        this.teamName = teamName;
    }
    
    public void display() {
        super.display();
        System.out.println("Team: " + teamName);
    }
}

class HockeyPlayer extends Player {
    private String teamName;
    
    public HockeyPlayer(String name, int age, String teamName) {
        super(name, age);
        this.teamName = teamName;
    }
    
    public void display() {
        super.display();
        System.out.println("Team: " + teamName);
    }
}

class main {
    public static void main(String[] args) {
        CricketPlayer cricketPlayer = new CricketPlayer("Virat", 45, "Cricket");
        FootballPlayer footballPlayer = new FootballPlayer("Messi", 34, "Football");
        HockeyPlayer hockeyPlayer = new HockeyPlayer("Dhyan Chand", 80, "Hockey");

        System.out.println("Cricket Player:");
        cricketPlayer.display();
        System.out.println("\nFootball Player:");
        footballPlayer.display();
        System.out.println("\nHockey Player:");
        hockeyPlayer.display();
    }
}