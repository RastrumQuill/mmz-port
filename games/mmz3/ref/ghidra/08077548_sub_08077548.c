// sub_08077548 at 0x08077548 (thumb)

undefined4 sub_08077548(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08077582;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined *)(param_1 + 0x13) = 1;
    uVar2 = 0x28;
  }
  else {
    uVar2 = 0xc0;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08077582:
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    if (*(byte *)(param_1 + 0xb8) < 4) {
      sub_08076EF0(param_1);
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

