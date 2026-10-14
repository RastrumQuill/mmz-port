// sub_080DC7C4 at 0x080DC7C4 (thumb)

undefined4 sub_080DC7C4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    sub_080DCEE8();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_080DCED0();
    }
  }
  else if (bVar1 == 2) {
    sub_080DCF00();
  }
  return in_lr;
}

