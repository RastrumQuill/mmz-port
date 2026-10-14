// sub_080192A0 at 0x080192A0 (thumb)

undefined8
sub_080192A0(uint *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *param_1 & 0xfffff000;
  if (uVar4 != (param_4 * param_6 + *param_1 & 0xfffff000)) {
    if (param_4 < 0) {
      uVar4 = uVar4 + 0xf00;
    }
    do {
      uVar4 = uVar4 + param_4 * 0x1000;
      iVar2 = sub_08009C3C(uVar4,param_3);
      if (iVar2 < 0) {
        uVar3 = sub_08009B9C(uVar4,param_3);
        uVar3 = uVar3 & 0xff;
        cVar1 = sub_0801ADE0(uVar4,param_3,-param_4);
        if (cVar1 == '\0') {
          iVar2 = sub_08019634(param_1,param_2,uVar4,param_3,param_5,param_7,param_8,iVar2,uVar3);
          if (iVar2 != 0) {
            if (param_8 != 0) {
              param_1[1] = (iVar2 + param_3) - param_5;
            }
            goto LAB_0801937a;
          }
          cVar1 = sub_080198AC(param_1,uVar4,param_3,param_5,param_8,uVar3);
          if (cVar1 != '\0') goto LAB_0801937a;
          uVar3 = 0;
        }
        if (uVar3 != 0) {
          param_6 = 0;
        }
      }
      param_6 = param_6 + -0x1000;
    } while (0 < param_6);
  }
  uVar3 = 0;
LAB_0801937a:
  return CONCAT44(in_lr,uVar3);
}

