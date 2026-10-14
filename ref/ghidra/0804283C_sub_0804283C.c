// sub_0804283C at 0x0804283C (thumb)

undefined4 sub_0804283C(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = ((uint)(param_2 << 0x18) >> 0x15) + ((uint)(param_3 << 0x18) >> 0x13);
  iVar4 = *(int *)(&DAT_082ae6a4 + iVar3) -
          (*(byte *)(param_1 + 10) >> 4 & 1) * *(int *)(&DAT_082ae6a4 + iVar3) * 2;
  iVar1 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * iVar4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * *(int *)(&DAT_082ae6a8 + iVar3);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar4 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * iVar4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar3 = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] *
          *(int *)(&DAT_082ae6a8 + iVar3);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *param_4 = *(int *)(param_1 + 0x4c) + ((iVar1 >> 8) - (iVar2 >> 8));
  param_4[1] = *(int *)(param_1 + 0x50) + (iVar4 >> 8) + (iVar3 >> 8);
  return in_lr;
}

