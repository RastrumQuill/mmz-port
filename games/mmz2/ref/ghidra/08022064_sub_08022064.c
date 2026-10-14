// sub_08022064 at 0x08022064 (thumb)

undefined4
sub_08022064(int *param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7,int *param_8)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = -1;
  if (param_3 != 0) {
    iVar2 = 1;
  }
  iVar4 = *param_1;
  uVar1 = *param_2;
  iVar3 = (int)((uint)uVar1 + param_6 + (uint)param_2[1] + param_6) / 2;
  *param_8 = iVar3;
  *param_7 = (iVar4 + iVar2 * ((uint)uVar1 + param_6)) - iVar2 * iVar3;
  iVar3 = param_1[1];
  uVar1 = param_2[2];
  iVar2 = (int)((uint)uVar1 + param_4 + (uint)param_2[3] + param_5) / 2;
  param_8[1] = iVar2;
  param_7[1] = (iVar3 + (uint)uVar1 + param_4) - iVar2;
  return in_lr;
}

