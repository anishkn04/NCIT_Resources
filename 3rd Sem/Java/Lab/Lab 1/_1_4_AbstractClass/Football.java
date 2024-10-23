public class Football extends Athlete{
    int goals, assists;
    public Football(String name, String club, int goals, int assists){
        super(name, club);
        this.goals = goals;
        this.assists = assists;
    }

    @Override
    void displayStat() {
        System.out.println("Name: "+ name+" Club: "+ club+" Goals: "+goals+" Assists: "+ assists);
    }
}
