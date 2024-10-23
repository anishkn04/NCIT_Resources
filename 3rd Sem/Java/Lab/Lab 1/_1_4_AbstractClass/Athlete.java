abstract class Athlete {
    String name, club;
    public Athlete(String name, String club){
        this.name = name;
        this.club = club;
    }
    abstract void displayStat();
}
