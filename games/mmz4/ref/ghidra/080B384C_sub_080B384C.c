// sub_080B384C at 0x080B384C (thumb)

undefined4 sub_080B384C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc701);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x71) == '\x05') {
    sub_08002B10(0x162);
    sub_08005784(param_1 + 0x74,&DAT_088602a8);
  }
  if (('\x05' < *(char *)(param_1 + 0x71)) && (cVar1 = sub_080B3B70(param_1), cVar1 != '\0')) {
    sub_08005784(param_1 + 0x74,&DAT_08860218);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

