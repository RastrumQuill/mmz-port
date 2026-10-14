// sub_080AFAAC at 0x080AFAAC (thumb)

undefined4 sub_080AFAAC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08001EAC(0xcc);
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\0') &&
          (bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9), (bVar1 & 1) == 0)) {
    *(byte *)(param_1 + 0xd) = bVar1 & 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

