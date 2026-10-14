// sub_08037218 at 0x08037218 (thumb)

undefined4 sub_08037218(int param_1)

{
  undefined uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    sub_0801CF00(param_1,0x1c02);
    sub_0803C490(param_1,10);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x153) & 1) == 0) {
    sub_0803A3BC(param_1,0x1c02);
  }
  else {
    sub_0801CFC8(param_1,0x1c02,*(undefined *)(param_1 + 0x16e),*(undefined *)(param_1 + 0x16f));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_0801CFC8(param_1,0x500,4,1);
    iVar2 = 0x100;
    uVar1 = 0;
  }
  else {
    iVar2 = 0x14d;
    uVar1 = 3;
  }
  *(undefined *)(param_1 + iVar2) = uVar1;
  return in_lr;
}

