// sub_0801A5CC at 0x0801A5CC (thumb)

undefined8 sub_0801A5CC(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_24;
  
  uVar4 = 0;
  uVar5 = 0;
  if (param_5 != 0) {
    iVar3 = param_1[1];
    local_24 = 1;
    if (param_5 < 1) {
      local_24 = -1;
      param_5 = -param_5;
    }
    do {
      iVar2 = param_5;
      if (0xfff < param_5) {
        iVar2 = 0x1000;
      }
      iVar3 = iVar3 + local_24 * iVar2;
      iVar2 = sub_0801A28C(param_2,iVar3,param_3);
      if (iVar2 != 0) {
        iVar2 = iVar2 + param_2;
        if (param_6 != 0) {
          *param_1 = iVar2 - param_4;
          param_6 = 0;
        }
        if (param_3 == 0) {
          iVar2 = iVar2 + -1;
        }
        else {
          iVar2 = iVar2 + 1;
        }
        uVar1 = sub_08009B9C(iVar2,iVar3);
        if (uVar4 == 0) {
          uVar4 = uVar1 & 0xff;
        }
        if ((uVar1 & 0xff) == 0xf) {
          if (uVar5 == 0) {
            uVar5 = 0xf;
          }
        }
        else {
          uVar5 = uVar4;
          if (uVar4 != 0) {
            if (uVar4 == 0xf) {
              uVar4 = 1;
            }
            param_5 = 0;
            uVar5 = uVar4;
          }
        }
      }
      param_5 = param_5 + -0x1000;
    } while (0 < param_5);
  }
  return CONCAT44(in_lr,uVar5 << 8 | uVar4);
}

