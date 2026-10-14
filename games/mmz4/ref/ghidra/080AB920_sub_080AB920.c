// sub_080AB920 at 0x080AB920 (thumb)

undefined4 sub_080AB920(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080ABF10(param_1);
    sub_08005784(param_1 + 0x74,&DAT_0885f760);
    *(undefined *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  DAT_02000a44 = 0x10;
  sub_080ABF44(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

