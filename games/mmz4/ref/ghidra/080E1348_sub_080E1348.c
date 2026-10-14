// sub_080E1348 at 0x080E1348 (thumb)

undefined4 sub_080E1348(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 0xffffe700;
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x1900;
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    iVar1 = param_1 + 0x54;
    pcVar2 = (char *)(param_1 + 0x75);
    sub_080E10C8(iVar1,*pcVar2 + '\x03',3);
    sub_080E10C8(iVar1,*pcVar2 + '\x03',4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2000;
    sub_080E10C8(iVar1,*pcVar2 + '\x03',5);
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x1900;
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    sub_080E10C8(param_1 + 0x54,*(char *)(param_1 + 0x75) + '\x03',2);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1400;
  }
  else {
    sub_080D0894(3,param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

