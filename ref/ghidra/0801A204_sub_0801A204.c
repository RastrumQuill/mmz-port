// sub_0801A204 at 0x0801A204 (thumb)

undefined8
sub_0801A204(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (param_5 != 0) {
    iVar3 = param_1[1];
    iVar4 = 1;
    if (param_5 < 1) {
      iVar4 = -1;
      param_5 = -param_5;
    }
    do {
      iVar2 = param_5;
      if (0xfff < param_5) {
        iVar2 = 0x1000;
      }
      iVar3 = iVar3 + iVar2 * iVar4;
      iVar2 = sub_0801A28C(param_2,iVar3,param_3);
      if (iVar2 != 0) {
        if (param_6 != 0) {
          *param_1 = (iVar2 + param_2) - param_4;
        }
        uVar1 = sub_08009B9C(param_2,iVar3);
        uVar1 = uVar1 & 0xff;
        goto LAB_0801a27a;
      }
      param_5 = param_5 + -0x1000;
    } while (0 < param_5);
  }
  uVar1 = 0;
LAB_0801a27a:
  return CONCAT44(in_lr,uVar1);
}

