// sub_080202FC at 0x080202FC (thumb)

undefined8
sub_080202FC(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_2c;
  uint local_28;
  
  local_28 = 0;
  if (param_6 != 0) {
    local_2c = *param_1;
    do {
      iVar5 = param_6;
      if (0xfff < param_6) {
        iVar5 = 0x1000;
      }
      local_2c = local_2c + iVar5 * param_4;
      iVar1 = sub_0800901C(local_2c,param_3);
      iVar4 = local_2c;
      if ((iVar1 == 0) && (uVar2 = sub_08008354(local_2c,param_3), (uVar2 & 0xf) != 0)) {
        do {
          iVar3 = iVar4 + param_4 * -0x100;
          iVar5 = iVar5 + -0x100;
          if (iVar5 < 1) break;
          iVar1 = sub_0800901C(iVar3,param_3);
          iVar4 = iVar3;
        } while (iVar1 == 0);
      }
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          param_6 = 0;
        }
      }
      else {
        iVar5 = sub_0802290C(iVar4,param_3,-param_4,iVar5,param_7 + param_3);
        if (iVar5 < 1) {
          if ((param_8 == 0) && (iVar5 < 0)) {
            param_6 = 0;
          }
        }
        else {
          iVar4 = iVar4 + -param_4 * iVar5;
          iVar5 = sub_0800901C(iVar4,param_3);
          iVar1 = param_3 + iVar5 + -1;
          uVar2 = sub_08008D80(iVar4,iVar1);
          if (param_9 != 0) {
            param_1[1] = iVar5 + param_3 + param_5;
            param_9 = 0;
          }
          sub_080221F0(param_2,3,iVar4,iVar1,uVar2 & 0xffff);
          if (local_28 == 0) {
            local_28 = uVar2 & 0xffff;
          }
        }
      }
      param_6 = param_6 + -0x1000;
    } while (0 < param_6);
  }
  return CONCAT44(in_lr,local_28);
}

