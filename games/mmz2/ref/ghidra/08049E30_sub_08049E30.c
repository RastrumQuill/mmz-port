// sub_08049E30 at 0x08049E30 (thumb)

undefined4 sub_08049E30(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa80a);
    sub_080032EC(0x39);
    sub_08006E08(param_1 + 0x74,&DAT_0833b014);
    if (*(int *)(param_1 + 0xc4) + -0x7800 < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(char *)(param_1 + 0xbe) = '\x03';
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

