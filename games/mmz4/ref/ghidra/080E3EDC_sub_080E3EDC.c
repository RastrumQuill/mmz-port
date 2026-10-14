// sub_080E3EDC at 0x080E3EDC (thumb)

undefined4 sub_080E3EDC(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xa100);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x12) = 0x23;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = (uVar1 * 2 >> 0x11 & 7) + 0x40;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       iVar2 * *(short *)((int)&DAT_08128c10 +
                         ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17));
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)] * iVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080E3D88(param_1);
  return in_lr;
}

