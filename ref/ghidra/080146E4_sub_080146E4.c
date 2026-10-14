// sub_080146E4 at 0x080146E4 (thumb)

undefined4 sub_080146E4(void)

{
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (DAT_02022c5c == '\x04') {
    local_18 = DAT_02022ca0;
    local_14 = DAT_02022ca8;
    if (DAT_02022c7c < DAT_02022ca0 + 0x2d000) {
      do {
        local_14 = local_14 + 0x7800;
        sub_08008FD0(0x41,&local_18,&DAT_082a002c,0);
        local_14 = local_14 + 0x7800;
      } while (local_14 < DAT_02022cac);
    }
    local_18 = DAT_02022ca4;
    local_14 = DAT_02022ca8;
    if (DAT_02022ca4 + -0x2d000 < DAT_02022c7c) {
      do {
        local_14 = local_14 + 0x7800;
        sub_08008FD0(0x41,&local_18,&DAT_082a0034,0);
        local_14 = local_14 + 0x7800;
      } while (local_14 < DAT_02022cac);
    }
    if ((DAT_02022ca0 - DAT_02022ca4) + 0x20000U < 0x40001) {
      local_18 = DAT_02022ca0;
      local_14 = DAT_02022ca8;
      do {
        local_18 = local_18 + 0x7800;
        sub_08008FD0(0x41,&local_18,&DAT_082a001c,0);
        local_18 = local_18 + 0x7800;
      } while (local_18 < DAT_02022ca4);
      local_18 = DAT_02022ca0;
      local_14 = DAT_02022cac;
      do {
        local_18 = local_18 + 0x7800;
        sub_08008FD0(0x41,&local_18,&DAT_082a0024,0);
        local_18 = local_18 + 0x7800;
      } while (local_18 < DAT_02022ca4);
    }
  }
  return in_lr;
}

