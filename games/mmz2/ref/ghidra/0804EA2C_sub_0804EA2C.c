// sub_0804EA2C at 0x0804EA2C (thumb)

undefined4 sub_0804EA2C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xcc);
  if (bVar1 == 3) {
    sub_08002EF0((&DAT_0833c08a)[*(byte *)(param_1 + 0xcd)]);
  }
  else if (bVar1 < 4) {
    if (bVar1 == 1) {
      sub_08002EF0(7);
    }
  }
  else if (bVar1 == 5) {
    sub_08002EF0((&DAT_0833c08e)[*(byte *)(param_1 + 0xcd)]);
  }
  return in_lr;
}

