// sub_0801A864 at 0x0801A864 (thumb)

undefined8
sub_0801A864(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (param_5 != 0) {
    iVar4 = param_1[1];
    iVar5 = 1;
    if (param_5 < 1) {
      iVar5 = -1;
      param_5 = -param_5;
    }
    do {
      iVar2 = param_5;
      if (0xfff < param_5) {
        iVar2 = 0x1000;
      }
      iVar4 = iVar4 + iVar2 * iVar5;
      iVar2 = sub_0801A28C(param_2,iVar4,param_3);
      if (iVar2 != 0) {
        if (param_6 != 0) {
          *param_1 = (iVar2 + param_2) - param_4;
          param_6 = 0;
        }
        uVar1 = sub_08009B9C(param_2,iVar4);
        uVar3 = uVar1 & 0xff;
        if ((uVar1 & 0x40) == 0) goto LAB_0801a8ea;
      }
      param_5 = param_5 + -0x1000;
    } while (0 < param_5);
  }
  uVar3 = 0;
LAB_0801a8ea:
  return CONCAT44(in_lr,uVar3);
}

