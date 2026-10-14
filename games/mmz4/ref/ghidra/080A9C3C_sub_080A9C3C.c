// sub_080A9C3C at 0x080A9C3C (thumb)

undefined4 sub_080A9C3C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = sub_080A9884(param_1);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xb6) = 0;
    }
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) | 0x9a00);
    *(undefined *)(param_1 + 0x12) = 0x2d;
    sub_08005784(param_1 + 0x74,&DAT_0885f468);
    *(undefined4 *)(param_1 + 0x98) = 0x80a9649;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080A9920(param_1);
  if (cVar1 != '\0') {
    sub_080A9818(param_1);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

