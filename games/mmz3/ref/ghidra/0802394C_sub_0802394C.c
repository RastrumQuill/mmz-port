// sub_0802394C at 0x0802394C (thumb)

undefined4 sub_0802394C(uint param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  uint uVar1;
  undefined4 in_lr;
  undefined auStack_54 [19];
  byte local_41;
  undefined2 local_40;
  undefined local_3a;
  ushort local_38;
  ushort local_36;
  undefined auStack_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = param_1 & 0xff;
  local_2c = 0;
  local_28 = 0;
  local_1c = param_2;
  local_18 = param_3;
  if (param_4 == 0x100) {
    sub_080048C4(auStack_54,(&DAT_085c0874)[uVar1],&local_1c);
  }
  else {
    sub_080049A0(auStack_54,(&DAT_085c0874)[uVar1],&local_1c);
  }
  local_40 = CONCAT11(local_40._1_1_ & 0xc | (byte)(((&DAT_0202fa10)[uVar1] & 0x3ff) >> 8) |
                      *(char *)(&DAT_0202f810 + uVar1) << 4,(char)((&DAT_0202fa10)[uVar1] & 0x3ff));
  local_3a = 0;
  if (param_4 == 0x100) {
    FUN_0800033c(auStack_54,auStack_34);
  }
  else {
    local_38 = param_4;
    if (0x200 < param_4) {
      local_38 = 0x200;
    }
    local_41 = local_41 & 0xc1 | (byte)((param_1 & 0x1f) << 1);
    local_36 = local_38;
    FUN_08000590(auStack_54,0);
    sub_08004A74(auStack_54,auStack_34);
  }
  return in_lr;
}

