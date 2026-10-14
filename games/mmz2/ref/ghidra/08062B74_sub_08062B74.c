// sub_08062B74 at 0x08062B74 (thumb)

undefined4 sub_08062B74(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x10) * -0x600 + 0x300;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      sub_080623BC(param_1);
      if (*(char *)(param_1 + 0xc1) == '\0') {
        return in_lr;
      }
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffe14;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  sub_080622D8(param_1);
  if (*(char *)(param_1 + 0xc1) != '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

