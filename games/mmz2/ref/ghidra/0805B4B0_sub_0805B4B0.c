// sub_0805B4B0 at 0x0805B4B0 (thumb)

undefined4 sub_0805B4B0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa906);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x15;
      *(undefined *)(param_1 + 0x13) = 3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x16;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

