// sub_08024088 at 0x08024088 (thumb)

undefined4 sub_08024088(undefined *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  sub_08024F3C();
  DAT_02002410 = 0;
  DAT_0200241e = 0xff;
  DAT_02002400 = 0;
  sub_0800393C(&DAT_085d7a10,(DAT_0202fa2c - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7a1c,(DAT_0202f82c - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d82e4,(DAT_0202fb0e - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d82f0,(DAT_0202f90e - 5) * 0x20 + 0x200);
  local_24 = 0x7200;
  uVar1 = 0;
  if (DAT_0203df9e != 0) {
    do {
      local_28 = uVar1 * 0x1000 + 0x3000;
      sub_080E7768(&local_28,(&DAT_0203df94)[uVar1],0);
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < DAT_0203df9e);
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return in_lr;
}

