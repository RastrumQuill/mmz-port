// sub_08082148 at 0x08082148 (thumb)

undefined4 sub_08082148(int param_1,int param_2,int param_3)

{
  undefined extraout_var;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  undefined *local_28;
  int local_24;
  
  param_2 = param_2 - *(int *)(param_1 + 0x54);
  param_3 = param_3 - *(int *)(param_1 + 0x58);
  iVar1 = sub_080FE124((param_2 >> 8) * (param_2 >> 8) + (param_3 >> 8) * (param_3 >> 8));
  uVar6 = (uint)(iVar1 << 0x10) >> 8;
  iVar1 = *(int *)(param_1 + 0x54);
  iVar7 = *(int *)(param_1 + 0x58);
  if (uVar6 != 0) {
    iVar2 = FUN_080fe2f8(param_2 * 0x100,uVar6);
    iVar1 = iVar2 * 4 + *(int *)(param_1 + 0x54);
    iVar3 = FUN_080fe2f8(param_3 * 0x100,uVar6);
    iVar7 = iVar3 * 4 + *(int *)(param_1 + 0x58);
    param_2 = param_2 + iVar2 * -8;
    param_3 = param_3 + iVar3 * -8;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  pbVar5 = (byte *)(param_1 + 0xb4);
  if (*pbVar5 == 1) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x54) = iVar1;
      *(int *)(iVar2 + 0x58) = iVar7;
    }
  }
  else if (iVar2 != 0) {
    local_24 = 0;
    iVar3 = 0;
    do {
      *(int *)(iVar2 + 0x54) = iVar1;
      iVar4 = FUN_080fe2f8(iVar3,*pbVar5 - 1);
      *(int *)(iVar2 + 0x54) = iVar4 + iVar1;
      *(int *)(iVar2 + 100) = iVar4 + iVar1;
      *(int *)(iVar2 + 0x58) = iVar7;
      iVar4 = FUN_080fe2f8(local_24,*pbVar5 - 1);
      *(int *)(iVar2 + 0x58) = iVar7 + iVar4;
      *(int *)(iVar2 + 0x68) = iVar7 + iVar4;
      local_24 = local_24 + param_3;
      iVar3 = iVar3 + param_2;
      iVar2 = *(int *)(iVar2 + 0x2c);
    } while (iVar2 != 0);
  }
  local_28 = (undefined *)(param_1 + 0x24);
  sub_080FE10C((int)(short)((uint)param_2 >> 8),(int)(short)((uint)param_3 >> 8));
  *local_28 = extraout_var;
  return in_lr;
}

