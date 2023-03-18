Bài 1:

package LAB4;

public class Circle {

private double radius;

private String color;

public Circle(double radius, String color) {

this.radius = radius;

this.color = color;

}

public double getRadius() {

return radius;

}

public void setRadius(double radius) {

this.radius = radius;

}

public String getColor() {

return color;

}

public void setColor(String color) {

this.color = color;

}

public String toString(){

return this.color + this.radius;

}

}

Class Cylinder kế thừa từ Circle

package LAB4;

public class Cylinder extends Circle{

private double height;

private double Area;

public Cylinder(double height, double radius, String color) {
super(radius, color);

this.height = height;

}

public double getHeight() {

return height;

}

public void setHeight(double height) {

this.height = height;

}

public double getVolume(double Area, double height){

return this.Area * this.height;

}

public String toString(){

return this.getColor()+ this.getHeight();

}

}

Hàm main


package LAB4;

public class main {

public static void main(String[] args) {

Circle circle = new Circle(2,

" mau do ");

Cylinder cylinder = new Cylinder(2, 1,

" mau bac ");

System.out.println("Circle: " +circle.toString());

System.out.println("Cylinder: " +cylinder.toString());

System.out.println("the tich:" +cylinder.getVolume(2, 3));

}

}

Bài 2:

package LAB4;

public class HinhHoc {

public float PI;

private String ten;

private float chuVi;

private float dienTich;

private float theTich;

public HinhHoc(float PI, String ten, float chuVi, float dienTich, float theTich)
{

this.PI = 3.14f;

this.ten = ten;

this.chuVi = chuVi;

this.dienTich = dienTich;

this.theTich = theTich;

}

public void xuatTen(){
System.out.println("ten la: " +this.ten);

}

public void inChuVi(){
System.out.println("Chu vi la: " +this.chuVi);

}

public void inDienTich(){

System.out.println("Dien tich: " +this.dienTich);
}

public void inTheTich(){

System.out.println("The tich la: " +this.theTich);
}

}

Class HinhTron kế thừa từ HinhHoc

package LAB4;

public class HinhTron extends HinhHoc{

private float banKinh;

public HinhTron(float banKinh, float PI, String ten, float chuVi, float dienTich,
float theTich) {

super(PI, ten, chuVi, dienTich, theTich);

this.banKinh = banKinh;

}

public float getBanKinh() {

return banKinh;

}

public void setBanKinh(float banKinh) {

this.banKinh = banKinh;

}

public float getPI() {

return PI;

}

public void setPI(float PI) {

this.PI = PI;

}

public void nhapBanKinh(float bk){

System.out.println("nhap ban kinh: ");

this.banKinh = bk;

System.out.println("ban kinh la: " +banKinh);

}

public void tinhChuVi(){

float chuVi = this.banKinh * PI;

System.out.println("chu vi hinh tron la: " +chuVi);

}

public void tinhDienTich(){

float dienTich = this.banKinh * this.banKinh * PI;

System.out.println("dien tich hinh tron la: " +dienTich);

}

}

Class HinhTru kế thừa từ Class HinhTron

package LAB4;

public class HinhTru extends HinhTron{

private float chieuCao;

public HinhTru(float chieuCao, float banKinh, float PI, String ten, float chuVi,
float dienTich, float theTich) {

super(banKinh, PI, ten, chuVi, dienTich, theTich);

this.chieuCao = chieuCao;

}

public float getChieuCao() {

return chieuCao;

}

public void setChieuCao(float chieuCao) {

this.chieuCao = chieuCao;

}

@Override

public float getPI() {

return PI;

}

@Override

public void setPI(float PI) {

this.PI = PI;

}

public void nhapChieuCao(float chieucao){

this.chieuCao = chieucao;

System.out.println("chieu cao hinh tru la: " +chieuCao);

}

public void tinhTheTich(){
getPI();

getBanKinh();
float TheTich = PI * this.getBanKinh() * this.getBanKinh() * this.chieuCao;

System.out.println("the tich hinh tru la: " +TheTich);

}

}

Class HinhChuNhat kế thừa từ HinhHoc

package LAB4;

public class HinhChuNhat extends HinhHoc{

private float dai;

private float rong;

public HinhChuNhat(float dai, float rong, float PI, String ten, float chuVi,
float dienTich, float theTich) {

super(PI, ten, chuVi, dienTich, theTich);

this.dai = dai;

this.rong = rong;

}

public float getDai() {

return dai;

}

public void setDai(float dai) {

this.dai = dai;

}

public float getRong() {

return rong;

}

public void setRong(float rong) {

this.rong = rong;

}

public float getPI() {

return PI;

}

public void setPI(float PI) {

this.PI = PI;

}

public void nhapChieuDai(float d){

System.out.print("nhap chieu dai: ");

this.dai = d;

System.out.println(+dai);
}

public void nhapChieuRong(float r){
System.out.print("nhap chieu rong: ");

this.rong = r;

System.out.println(+rong);
}

public void tinhChuVi(){
float chuVi = (this.dai + this.rong) * 2;

System.out.println("chu vi la: " +chuVi);
}

public void tinhDienTich(){

float DienTich = this.dai * this.rong;

System.out.println("dien tich la: " +DienTich);
}

}

Class HinhTru kế thừa từ Class HinhTron

package LAB4;

public class HinhVuong extends HinhChuNhat{

private float canh;

public HinhVuong(float dai, float rong, float PI, String ten, float chuVi, float
dienTich, float theTich) {

super(dai, rong, PI, ten, chuVi, dienTich, theTich);

}

public float getCanh() {

return canh;

}

public void setCanh(float canh) {

this.canh = canh;

}

public float getPI() {

return PI;

}

public void setPI(float PI) {

this.PI = PI;

}

public void nhapCanh(float canh){

System.out.println("nhap canh: ");

this.canh = canh;

System.out.println(+canh);
}

@Override
public void tinhChuVi(){

float ChuVi = this.canh + this.canh;

System.out.println("chu vi hinh vuong la: " +ChuVi);
}

public void tinhDienTich(){

float DienTich = this.canh * this.canh;

System.out.println("dien tich hinh vuong la: " +DienTich);
}

}

Hàm main

package LAB4;

public class main_hinhhoc {

public static void main(String[] args) {
HinhHoc hh = new HinhHoc(3.14f,
""
, 0, 0, 0);
HinhChuNhat HCN = new HinhChuNhat(0, 0, 0,

"hinhvuong"

, 0, 0, 0);

HinhTron HTron = new HinhTron(0, 3.14f,

"hinhtron"

, 0, 0, 0);

HinhTru Htru = new HinhTru(0, 0, 3.14f,

"hinhtru"

, 0, 0, 0);

HinhVuong Hvuong = new HinhVuong(0, 0, 3.14f,

"hinhvuong"

, 0, 0, 0);

// tinh hinh chu nhat

HCN.nhapChieuDai(5);

HCN.nhapChieuRong(3);
HCN.tinhChuVi();
HCN.tinhDienTich();

System.out.println("---------------------------");

// tinh hinh tron

HTron.nhapBanKinh(3);

HTron.tinhChuVi();
HTron.tinhDienTich();

System.out.println("---------------------------");

// tinh hinh tru

Htru.getPI();
Htru.nhapChieuCao(5);

Htru.tinhTheTich();

System.out.println("----------------------------");

// tinh hinh vuong

Hvuong.nhapCanh(3);

Hvuong.tinhChuVi();
Hvuong.tinhDienTich();

}

}
