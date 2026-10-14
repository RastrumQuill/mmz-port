// sub_080CE2C0 at 0x080CE2C0 (thumb)

undefined4 sub_080CE2C0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x5c) + -4;
  *(int *)(param_1 + 0x5c) = iVar2;
  *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + (short)iVar2;
  sub_080CDFEC(param_1);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08004768(0x10b);
    *(undefined *)(iVar3 + 0xbd) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

