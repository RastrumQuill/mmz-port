// sub_080ECF5C at 0x080ECF5C (thumb)

undefined4 sub_080ECF5C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xd);
  if ((uVar1 & 7) == 0) {
    sub_0801CF00(param_1,0xc);
  }
  *(byte *)(param_1 + 0x12) = ((byte)uVar1 & 7) + 0x18;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((uVar1 & 0xf) + (int)(char)(&DAT_08866448)[*(byte *)(param_1 + 0x10)] + -8) * 0x100;
  *(uint *)(param_1 + 0x60) = ((uVar1 & 3) + 6) * 0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080ED000(param_1);
  return in_lr;
}

