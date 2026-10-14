// sub_08071658 at 0x08071658 (thumb)

undefined4 sub_08071658(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0xc))) {
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08071958(param_1);
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar4 = *(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar4 = FUN_080fe2f8(iVar4,0x28);
    *(int *)(param_1 + 0x5c) = iVar4;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    iVar5 = (*(int *)(iVar5 + 0x58) + -0x2200) - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar5;
    iVar5 = FUN_080fe2f8(iVar5,0x28);
    *(int *)(param_1 + 0x60) = iVar5 + 0x280;
    bVar1 = 0 < iVar4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

