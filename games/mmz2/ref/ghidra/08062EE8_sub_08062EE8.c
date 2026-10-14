// sub_08062EE8 at 0x08062EE8 (thumb)

undefined4 sub_08062EE8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_08062230(param_1);
      sub_080128D4(param_1);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      if (0x1f < *(int *)(param_1 + 0x60) + 0x10U) {
        return in_lr;
      }
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffc;
      *(undefined *)(param_1 + 0xd) = 5;
      cVar2 = '\0';
      goto LAB_08062f70;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xc1) = 0;
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x10;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080620D0(param_1);
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08062f70:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

