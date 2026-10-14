// sub_0804D0F8 at 0x0804D0F8 (thumb)

undefined4 sub_0804D0F8(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) != 0) && (iVar3 = sub_08025794(), iVar3 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
  }
  psVar4 = (short *)(param_1 + 0xb8);
  if ((int)*psVar4 + 0x100U < 0x201) {
    sVar2 = 0;
  }
  else {
    *psVar4 = -*psVar4;
    iVar3 = *psVar4 * 0xf0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    sVar2 = (short)((uint)iVar3 >> 8);
  }
  *psVar4 = sVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) + (int)*psVar4;
  psVar4 = (short *)(param_1 + 0xba);
  if (*psVar4 != 0) {
    *psVar4 = *psVar4 + -1;
  }
  cVar1 = sub_0804CF30(param_1);
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835f9fc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835fa0c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080041E4(0x45);
  }
  return in_lr;
}

