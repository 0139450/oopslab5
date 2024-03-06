class Public
{
    public
        int publicvariable=1;
    private
        int privatevariable=2;
    protected
        int protectedvariable=3;
    public
        int privateaccess()
        {
            return privatevariable;
        }
}
public class public1
{
    public static void main(String[] args)
    {
        Public obj = new Public();

        System.out.print("Public : " + obj.publicvariable + "\n");
        System.out.print("Private : " + obj.privateaccess() + "\n");
        System.out.print("Protected : " + obj.protectedvariable + "\n");
        
    }        
}
