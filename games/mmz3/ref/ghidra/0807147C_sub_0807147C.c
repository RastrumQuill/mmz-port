// sub_0807147C at 0x0807147C (thumb)

undefined4 sub_0807147C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x17;
    iVar4 = (uint)*(byte *)(param_1 + 0x11) * -0x6000;
    iVar5 = iVar4 + 0x3000;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < 0) {
      iVar5 = iVar4 + 0x300f;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 4;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(undefined4 *)(param_1 + 0x60) = 0x200;
    bVar1 = 0 < iVar5 >> 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(undefined *)(param_1 + 0x12) = 0x10;
    sub_080177CC(param_1,0x2201,6,3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

