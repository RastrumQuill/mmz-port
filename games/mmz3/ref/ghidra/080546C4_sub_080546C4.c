// sub_080546C4 at 0x080546C4 (thumb)

undefined4 sub_080546C4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x4ffd) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar1;
      if (*(char *)(param_1 + 200) == '\0') {
        uVar2 = 0xb002;
      }
      else {
        uVar2 = 0xb001;
      }
      sub_08017700(param_1,uVar2);
    }
  }
  else if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sub_08017700(param_1,0xb003);
    }
  }
  else if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    sub_08017700(param_1,0xb003);
  }
  return in_lr;
}

