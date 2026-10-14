// sub_0803438C at 0x0803438C (thumb)

undefined4 sub_0803438C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + -0x4000;
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

