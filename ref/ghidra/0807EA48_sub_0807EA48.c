// sub_0807EA48 at 0x0807EA48 (thumb)

undefined4 sub_0807EA48(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar3 + 0xf) < 3) {
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
    *(int *)(param_1 + 0x4c) = iVar4 + iVar3 * 0xe00;
    *(int *)(param_1 + 0x50) = iVar5 + -0x1700;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0807EAB0(param_1);
  }
  return in_lr;
}

