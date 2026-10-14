// sub_080CD828 at 0x080CD828 (thumb)

undefined4 sub_080CD828(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0xe) == '\0') {
        sub_08006E08(param_1 + 0x74,&DAT_083495e0);
        *(undefined *)(param_1 + 0x12) = 0x80;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      if ((*(byte *)(param_1 + 0x12) & 0x3f) == 0) {
        if (*(byte *)(param_1 + 0x12) == 0) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        local_14 = *(int *)(param_1 + 0x54) +
                   *(int *)(&DAT_083497a4 + (uint)*(byte *)(param_1 + 0x10) * 8);
        local_10 = *(int *)(param_1 + 0x58) +
                   *(int *)(&DAT_083497a8 + (uint)*(byte *)(param_1 + 0x10) * 8);
        sub_080B0ACC(&local_14,&DAT_08349718,0,0);
      }
    }
    else {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0xe) == '\0') {
        sub_08006E08(param_1 + 0x74,&DAT_083495f8 + (uint)*(byte *)(param_1 + 0x10) * 0x18);
        *(undefined *)(param_1 + 0x12) = 0x40;
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      if (*(char *)(param_1 + 0x12) == '8') {
        sub_08006E08(param_1 + 0x74,&DAT_08349658 + (uint)*(byte *)(param_1 + 0x10) * 0x18);
      }
      else if (*(char *)(param_1 + 0x12) == '0') {
        sub_08006E08(param_1 + 0x74,&DAT_083496b8 + (uint)*(byte *)(param_1 + 0x10) * 0x18);
      }
      if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
        if (*(byte *)(param_1 + 0x12) == 0) {
          *(undefined *)(param_1 + 0x12) = 0x80;
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        local_14 = *(int *)(param_1 + 0x54) +
                   *(int *)(&DAT_083497a4 + (uint)*(byte *)(param_1 + 0x10) * 8);
        local_10 = *(int *)(param_1 + 0x58) +
                   *(int *)(&DAT_083497a8 + (uint)*(byte *)(param_1 + 0x10) * 8);
        bVar1 = *(char *)(param_1 + 0x13) + 1;
        *(byte *)(param_1 + 0x13) = bVar1;
        sub_080BA9B8(param_1,&local_14,*(undefined *)(param_1 + 0x10),bVar1 & 1);
      }
    }
    goto LAB_080cd9e0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x18) {
    if (bVar1 < 0x19) {
      if (bVar1 == 0) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xb4) = 0;
      }
      goto LAB_080cd9e0;
    }
    if ((bVar1 != 0x20) && (bVar1 != 0x40)) goto LAB_080cd9e0;
  }
  local_14 = *(int *)(param_1 + 0x54) +
             *(int *)(&DAT_083497a4 + (uint)*(byte *)(param_1 + 0x10) * 8);
  local_10 = *(int *)(param_1 + 0x58) +
             *(int *)(&DAT_083497a8 + (uint)*(byte *)(param_1 + 0x10) * 8);
  sub_080B0ACC(&local_14,&UNK_08349734 + (uint)*(byte *)(param_1 + 0x10) * 0x1c,0,0);
LAB_080cd9e0:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

