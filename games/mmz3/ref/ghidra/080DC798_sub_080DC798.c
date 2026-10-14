// sub_080DC798 at 0x080DC798 (thumb)

undefined4 sub_080DC798(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    sub_080DCBEC();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_080DCAFC();
    }
  }
  else if (bVar1 == 2) {
    sub_080DCE34();
  }
  return in_lr;
}

