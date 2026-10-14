// sub_08075FB0 at 0x08075FB0 (thumb)

undefined4 sub_08075FB0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      sub_08017700(param_1,0x2a02);
      *(undefined *)(param_1 + 0x12) = 1;
    }
    else {
      sub_08017700(param_1,0x2a04);
      *(undefined *)(param_1 + 0x12) = 0;
    }
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_08363930);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(undefined *)(param_1 + 0x12) = 0;
      sub_08017700(param_1,0x2a04);
      sub_080177F4(param_1);
    }
    sub_08075838(param_1);
  }
  iVar1 = sub_08063614(param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if ((iVar1 < 0) && (-0x800 < iVar1)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    }
  }
  return in_lr;
}

