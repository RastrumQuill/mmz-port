// sub_0807BA60 at 0x0807BA60 (thumb)

undefined4 sub_0807BA60(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0807bae4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0x3e01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    local_c = *(int *)(param_1 + 0x58) + -0x1000;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = -0x1000;
    }
    else {
      local_10 = 0x1000;
    }
    local_10 = *(int *)(param_1 + 0x54) + local_10;
    sub_080A1ECC(&local_10,&local_10,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
    sub_0800471C(0x2d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0807bae4:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

