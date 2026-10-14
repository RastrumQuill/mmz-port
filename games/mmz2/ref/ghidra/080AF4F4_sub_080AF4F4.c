// sub_080AF4F4 at 0x080AF4F4 (thumb)

undefined4 sub_080AF4F4(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_080127E4(param_1,3);
    sub_080128D4(param_1);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 7) - 4) * 0x100;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
    sub_080AF3EC(param_1);
  }
  return in_lr;
}

