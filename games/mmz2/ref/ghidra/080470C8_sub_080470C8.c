// sub_080470C8 at 0x080470C8 (thumb)

undefined4 sub_080470C8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0xbf) + -1;
  *(char *)(param_1 + 0xbf) = cVar1;
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
        *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xd) = 0x11;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    sub_08003338((int)*(short *)(param_1 + 0xde));
    *(short *)(param_1 + 0xde) = -1;
  }
  return in_lr;
}

