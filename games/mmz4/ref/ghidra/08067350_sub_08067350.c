// sub_08067350 at 0x08067350 (thumb)

undefined4 sub_08067350(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = sub_0809C194(param_1,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08857d50);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) != '\0') {
    sub_08002B5C(0x61);
    *(undefined2 *)(param_1 + 0xe0) = 0;
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

