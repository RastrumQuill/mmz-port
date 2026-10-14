// sub_080551D0 at 0x080551D0 (thumb)

undefined4 sub_080551D0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x1c;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffdf6;
    if (*(char *)(param_1 + 0x10) == '\x03') {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x60) = 7;
    *(undefined4 *)(param_1 + 0x58) = 0x150;
    sub_080033F0(param_1 + 0x6c,8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

