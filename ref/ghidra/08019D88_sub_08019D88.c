// sub_08019D88 at 0x08019D88 (thumb)

undefined8
sub_08019D88(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_28;
  
  if (param_5 != 0) {
    local_28 = *param_1;
    do {
      iVar5 = param_5;
      if (0xfff < param_5) {
        iVar5 = 0x1000;
      }
      local_28 = local_28 + iVar5 * param_3;
      iVar1 = sub_08009CD4(local_28,param_2);
      iVar4 = local_28;
      if ((iVar1 == 0) && (uVar2 = sub_08009AFC(local_28,param_2), (uVar2 & 0xf) != 0)) {
        do {
          iVar3 = iVar4 + param_3 * -0x100;
          iVar5 = iVar5 + -0x100;
          if (iVar5 < 1) break;
          iVar1 = sub_08009CD4(iVar3,param_2);
          iVar4 = iVar3;
        } while (iVar1 == 0);
      }
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          param_5 = 0;
        }
      }
      else {
        iVar5 = sub_0801B130(iVar4,param_2,-param_3,iVar5,param_6 + param_2);
        if (0 < iVar5) {
          iVar4 = iVar4 + -param_3 * iVar5;
          iVar5 = sub_08009CD4(iVar4,param_2);
          uVar2 = sub_08009B9C(iVar4,iVar5 + param_2 + -1);
          uVar2 = uVar2 & 0xff;
          if (param_7 != 0) {
            param_1[1] = iVar5 + param_2 + param_4;
          }
          goto LAB_08019e7e;
        }
        if (iVar5 < 0) {
          param_5 = 0;
        }
      }
      param_5 = param_5 + -0x1000;
    } while (0 < param_5);
  }
  uVar2 = 0;
LAB_08019e7e:
  return CONCAT44(in_lr,uVar2);
}

