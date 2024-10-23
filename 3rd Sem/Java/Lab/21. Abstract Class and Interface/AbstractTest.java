abstract class Athlete {
    String name, club;

    public Athlete(String name, String club) {
        this.name = name;
        this.club = club;
    }

    abstract void displayStat();
}

class Football extends Athlete {
    int goals, assists;

    public Football(String name, String club, int goals, int assists) {
        super(name, club);
        this.goals = goals;
        this.assists = assists;
    }

    @Override
    void displayStat() {
        System.out.println("Name: " + name + " Club: " + club + " Goals: " + goals + " Assists: " + assists);
    }
}

public class AbstractTest {
    public static void main(String[] args) {
        Football f = new Football("Bishal", "Nepal", 3, 8);
        f.displayStat();
    }
}