// sub_081035C8 at 0x081035C8 (thumb)

undefined4 sub_081035C8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
  uVar1 = 0;
  do {
    sub_080E38B8(param_1 + 0x54,&DAT_08868a14 + uVar1 * 0x1c,0,0);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 7);
  sub_08019764();
  sub_0801FE64(4,param_1 + 0x54);
  sub_08002B10(0x182);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

