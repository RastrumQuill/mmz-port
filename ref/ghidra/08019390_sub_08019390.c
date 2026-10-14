// sub_08019390 at 0x08019390 (thumb)

undefined8
sub_08019390(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_2c;
  
  if (param_6 != 0) {
    local_2c = *param_1;
    do {
      iVar5 = param_6;
      if (0xfff < param_6) {
        iVar5 = 0x1000;
      }
      local_2c = local_2c + param_4 * iVar5;
      iVar2 = sub_08009C3C(local_2c,param_3);
      iVar6 = local_2c;
      if ((iVar2 == 0) && (uVar3 = sub_08009AFC(local_2c,param_3), (uVar3 & 0xf) != 0)) {
        do {
          iVar4 = iVar6 + param_4 * -0x100;
          iVar5 = iVar5 + -0x100;
          if (iVar5 < 1) break;
          iVar2 = sub_08009C3C(iVar4,param_3);
          iVar6 = iVar4;
        } while (iVar2 == 0);
      }
      if (iVar2 < 0) {
        iVar5 = sub_0801AE74(iVar6,param_3,-param_4,iVar5,param_3 - param_7);
        if (iVar5 < 1) {
          if (iVar5 < 0) {
            param_6 = 0;
          }
        }
        else {
          iVar6 = iVar6 + -param_4 * iVar5;
          iVar5 = sub_08009C3C(iVar6,param_3);
          uVar3 = sub_08009B9C(iVar6,param_3 + iVar5 + 1);
          uVar3 = uVar3 & 0xff;
          iVar5 = sub_08019634(param_1,param_2,iVar6,param_3,param_5,param_7,param_8,iVar5,uVar3);
          if (iVar5 != 0) {
            if (param_8 != 0) {
              param_1[1] = (iVar5 + param_3) - param_5;
            }
            goto LAB_080194d8;
          }
          cVar1 = sub_080198AC(param_1,local_2c,param_3,param_5,param_8,uVar3);
          if (cVar1 != '\0') goto LAB_080194d8;
        }
      }
      else if (0 < iVar2) {
        param_6 = 0;
      }
      param_6 = param_6 + -0x1000;
    } while (0 < param_6);
  }
  uVar3 = 0;
LAB_080194d8:
  return CONCAT44(in_lr,uVar3);
}

