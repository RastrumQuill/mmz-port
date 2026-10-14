// sub_0801998C at 0x0801998C (thumb)

undefined8
sub_0801998C(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,int param_4,int param_5,
            int param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar6 = *param_1;
  uVar4 = (uint)(ushort)param_3[2];
  iVar9 = param_1[1] + param_5 + uVar4;
  uVar7 = 0;
  iVar2 = sub_08009C3C(uVar6,iVar9);
  if (iVar2 < 0) {
    uVar7 = sub_08009B9C(uVar6,iVar9);
    uVar7 = uVar7 & 0xff;
    iVar2 = sub_08019634(param_1,param_2,uVar6,iVar9,uVar4,param_5,param_6,iVar2,uVar7);
    if (iVar2 == 0) {
      cVar1 = sub_080198AC(param_1,uVar6,iVar9,uVar4,param_6,uVar7);
      if (cVar1 != '\0') {
        param_6 = 0;
        iVar2 = param_1[1];
        goto LAB_08019a3a;
      }
    }
    else {
      if (param_6 != 0) {
        param_1[1] = (iVar2 + iVar9) - uVar4;
        param_6 = 0;
      }
      iVar2 = param_1[1];
LAB_08019a3a:
      uVar7 = sub_08009B9C(uVar6,iVar2 + 1 + uVar4);
      uVar7 = uVar7 & 0xff;
    }
    if (uVar7 != 0xf) goto LAB_08019b30;
  }
  iVar2 = param_4 * 2 + -1;
  uVar3 = sub_08019B44(param_1,param_2,iVar9,iVar2,uVar4,*param_3,param_5,param_6);
  uVar5 = (uVar3 << 0x10) >> 0x18;
  if (((uVar7 & 0xf) == 0) || (uVar8 = uVar7, uVar5 != 0xf)) {
    uVar8 = uVar5;
  }
  if ((uVar7 & 0xf) == 0) {
    uVar7 = uVar3 & 0xff;
  }
  if ((((uVar8 & 0xf) == 0) || (uVar8 == 0xf)) || (uVar5 = uVar7 & 0xf, uVar5 == 0)) {
    if ((uVar3 & 0xf) != 0) {
      param_6 = 0;
    }
    uVar4 = sub_08019B44(param_1,param_2,iVar9,-iVar2,uVar4,param_3[1],param_5,param_6);
    uVar3 = (uVar4 << 0x10) >> 0x18;
    if (((uVar8 & 0xf) == 0) || (uVar3 != 0xf)) {
      uVar8 = uVar3;
    }
    if ((uVar7 & 0xf) == 0) {
      uVar7 = uVar4 & 0xff;
    }
    if ((((uVar8 & 0xf) == 0) || (uVar8 == 0xf)) || (uVar5 = uVar7 & 0xf, uVar5 == 0))
    goto LAB_08019b30;
  }
  if (uVar5 == 0xf) {
    uVar7 = uVar7 & 0xfffffff0 | 1;
  }
LAB_08019b30:
  return CONCAT44(in_lr,uVar7);
}

