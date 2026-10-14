// sub_080DC76C at 0x080DC76C (thumb)

undefined4 sub_080DC76C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    sub_080DC87C();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_080DC7F0();
    }
  }
  else if (bVar1 == 2) {
    sub_080DC9A4();
  }
  return in_lr;
}

