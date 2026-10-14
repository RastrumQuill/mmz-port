// sub_08019D0C at 0x08019D0C (thumb)

undefined8 sub_08019D0C(uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *param_1 & 0xfffff000;
  if (uVar2 != (param_3 * param_5 + *param_1 & 0xfffff000)) {
    if (param_3 < 0) {
      uVar2 = uVar2 + 0xf00;
    }
    do {
      uVar2 = uVar2 + param_3 * 0x1000;
      iVar1 = sub_08009CD4(uVar2,param_2);
      if (0 < iVar1) {
        if (param_6 != 0) {
          param_1[1] = iVar1 + param_2 + param_4;
        }
        uVar2 = sub_08009B9C(uVar2,param_2);
        uVar2 = uVar2 & 0xff;
        goto LAB_08019d76;
      }
      param_5 = param_5 + -0x1000;
    } while (0 < param_5);
  }
  uVar2 = 0;
LAB_08019d76:
  return CONCAT44(in_lr,uVar2);
}

