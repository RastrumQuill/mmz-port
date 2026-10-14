// sub_080B0CEC at 0x080B0CEC (thumb)

undefined4 sub_080B0CEC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

