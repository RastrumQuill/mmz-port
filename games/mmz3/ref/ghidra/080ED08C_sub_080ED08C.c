// sub_080ED08C at 0x080ED08C (thumb)

undefined4
sub_080ED08C(uint param_1,undefined4 param_2,undefined4 param_3,ushort param_4,uint param_5)

{
  uint uVar1;
  undefined4 in_lr;
  undefined auStack_5c [17];
  byte local_4b;
  byte local_49;
  undefined2 local_48;
  undefined local_42;
  ushort local_40;
  ushort local_3e;
  undefined auStack_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar1 = param_1 << 0x10;
  local_34 = 0;
  local_30 = 0;
  local_24 = param_2;
  local_20 = param_3;
  if (param_4 == 0x100) {
    sub_080048C4(auStack_5c,(&DAT_085c0874)[uVar1 >> 0x18],&local_24);
  }
  else if (param_4 < 0x101) {
    sub_08004A18(auStack_5c,(&DAT_085c0874)[uVar1 >> 0x18],&local_24);
  }
  else {
    sub_080049A0(auStack_5c,(&DAT_085c0874)[uVar1 >> 0x18],&local_24);
  }
  uVar1 = (param_1 & 0xffff) >> 8;
  local_48._1_1_ = (byte)(((&DAT_0202fa10)[uVar1] & 0x3ff) >> 8);
  local_42 = (undefined)(param_1 & 0xffff);
  local_48 = CONCAT11(local_48._1_1_ | *(char *)(&DAT_0202f810 + uVar1) << 4,
                      (char)((&DAT_0202fa10)[uVar1] & 0x3ff));
  local_4b = local_4b & 0xf3 | (byte)((param_5 & 3) << 2);
  if (param_4 == 0x100) {
    FUN_0800033c(auStack_5c,auStack_3c);
  }
  else {
    local_40 = param_4;
    if (0x200 < param_4) {
      local_40 = 0x200;
    }
    local_49 = local_49 & 0xc1 | (byte)((param_1 & 0x1f) << 1);
    local_3e = local_40;
    if (local_40 < 0x101) {
      FUN_08000590(auStack_5c,0);
      sub_08004C68(auStack_5c,auStack_3c);
    }
    else {
      FUN_08000590(auStack_5c,0);
      sub_08004A74(auStack_5c,auStack_3c);
    }
  }
  return in_lr;
}

