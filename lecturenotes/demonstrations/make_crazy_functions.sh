out=verrueckter_funktionsbaum.c
max=500000

echo '#include <stdio.h>' > ${out}

echo 'int f1(int i){ return i; }' >> ${out}
for i in $(seq 2 ${max}); do
  echo "int f${i}(int i){" >> ${out}
  echo "  return f$(( $i - 1 ))(i)+i;" >> ${out}
  echo '}' >> ${out}
  echo >> ${out}
done

echo >> ${out}
echo 'int main(void){' >> ${out}
echo "  int x = f${max}(1);" >> ${out}
echo '  printf("%d\n",x);' >> ${out}
echo '  return 0;'     >> ${out}
echo '}' >> ${out}
