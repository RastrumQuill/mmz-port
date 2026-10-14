// sub_080D64FC at 0x080D64FC (thumb)

undefined4 sub_080D64FC(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x58);
  *param_2 = *(int *)(param_1 + 0x54);
  param_2[1] = iVar4;
  iVar4 = (int)*(short *)(param_3 + 4);
  iVar6 = (int)*(short *)(param_3 + 6);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar4 = -iVar4;
  }
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar6 = -iVar6;
  }
  bVar1 = *(byte *)(param_1 + 0x24);
  sVar2 = (&DAT_080ef450)[bVar1 + 0x40 & 0xff];
  iVar5 = *param_2 + (sVar2 * iVar4 >> 8);
  *param_2 = iVar5;
  sVar3 = (&DAT_080ef450)[bVar1];
  *param_2 = iVar5 - (sVar3 * iVar6 >> 8);
  param_2[1] = param_2[1] + (sVar3 * iVar4 >> 8) + (sVar2 * iVar6 >> 8);
  return in_lr;
}

