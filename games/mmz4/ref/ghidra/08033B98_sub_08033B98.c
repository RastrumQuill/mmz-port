// sub_08033B98 at 0x08033B98 (thumb)

undefined4 sub_08033B98(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x1400);
    sub_0803C490(param_1,8);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x153) & 1) == 0) {
    sub_0803A3BC(param_1,0x1400);
  }
  else {
    sub_0801CFC8(param_1,0x1400,*(undefined *)(param_1 + 0x16e),*(undefined *)(param_1 + 0x16f));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  else {
    *(undefined *)(param_1 + 0x14d) = 1;
  }
  return in_lr;
}

