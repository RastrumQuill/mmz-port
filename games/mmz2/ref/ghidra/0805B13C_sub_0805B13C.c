// sub_0805B13C at 0x0805B13C (thumb)

undefined4 sub_0805B13C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa903);
    *(undefined *)(param_1 + 0x12) = 6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x10;
      *(undefined *)(param_1 + 0x13) = 3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x11;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

