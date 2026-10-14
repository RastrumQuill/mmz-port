// sub_080883FC at 0x080883FC (thumb)

undefined4 sub_080883FC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885bb40);
    sub_0801CF00(param_1,0x1d0e);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801D1F4(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (iVar2 = sub_08088B14(param_1), iVar2 != 0)) {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0x20;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 8;
      *(byte *)(param_1 + 0xe) = bVar1;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
      bVar1 = 0;
    }
    *(byte *)(param_1 + 0xf) = bVar1;
  }
  return in_lr;
}

