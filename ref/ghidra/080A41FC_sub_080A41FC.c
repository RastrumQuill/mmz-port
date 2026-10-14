// sub_080A41FC at 0x080A41FC (thumb)

undefined4 sub_080A41FC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar2;
  if (*(int *)(param_1 + 0x4c) < iVar2) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
      *(undefined *)(param_1 + 0xf) = 1;
      if ((*(uint *)(DAT_02022b20 + 0x10) & 0x2000) == 0) {
        sub_080BC808(0x2e1);
      }
      else if (DAT_02022afb == '\0') {
        sub_080BC808(0x2e2);
        DAT_02022afb = DAT_02022afb + '\x01';
      }
      else {
        sub_080BC808(0x2e3);
      }
    }
  }
  else if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

