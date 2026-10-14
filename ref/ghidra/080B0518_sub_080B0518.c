// sub_080B0518 at 0x080B0518 (thumb)

undefined4 sub_080B0518(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    sub_080B0818();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_080B05D4();
    }
  }
  else if (bVar1 == 2) {
    sub_080B0974();
  }
  else if (bVar1 == 3) {
    sub_080B0A9C();
  }
  return in_lr;
}

