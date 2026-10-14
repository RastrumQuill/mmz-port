// sub_080C646C at 0x080C646C (thumb)

undefined4 sub_080C646C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x6200);
  *(undefined *)(param_1 + 0x12) = 8;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  sub_080D4898(param_1 + 0x54,&UNK_088628ec + (uVar1 * 2 >> 0x11 & 3) * 0x1c,0,
               (uVar2 * 2 >> 0x11 & 1) << 4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C6134(param_1);
  return in_lr;
}

