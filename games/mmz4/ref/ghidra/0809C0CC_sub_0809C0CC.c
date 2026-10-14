// sub_0809C0CC at 0x0809C0CC (thumb)

undefined8 sub_0809C0CC(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  short asStack_38 [8];
  char acStack_28 [8];
  int local_20;
  
  sub_08128B5C(asStack_38,&DAT_081295d4,0x10);
  sub_08128B5C(acStack_28,&DAT_081295e4,8);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  iVar5 = uVar4 * 2;
  iVar8 = *(int *)(param_1 + 0x54) + (int)asStack_38[uVar4 * 2] + acStack_28[iVar5] * -0x800;
  iVar9 = *(int *)(param_1 + 0x58) + (int)asStack_38[uVar4 * 2 + 1] + acStack_28[iVar5 + 1] * -0x800
  ;
  local_20 = 0;
  iVar7 = -1;
  while( true ) {
    iVar3 = iVar8;
    iVar6 = iVar9;
    if (local_20 != 0) {
      iVar3 = iVar8 + iVar7 * acStack_28[iVar5];
      iVar6 = iVar9 + iVar7 * acStack_28[iVar5 + 1];
    }
    sVar1 = sub_08007C7C(iVar3,iVar6);
    if (sVar1 != 0) break;
    iVar7 = iVar7 + 0x1000;
    local_20 = local_20 + 1;
    if (1 < local_20) {
      uVar2 = 0;
LAB_0809c186:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 1;
  goto LAB_0809c186;
}

