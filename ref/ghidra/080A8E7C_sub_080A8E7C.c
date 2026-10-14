// sub_080A8E7C at 0x080A8E7C (thumb)

undefined4 sub_080A8E7C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
    *(undefined **)(param_1 + 0x28) = &DAT_082b63d8;
  }
  sub_0809C980(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (3 < bVar1) {
      sub_0809C930(param_1,4);
      sub_0809C980(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (6 < bVar1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

