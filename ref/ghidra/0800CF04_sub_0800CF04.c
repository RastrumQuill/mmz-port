// sub_0800CF04 at 0x0800CF04 (thumb)

undefined4 sub_0800CF04(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    DAT_0202265c = (uint)bVar1;
    *(byte *)(param_1 + 0xe) = bVar1 + 1;
  }
  if (DAT_0202265c == 0xb4) {
    local_10 = 0xda000;
    local_c = 0x1ac000;
    sub_080A8D20(&local_10,1,3);
    local_10 = 0xd1000;
    local_c = 0x1a2000;
    sub_080A8D20(&local_10,1,0);
    local_10 = 0xbc000;
    local_c = 0x1a1000;
    sub_080A8D20(&local_10,1,0);
    local_10 = 0xcd000;
  }
  else {
    if (DAT_0202265c < 0xb5) {
      if (DAT_0202265c == 0) {
        local_10 = 0xbd000;
        local_c = 0x1ae000;
        sub_080A8D20(&local_10,1,1);
        goto LAB_0800d0c0;
      }
      if (DAT_0202265c != 0x5a) goto LAB_0800d0c0;
      local_10 = 0xd6000;
      local_c = 0x1af000;
      sub_080A8D20(&local_10,1,2);
      local_10 = 0xcd000;
      local_c = 0x1a5000;
      sub_080A8D20(&local_10,1,0);
      local_10 = 0xbe000;
      local_c = 0x1a4000;
    }
    else {
      if (DAT_0202265c != 0x168) {
        if (0x168 < DAT_0202265c) {
          if (DAT_0202265c == 0x1c2) {
            local_10 = 0xc8000;
            local_c = 0x1a2000;
            sub_080A8D20(&local_10,1,6);
            local_10 = 0xcd000;
            local_c = 0x1ae000;
            sub_080A8D20(&local_10,1,0);
          }
          goto LAB_0800d0c0;
        }
        if (DAT_0202265c != 0x10e) goto LAB_0800d0c0;
        local_10 = 0xde000;
        local_c = 0x1a9000;
        sub_080A8D20(&local_10,1,4);
        local_10 = 0xd3000;
        local_c = 0x1a0000;
        sub_080A8D20(&local_10,1,0);
        local_10 = 0xbc000;
        local_c = 0x19e000;
        sub_080A8D20(&local_10,1,0);
        local_10 = 0xbd000;
        goto LAB_0800d080;
      }
      local_10 = 0xd8000;
      local_c = 0x1a6000;
      sub_080A8D20(&local_10,1,5);
      local_10 = 0xcd000;
      local_c = 0x1a0000;
    }
    sub_080A8D20(&local_10,1,0);
    local_10 = 0xc9000;
  }
LAB_0800d080:
  local_c = 0x1ae000;
  sub_080A8D20(&local_10,1,0);
LAB_0800d0c0:
  DAT_0202265c = DAT_0202265c + 1;
  if (0x1c2 < DAT_0202265c) {
    DAT_0202265c = 0;
  }
  return in_lr;
}

