// sub_08035838 at 0x08035838 (thumb)

undefined4 sub_08035838(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xbe21);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if ((iVar1 < 0x12c01) &&
     (((iVar1 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54)), iVar1 != 0 ||
       (iVar1 = sub_08009BE4(*(int *)(param_1 + 0x54) + 0x1a00,*(undefined4 *)(param_1 + 0x58)),
       iVar1 != 0)) ||
      (iVar1 = sub_08009BE4(*(int *)(param_1 + 0x54) + -0x1a00,*(undefined4 *)(param_1 + 0x58)),
      iVar1 != 0)))) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
  if (0x14000 < *(int *)(param_1 + 0x58) + -0x6400) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  sub_080177F4(param_1);
  return in_lr;
}

