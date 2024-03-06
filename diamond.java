class classone
{
public
void c1()
{
System.out.print("Class 1"+"\n");
}
}
class classtwo extends classone
{
public
void c2()
{
System.out.print("Class 2"+"\n");
}
}
class classthree extends classone
{
public
void c3()
{
System.out.print("Class 3"+"\n");
}
}
public class diamond
{
public static void main(String[] args)
{
System.out.print("Diamond Problem"+"\n");
classtwo class1 = new classtwo();
classthree class2 = new classthree();
class1.c1();
class1.c2();
class2.c1();
class2.c3();
}
}
