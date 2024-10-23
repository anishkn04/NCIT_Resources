interface Athlete {
    void displayStat();
}

class Football implements Athlete {
    String name, club;
    int goals, assists;

    public Football(String name, String club, int goals, int assists) {
        this.name = name;
        this.club = club;
        this.goals = goals;
        this.assists = assists;
    }

    @Override
    public void displayStat() {
        System.out.println("Name: " + name + " Club: " + club + " Goals: " + goals + " Assists: " + assists);
    }
}

public class InterfaceTest {
    public static void main(String[] args) {
        Football f = new Football("Bishal", "Nepal", 3, 8);
        f.displayStat();
    }
}