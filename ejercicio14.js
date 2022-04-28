let n = 10;
let res = 1;
if (n == 0){
  console.log(res);
} else {
  while (n > 0){
    res = res * n;
    n--;
  }
  console.log(res);
}
