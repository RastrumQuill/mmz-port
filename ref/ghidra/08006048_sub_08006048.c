// sub_08006048 at 0x08006048 (thumb)

undefined4 sub_08006048(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (param_1 != (int *)0x0) {
    do {
      iVar3 = param_1[9];
      iVar5 = param_1[10];
      uVar1 = *(ushort *)(param_1 + 0xb);
      uVar2 = *(ushort *)((int)param_1 + 0x2e);
      iVar7 = param_2;
      if (param_2 != 0) {
        do {
          uVar4 = (uint)*(ushort *)(iVar7 + 0x38) + (uint)uVar1;
          uVar6 = (uint)*(ushort *)(iVar7 + 0x3a) + (uint)uVar2;
          if (((iVar3 - *(int *)(iVar7 + 0x30)) + (uVar4 >> 1) < uVar4) &&
             ((iVar5 - *(int *)(iVar7 + 0x34)) + (uVar6 >> 1) < uVar6)) {
            sub_08005F68(param_1,iVar7);
          }
          iVar7 = *(int *)(iVar7 + 4);
        } while (iVar7 != 0);
      }
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
  }
  return in_lr;
}

