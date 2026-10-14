// sub_0807E9E4 at 0x0807E9E4 (thumb)

undefined4 sub_0807E9E4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(iVar3 + 0x4c);
  iVar5 = *(int *)(iVar3 + 0x50);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar3 = -1;
  if ((bVar1 & 1) == 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x4c) = iVar4 + iVar3 * 0x1000;
  *(int *)(param_1 + 0x50) = iVar5 + -0x1c00;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080033F0(param_1 + 0x6c,1);
  }
  return in_lr;
}

