// sub_08033D20 at 0x08033D20 (thumb)

undefined4 sub_08033D20(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1200);
  }
  else {
    sub_0803A3BC(param_1,0x1200);
    if ((*pcVar1 != '\x01') || ('\x01' < *(char *)(param_1 + 0x72))) goto LAB_08033d68;
    sub_0803C490(param_1,0xf);
  }
  *pcVar1 = *pcVar1 + '\x01';
LAB_08033d68:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 5;
    *(undefined *)(param_1 + 0x101) = 5;
    *(undefined *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}

