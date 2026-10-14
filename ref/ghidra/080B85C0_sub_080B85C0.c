// sub_080B85C0 at 0x080B85C0 (thumb)

undefined4 sub_080B85C0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 & 0xfb;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfa;
  }
  else {
    sub_080B5034(param_1);
    *(undefined *)(param_1 + 0xd1) = 0x20;
    sub_080B861C(param_1);
  }
  return in_lr;
}

