// sub_080A9ED0 at 0x080A9ED0 (thumb)

undefined4 sub_080A9ED0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0x12) = 0xb4;
    sub_0801CF00(param_1,0x9a14);
    sub_08005784(param_1 + 0x74,&DAT_0885f498);
    sub_080A9818(param_1);
    sub_08002B10(0x173);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  cVar1 = sub_080A9920(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) + 0x9a05);
    sub_08005784(param_1 + 0x74,&DAT_0885f4c8);
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  cVar1 = sub_080A96E4(param_1);
  if (cVar1 != '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885f468);
    *(undefined *)(param_1 + 0xb7) = 0;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

