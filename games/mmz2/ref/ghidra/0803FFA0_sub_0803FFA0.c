// sub_0803FFA0 at 0x0803FFA0 (thumb)

undefined4 sub_0803FFA0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0xc0;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + 0x800;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (bVar1 != 8) {
    if (bVar1 < 9) {
      if (bVar1 != 0) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x10) {
      if (bVar1 != 0x40) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  sub_08098414(&local_10,0x300,0x80);
  sub_080032EC(0x2c);
  return in_lr;
}

