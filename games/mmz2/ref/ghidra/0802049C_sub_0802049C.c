// sub_0802049C at 0x0802049C (thumb)

undefined8
sub_0802049C(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_28;
  uint local_24;
  
  local_24 = 0;
  if (param_6 != 0) {
    iVar3 = param_1[1];
    local_28 = 1;
    if (param_6 < 1) {
      local_28 = -1;
      param_6 = -param_6;
    }
    do {
      iVar2 = param_6;
      if (0xfff < param_6) {
        iVar2 = 0x1000;
      }
      iVar3 = iVar3 + local_28 * iVar2;
      iVar2 = sub_08020564(param_3,iVar3,param_4,0x1000);
      if (iVar2 != 0) {
        if (iVar2 < 1) {
          iVar4 = param_3 + iVar2 + 1;
        }
        else {
          iVar4 = param_3 + iVar2 + -1;
        }
        uVar1 = sub_08008D80(iVar4,iVar3);
        if (param_9 != 0) {
          *param_1 = (iVar2 + param_3) - param_5;
          param_9 = 0;
        }
        sub_08022278(param_2,param_7,iVar4,iVar3,uVar1 & 0xffff);
        if (local_24 == 0) {
          local_24 = uVar1 & 0xffff;
        }
      }
      param_6 = param_6 + -0x1000;
    } while (0 < param_6);
  }
  return CONCAT44(in_lr,local_24);
}

