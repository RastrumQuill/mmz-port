// sub_08037F98 at 0x08037F98 (thumb)

undefined4 sub_08037F98(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1d01);
    sub_0803C490(param_1,0xb);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x153) & 1) == 0) {
    sub_0803A3BC(param_1,0x1d01);
  }
  else {
    sub_0801CFC8(param_1,0x1d01,*(undefined *)(param_1 + 0x16e),*(undefined *)(param_1 + 0x16f));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CF00(param_1,0x2810);
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x14d) = 4;
  }
  return in_lr;
}

