// sub_080AC07C at 0x080AC07C (thumb)

undefined4 sub_080AC07C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0809C980(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x05') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x100;
  }
  else if (cVar1 == '\n') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x100;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    DAT_02022adc = DAT_02022adc | 0x10;
  }
  return in_lr;
}

