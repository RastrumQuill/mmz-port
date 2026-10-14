// sub_080E1274 at 0x080E1274 (thumb)

undefined4 sub_080E1274(undefined4 param_1,uint param_2,undefined param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (param_2 == 0xff) {
    return in_lr;
  }
  if (param_2 < 0x1b) {
    if (0x16 < param_2) {
      if (param_2 < 0x19) {
        sub_080E2098(param_1,0,(uint)(*(int *)(DAT_0203063c + param_2) << 0x1d) >> 0x1f,param_3);
        return in_lr;
      }
      sub_080E2708(param_1,0,(uint)(*(int *)(DAT_0203063c + param_2) << 0x1d) >> 0x1f,param_3);
      return in_lr;
    }
    uVar1 = 0;
  }
  else {
    if (0x27 < param_2) {
      sub_080E3C38(param_1,2,0,param_3);
      return in_lr;
    }
    if (0x1f < param_2) {
      if (param_2 < 0x22) {
        sub_080E5448(param_1,0,0,param_3);
        return in_lr;
      }
      if (param_2 < 0x24) {
        sub_080E40D8(param_1,0,0,param_3);
        return in_lr;
      }
      if (param_2 < 0x26) {
        uVar2 = (uint)(*(int *)(DAT_0203063c + param_2) << 0x1d) >> 0x1f;
        uVar1 = 0;
      }
      else {
        uVar1 = 2;
        uVar2 = 0;
      }
      sub_080E4714(param_1,uVar1,uVar2,param_3);
      return in_lr;
    }
    uVar1 = 1;
  }
  sub_080E3C38(param_1,uVar1,0,param_3);
  return in_lr;
}

