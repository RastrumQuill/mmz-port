// sub_0805FBE4 at 0x0805FBE4 (thumb)

undefined4 sub_0805FBE4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar2 = *(int *)(param_1 + 100);
  iVar4 = iVar2 - iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar3 - iVar2;
  }
  if (iVar4 < 0x100) {
    *(int *)(param_1 + 0x54) = iVar2;
    *(undefined2 *)(param_1 + 0xe) = 2;
    *(char *)(param_1 + 0x13) = -0x73 - *(char *)(param_1 + 0x12);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

