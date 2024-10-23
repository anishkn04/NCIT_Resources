public class Address {
    int ward;
    String address, province;
    public Address(String province, String address, int ward){
        this.province = province;
        this.address = address;
        this.ward = ward;
    }
    @Override
    public String toString(){
        return " Province: "+province+" Address: "+ address+ " Ward: "+ ward;
    }
}
