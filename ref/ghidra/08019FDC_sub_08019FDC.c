// sub_08019FDC at 0x08019FDC (thumb)

undefined8 sub_08019FDC(uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar3 = *param_1 & 0xfffff000;
  uVar5 = 0;
  uVar4 = 0;
  if (uVar3 != (param_3 * param_5 + *param_1 & 0xfffff000)) {
    if (param_3 < 0) {
      uVar3 = uVar3 + 0xf00;
    }
    do {
      uVar3 = uVar3 + param_3 * 0x1000;
      iVar1 = sub_08009CD4(uVar3,param_2);
      if (0 < iVar1) {
        sub_08009B9C(uVar3,param_2);
        if (param_6 != 0) {
          param_1[1] = iVar1 + param_2 + param_4;
          param_6 = 0;
        }
        uVar2 = sub_08009B9C(uVar3,(param_1[1] - 1) - param_4);
        uVar2 = uVar2 & 0xff;
        if (uVar5 == 0) {
          uVar5 = uVar2;
        }
        if (uVar2 != 0) {
          if (uVar2 == 0xf) {
            if (uVar4 != 0) goto LAB_0801a082;
          }
          else if (uVar5 != 0) {
            param_5 = 0;
          }
          uVar4 = uVar2;
        }
      }
LAB_0801a082:
      param_5 = param_5 + -0x1000;
    } while (0 < param_5);
  }
  return CONCAT44(in_lr,uVar4 << 8 | uVar5);
}

