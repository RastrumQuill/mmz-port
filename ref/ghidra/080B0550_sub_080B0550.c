// sub_080B0550 at 0x080B0550 (thumb)

undefined4 sub_080B0550(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    sub_080B08C0();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_080B06C8();
    }
  }
  else if (bVar1 == 2) {
    sub_080B09E4();
  }
  else if (bVar1 == 3) {
    sub_080B0B3C();
  }
  return in_lr;
}

