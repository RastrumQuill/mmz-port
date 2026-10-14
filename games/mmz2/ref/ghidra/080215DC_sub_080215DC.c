// sub_080215DC at 0x080215DC (thumb)

undefined8 sub_080215DC(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = param_1[1];
  uVar1 = *(ushort *)(param_2 + 4);
  param_5 = param_4 + param_5;
  iVar5 = -1;
  if (param_3 != 0) {
    iVar5 = 1;
  }
  uVar6 = *param_1 + iVar5 * param_4;
  do {
    sVar2 = sub_08008354(uVar6,iVar7 + 1 + (uint)uVar1);
    if (sVar2 == -0x7ff2) {
      if (param_6 != 0) {
        *param_1 = (uVar6 & 0xfffff000) + 0x800;
      }
      uVar3 = 0x800e;
      goto LAB_08021660;
    }
    iVar4 = param_5;
    if (0xfff < param_5) {
      iVar4 = 0x1000;
    }
    uVar6 = uVar6 + -iVar5 * iVar4;
    param_5 = param_5 + -0x1000;
  } while (-0x1000 < param_5);
  uVar3 = 0;
LAB_08021660:
  return CONCAT44(in_lr,uVar3);
}

