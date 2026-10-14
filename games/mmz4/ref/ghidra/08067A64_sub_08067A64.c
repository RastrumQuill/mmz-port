// sub_08067A64 at 0x08067A64 (thumb)

undefined4 sub_08067A64(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa913);
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08002B10(0x65);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    sub_08005784(param_1 + 0x74,&DAT_08857eb8);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0x15;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

