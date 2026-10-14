// sub_0801A28C at 0x0801A28C (thumb)

undefined8 sub_0801A28C(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = sub_080C8A9C(param_1,param_2,*(undefined4 *)(&DAT_082a9734 + param_3 * 4));
  if ((iVar1 != 0) && (iVar1 + 0xfffU < 0x1fff)) {
    uVar2 = sub_08009AFC(param_1 + iVar1,param_2);
    if (((uVar2 & 0x8f) == 0) || (0x7f < (uVar2 & 0x8f))) {
      iVar5 = param_1 + iVar1 + -1 + param_3 * 2;
      iVar3 = sub_08009C3C(iVar5,param_2);
      if ((iVar3 < -0x3ff) || (-1 < iVar3)) {
        iVar3 = param_2 + -0x400;
      }
      else {
        iVar3 = param_2 + iVar3 + 1;
      }
      uVar2 = sub_08009CD4(iVar5,param_2);
      if (uVar2 < 0x400) {
        iVar7 = param_2 + uVar2 + -1;
      }
      else {
        iVar7 = param_2 + 0x400;
      }
      if (0x3ff < iVar7 - iVar3) {
        if (param_2 - iVar3 < 0x400) {
          iVar7 = iVar3 + 0x400;
LAB_0801a366:
          puVar6 = (undefined4 *)(&DAT_082a9734 + param_3 * 4);
          iVar4 = sub_080C8A9C(iVar5,iVar3,*puVar6);
        }
        else {
          if (iVar7 - param_2 < 0x400) {
            iVar3 = iVar7 + -0x400;
            goto LAB_0801a366;
          }
          puVar6 = (undefined4 *)(&DAT_082a9734 + param_3 * 4);
          iVar4 = sub_080C8A9C(iVar5,param_2,*puVar6);
          iVar3 = sub_080C8A9C(iVar5,iVar3,*puVar6);
          if (iVar4 == iVar3) goto LAB_0801a3ba;
        }
        iVar3 = sub_080C8A9C(iVar5,iVar7,*puVar6);
        if (iVar4 == iVar3) goto LAB_0801a3ba;
      }
    }
  }
  iVar1 = 0;
LAB_0801a3ba:
  return CONCAT44(in_lr,iVar1);
}

