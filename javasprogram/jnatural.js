var readln = (typeof readline === 'function') ? (readline) : (function() {
     importPackage(java.io);
     importPackage(java.lang);
     var stdin = new BufferedReader(new InputStreamReader(System['in']));

     return function() {
         return String(stdin.readLine());  // Read line, 
     };                                    // force to JavaScript String
 }());
var Counter, Count, Naturalnumbers = "";
print("How many natural numbers do you want to print?");
Count = parseInt(readln());

for( Counter = 1; Counter <= Count; Counter ++) {
  Naturalnumbers +=  " " + Counter;
}
print("The first " + Count + " natural numbers are " + Naturalnumbers + ".");
