// sub_080CD008 at 0x080CD008 (thumb)

undefined4 sub_080CD008(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar3;
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = *(int *)(param_1 + 100) * (iVar1 - *(int *)(param_1 + 0x68));
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7ff;
  }
  iVar1 = iVar1 >> 0xb;
  if (6 < iVar1) {
    iVar1 = 6;
  }
  sub_0801CF00(param_1,*(undefined2 *)
                        (&DAT_08863454 + ((uint)(iVar3 * 0x1000000) >> 0x19 & 1) * 4 + iVar1 * 8));
  *(undefined *)(param_1 + 0x25) = (&UNK_0886348c)[iVar1];
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0886340c + (uint)(byte)(&UNK_08863493)[iVar1] * 0x18);
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x3000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

