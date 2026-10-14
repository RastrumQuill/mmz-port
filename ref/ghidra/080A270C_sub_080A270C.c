// sub_080A270C at 0x080A270C (thumb)

undefined4 sub_080A270C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0809C980();
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  if (((*(ushort *)(param_1 + 0x90) & 0x2000) == 0) || (DAT_02022874 == '\0')) {
    if ((*(char *)(param_1 + 0x10) != '\x02') &&
       ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x10) != 2) {
      sub_080BC808(*(byte *)(param_1 + 0x10) + 0x509);
    }
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

