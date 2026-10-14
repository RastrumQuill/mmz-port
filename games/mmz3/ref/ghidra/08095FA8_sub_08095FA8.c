// sub_08095FA8 at 0x08095FA8 (thumb)

undefined4 sub_08095FA8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08096012;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x60;
    uVar3 = 0xffffffc0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x40;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x5c) < 0) {
    sub_08017700(param_1,0xdb00);
  }
  else {
    sub_08017700(param_1,0xdb02);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08096012:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar2 = sub_08095910(param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_080177F4(param_1);
  }
  return in_lr;
}

