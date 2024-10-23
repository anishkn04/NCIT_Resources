public class Test {
    public static void main(String[] args) {
        try{
            Student S1 = new Student(12, "Nishan");
        }catch (SemException e){
            System.out.println(e.getMessage());
        }
    }
}
