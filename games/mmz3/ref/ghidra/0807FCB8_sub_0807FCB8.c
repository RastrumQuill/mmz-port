// sub_0807FCB8 at 0x0807FCB8 (thumb)

undefined4 sub_0807FCB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x4c02);
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08007390(param_1 + 0x74,&DAT_083646c8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (-1 < iVar1) goto LAB_0807fd26;
    iVar1 = *(int *)(param_1 + 0x58) + iVar1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + 0x20;
  }
  *(int *)(param_1 + 0x58) = iVar1;
LAB_0807fd26:
  sub_080177F4(param_1);
  return in_lr;
}

