// sub_080602C8 at 0x080602C8 (thumb)

undefined4 sub_080602C8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab02);
    sub_08006E08(param_1 + 0x74,&DAT_0833d28c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200) + -0x6400;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    sub_0807E4A4(param_1,0,0);
    sub_0807E4A4(param_1,0,1);
    sub_0807E4A4(param_1,0,2);
    sub_0807E4A4(param_1,0,3);
    sub_0807E4A4(param_1,0,4);
    sub_080032EC(0x81);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (-0x800 < iVar1) {
      *(int *)(param_1 + 0x5c) = iVar1 + -0x20;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc0) + -0xa000) {
      *(undefined *)(param_1 + 0xd) = 0x11;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    if (iVar1 < 0x800) {
      *(int *)(param_1 + 0x5c) = iVar1 + 0x20;
    }
    if (*(int *)(param_1 + 0xc4) + 0xa000 < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0xd) = 0x11;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

