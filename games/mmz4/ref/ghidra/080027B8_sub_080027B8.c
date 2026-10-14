// sub_080027B8 at 0x080027B8 (thumb)

undefined4 sub_080027B8(int param_1,int param_2,int param_3,char param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  undefined4 in_lr;
  
  param_1 = param_1 + (((param_5 << 0x18) >> 0x13) + (int)param_4) * 2;
  uVar3 = (uint)(param_3 << 0x18) >> 0x16;
  iVar2 = param_2 + *(int *)(uVar3 + param_2) + uVar3;
  uVar1 = *(ushort *)(iVar2 + 4);
  sVar4 = *(short *)(iVar2 + 6);
  iVar2 = iVar2 + 8;
  if (sVar4 != 0) {
    do {
      sub_081284E8(iVar2,param_1,(uint)uVar1);
      sVar4 = sVar4 + -1;
      iVar2 = iVar2 + (uint)uVar1 * 2;
      param_1 = param_1 + 0x40;
    } while (sVar4 != 0);
  }
  return in_lr;
}

