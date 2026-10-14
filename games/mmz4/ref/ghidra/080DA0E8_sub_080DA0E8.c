// sub_080DA0E8 at 0x080DA0E8 (thumb)

undefined4 sub_080DA0E8(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = sub_080EB9D8();
  if (sVar1 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

