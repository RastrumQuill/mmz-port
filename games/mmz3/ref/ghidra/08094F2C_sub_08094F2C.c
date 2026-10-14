// sub_08094F2C at 0x08094F2C (thumb)

undefined4 sub_08094F2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xd406);
    sub_08007390(param_1 + 0x74,&DAT_083667cc);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
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
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

