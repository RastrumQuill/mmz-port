// sub_0801A99C at 0x0801A99C (thumb)

undefined8 sub_0801A99C(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = param_1[1];
  uVar1 = *(ushort *)(param_2 + 4);
  param_5 = param_4 + param_5;
  iVar6 = param_3 * 2 + -1;
  uVar5 = *param_1 + iVar6 * param_4;
  do {
    cVar2 = sub_08009AFC(uVar5,(uint)uVar1 + iVar7 + 1);
    if (cVar2 == -0x72) {
      if (param_6 != 0) {
        *param_1 = (uVar5 & 0xfffff000) + 0x800;
      }
      uVar3 = 0x8e;
      goto LAB_0801aa12;
    }
    iVar4 = param_5;
    if (0xfff < param_5) {
      iVar4 = 0x1000;
    }
    uVar5 = uVar5 + -iVar6 * iVar4;
    param_5 = param_5 + -0x1000;
  } while (-0x1000 < param_5);
  uVar3 = 0;
LAB_0801aa12:
  return CONCAT44(in_lr,uVar3);
}

