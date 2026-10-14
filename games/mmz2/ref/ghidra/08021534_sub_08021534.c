// sub_08021534 at 0x08021534 (thumb)

undefined8 sub_08021534(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar4 = param_1[1];
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  uVar3 = *(ushort *)(param_2 + 4);
  param_5 = param_4 + param_5;
  iVar6 = -1;
  if (param_3 != 0) {
    iVar6 = 1;
  }
  uVar8 = *param_1 + iVar6 * param_4;
  do {
    uVar5 = sub_08008354(uVar8,iVar4 + (int)(((uint)uVar1 - (uint)uVar2) + 0x100) / 2 + (uint)uVar3)
    ;
    uVar5 = uVar5 & 0xffff;
    if (uVar5 - 0x800e < 2) {
      if (param_6 != 0) {
        *param_1 = (uVar8 & 0xfffff000) + 0x800;
      }
      goto LAB_080215ca;
    }
    iVar7 = param_5;
    if (0xfff < param_5) {
      iVar7 = 0x1000;
    }
    uVar8 = uVar8 + -iVar6 * iVar7;
    param_5 = param_5 + -0x1000;
  } while (-0x1000 < param_5);
  uVar5 = 0;
LAB_080215ca:
  return CONCAT44(in_lr,uVar5);
}

