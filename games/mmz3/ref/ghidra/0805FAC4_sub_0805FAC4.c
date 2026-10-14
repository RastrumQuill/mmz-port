// sub_0805FAC4 at 0x0805FAC4 (thumb)

undefined4 sub_0805FAC4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0806093C();
  if (cVar1 != '\0') {
    sub_0800471C(0xfd);
    *(undefined *)(param_1 + 0xf) = 4;
    sub_08060768(param_1,0xe);
  }
  return in_lr;
}

