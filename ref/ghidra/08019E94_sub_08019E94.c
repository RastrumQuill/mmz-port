// sub_08019E94 at 0x08019E94 (thumb)

undefined8
sub_08019E94(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,int param_4,int param_5,
            int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  uVar6 = (uint)(ushort)param_3[3];
  iVar2 = param_1[1] - (uVar6 + param_5);
  uVar7 = 0;
  iVar3 = sub_08009CD4(uVar1,iVar2);
  if (0 < iVar3) {
    if (param_6 != 0) {
      param_1[1] = iVar3 + iVar2 + uVar6;
      param_6 = 0;
    }
    uVar7 = sub_08009B9C(uVar1,(param_1[1] + -1) - uVar6);
    uVar7 = uVar7 & 0xff;
    if (uVar7 != 0xf) goto LAB_08019fca;
  }
  iVar3 = param_4 * 2 + -1;
  uVar4 = sub_08019FDC(param_1,iVar2,iVar3,uVar6,*param_3,param_6);
  uVar5 = (uVar4 << 0x10) >> 0x18;
  if (((uVar7 & 0xf) == 0) || (uVar8 = uVar7, uVar5 != 0xf)) {
    uVar8 = uVar5;
  }
  if ((uVar7 & 0xf) == 0) {
    uVar7 = uVar4 & 0xff;
  }
  if ((((uVar8 & 0xf) == 0) || (uVar8 == 0xf)) || (uVar5 = uVar7 & 0xf, uVar5 == 0)) {
    if ((uVar4 & 0xf) != 0) {
      param_6 = 0;
    }
    uVar6 = sub_08019FDC(param_1,iVar2,-iVar3,uVar6,param_3[1],param_6);
    uVar4 = (uVar6 << 0x10) >> 0x18;
    if (((uVar8 & 0xf) == 0) || (uVar4 != 0xf)) {
      uVar8 = uVar4;
    }
    if ((uVar7 & 0xf) == 0) {
      uVar7 = uVar6 & 0xff;
    }
    if ((((uVar8 & 0xf) == 0) || (uVar8 == 0xf)) || (uVar5 = uVar7 & 0xf, uVar5 == 0))
    goto LAB_08019fca;
  }
  if (uVar5 == 0xf) {
    uVar7 = uVar7 & 0xfffffff0 | 1;
  }
LAB_08019fca:
  return CONCAT44(in_lr,uVar7);
}

