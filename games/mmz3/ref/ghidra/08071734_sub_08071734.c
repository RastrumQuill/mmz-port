// sub_08071734 at 0x08071734 (thumb)

undefined4 sub_08071734(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017700(param_1,0x2300);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (iVar1 < 0) {
      if (*(char *)(param_1 + 0x12) == '\0') {
        sub_0800471C(0x91);
        *(undefined *)(param_1 + 0x12) = 1;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0;
      if (*(char *)(iVar2 + 0x2f) == '\0') {
        if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
          *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 4;
        }
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 4;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

