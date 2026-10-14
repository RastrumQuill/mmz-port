// sub_0801A900 at 0x0801A900 (thumb)

undefined8 sub_0801A900(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = param_1[1];
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  uVar3 = *(ushort *)(param_2 + 4);
  param_5 = param_4 + param_5;
  iVar8 = param_3 * 2 + -1;
  uVar7 = *param_1 + iVar8 * param_4;
  do {
    uVar5 = sub_08009AFC(uVar7,iVar4 + (uint)uVar3 + (int)(((uint)uVar1 - (uint)uVar2) + 0x100) / 2)
    ;
    uVar5 = uVar5 & 0xff;
    if (uVar5 - 0x8e < 2) {
      if (param_6 != 0) {
        *param_1 = (uVar7 & 0xfffff000) + 0x800;
      }
      goto LAB_0801a98a;
    }
    iVar6 = param_5;
    if (0xfff < param_5) {
      iVar6 = 0x1000;
    }
    uVar7 = uVar7 + -iVar8 * iVar6;
    param_5 = param_5 + -0x1000;
  } while (-0x1000 < param_5);
  uVar5 = 0;
LAB_0801a98a:
  return CONCAT44(in_lr,uVar5);
}

