// sub_08091404 at 0x08091404 (thumb)

undefined4 sub_08091404(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar5 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(param_1 + 0x54);
    sub_08007390(param_1 + 0x74,&DAT_0836605c);
    *(uint *)(param_1 + 0x5c) = (uint)(0 < iVar5 - iVar3) * 0x200 + -0x100;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  if (cVar1 == '\x03') {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 100);
  iVar5 = iVar3 - iVar4;
  if (iVar5 < 0) {
    iVar5 = iVar4 - iVar3;
  }
  if (iVar5 < 0x100) {
    *(int *)(param_1 + 0x54) = iVar3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

