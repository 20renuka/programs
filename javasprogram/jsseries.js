var readln = (typeof readline === 'function') ? (readline) : (function() {
     importPackage(java.io);
     importPackage(java.lang);
     var stdin = new BufferedReader(new InputStreamReader(System['in']));

     return function() {
         return String(stdin.readLine());  // Read line, 
     };                                    // force to JavaScript String
 }());
System.out.print("Enter a number to print series upto the given number:");
var Count = parseInt(readln());

var TermCounter = 2;
var Counter = 1 ;
var Product = 1;
var Terms=""
while (Product <= Count){
  Terms = Terms + " " + Product;
  Counter = 1 ;
  Product = 1 ;
  while( Counter <= TermCounter ) {
    var Product = Product * TermCounter;
    Counter = Counter +1;
  }
  
  TermCounter = TermCounter + 1;
}
System.out.print( "The series till " + Count + " is" +Terms + ".");

