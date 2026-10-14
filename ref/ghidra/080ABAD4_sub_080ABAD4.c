// sub_080ABAD4 at 0x080ABAD4 (thumb)

undefined4 sub_080ABAD4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xbc) == 0) {
      return in_lr;
    }
    DAT_02022cb0 = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (DAT_02022cb0 == 0) {
    sub_0801D5F0(*(undefined4 *)(param_1 + 0xbc));
    DAT_02022cb0 = 1;
    puVar2 = (undefined4 *)sub_0800F8D0(param_1 + 0x4c);
    *(int *)(param_1 + 0xc0) = (int)puVar2;
    iVar1 = DAT_0202286c;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(DAT_0202286c + 0x4c) = *puVar2;
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4);
      DAT_02022b70 = DAT_02022b70 & 0xfffe;
      DAT_02022c5d = 8;
      DAT_02022c66 = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

