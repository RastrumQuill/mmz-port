// sub_080CE258 at 0x080CE258 (thumb)

undefined4 sub_080CE258(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x10b);
    sub_08017700(param_1,0x5501);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x5c) + 4;
  *(int *)(param_1 + 0x5c) = iVar2;
  *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + (short)iVar2;
  sub_080CDFEC(param_1);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

