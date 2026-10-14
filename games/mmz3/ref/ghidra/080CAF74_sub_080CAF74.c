// sub_080CAF74 at 0x080CAF74 (thumb)

undefined4 sub_080CAF74(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  sub_08017700(param_1,0x2000);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + -0x1e000;
  }
  iVar1 = iVar1 >> 0xc;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = iVar1 + 0x1f;
  }
  *(char *)(param_1 + 0x25) = '\x1f' - ((char)iVar1 + (char)(iVar2 >> 5) * -0x20);
  *(byte *)(param_1 + 0x12) = (*(byte *)(param_1 + 0x11) & 3) + 5;
  return in_lr;
}

