// sub_08033C38 at 0x08033C38 (thumb)

undefined4 sub_08033C38(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x1100);
  }
  else {
    sub_0803A3BC(param_1,0x1100);
    if ((*pcVar2 != '\x01') || ('\x01' < *(char *)(param_1 + 0x72))) goto LAB_08033c80;
    sub_0803C490(param_1,0xc);
  }
  *pcVar2 = *pcVar2 + '\x01';
LAB_08033c80:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  return in_lr;
}

