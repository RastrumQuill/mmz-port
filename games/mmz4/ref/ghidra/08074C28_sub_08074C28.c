// sub_08074C28 at 0x08074C28 (thumb)

undefined4 sub_08074C28(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9301);
    *(undefined2 *)(param_1 + 0xdc) = 8;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  sVar1 = *(short *)(param_1 + 0xdc) + -1;
  *(short *)(param_1 + 0xdc) = sVar1;
  if (sVar1 == -1) {
    sub_080CB110(param_1,1,*(undefined *)(param_1 + 0x12));
    sub_08002B10(0x18c);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x0e';
    *(undefined2 *)(param_1 + 0xdc) = 8;
  }
  return in_lr;
}

