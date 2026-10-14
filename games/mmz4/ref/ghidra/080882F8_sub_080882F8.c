// sub_080882F8 at 0x080882F8 (thumb)

undefined4 sub_080882F8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885baf8);
    sub_0801CF00(param_1,0x1d1c);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 0x1f) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_24 = -0x400;
    }
    else {
      local_24 = 0x400;
    }
    local_24 = *(int *)(param_1 + 0x54) + local_24;
    local_20 = *(undefined4 *)(param_1 + 0x58);
    local_1c = 0x200;
    local_18 = 0;
    sub_08088E68(&local_24,&local_1c,0,2);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x20) {
    if (bVar1 < 0x21) {
      if (bVar1 != 0x10) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x30) {
      if (bVar1 != 0x40) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  sub_08002B10(0x2c);
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0xa00;
  uVar2 = sub_0810CD50(*(undefined4 *)(DAT_0202dbf0 + 0x54),*(int *)(DAT_0202dbf0 + 0x58) + -0x1000,
                       local_14);
  sub_080BD058(&local_14,0x180,uVar2);
  return in_lr;
}

