// sub_08020564 at 0x08020564 (thumb)

undefined8 sub_08020564(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar1 = sub_0801F418();
  if (param_3 == 0) {
    if (0 < iVar1) {
LAB_08020592:
      if ((param_4 < 1) || ((uint)(iVar1 + -1 + param_4) <= (uint)((param_4 + -1) * 2))) {
        uVar2 = sub_08008354(param_1 + iVar1,param_2);
        if (((uVar2 & 0x800f) == 0) || ((uVar2 & 0x8000) != 0)) {
          iVar5 = param_1 + iVar1 + -1 + param_3 * 2;
          iVar3 = sub_08008EA4(iVar5,param_2);
          if (iVar3 + 0x3ffU < 0x400) {
            iVar3 = param_2 + iVar3 + 1;
          }
          else {
            iVar3 = param_2 + -0x400;
          }
          uVar2 = sub_0800901C(iVar5,param_2);
          if (uVar2 < 0x400) {
            iVar6 = param_2 + uVar2 + -1;
          }
          else {
            iVar6 = param_2 + 0x400;
          }
          if (0x3ff < iVar6 - iVar3) {
            if (param_2 - iVar3 < 0x400) {
              iVar6 = iVar3 + 0x400;
LAB_08020642:
              iVar4 = sub_0801F418(iVar5,iVar3,param_3);
            }
            else {
              if (iVar6 - param_2 < 0x400) {
                iVar3 = iVar6 + -0x400;
                goto LAB_08020642;
              }
              iVar4 = sub_0801F418(iVar5,param_2,param_3);
              iVar3 = sub_0801F418(iVar5,iVar3,param_3);
              if (iVar4 == iVar3) goto LAB_08020682;
            }
            iVar3 = sub_0801F418(iVar5,iVar6,param_3);
            if (iVar4 == iVar3) goto LAB_08020682;
          }
        }
      }
    }
  }
  else if (iVar1 < 0) goto LAB_08020592;
  iVar1 = 0;
LAB_08020682:
  return CONCAT44(in_lr,iVar1);
}

