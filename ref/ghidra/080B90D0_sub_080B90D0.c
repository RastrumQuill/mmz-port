// sub_080B90D0 at 0x080B90D0 (thumb)

undefined4 sub_080B90D0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0x4c) =
       *(int *)(&DAT_082b86c4 + (uint)*(byte *)(param_1 + 0x10) * 8) +
       (uint)*(byte *)(param_1 + 0x11) * 0x1000;
  iVar3 = sub_080B9B78(param_1);
  if (*(char *)(iVar3 + 2) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    iVar3 = *(int *)(iVar3 + 0x10);
    cVar2 = sub_0801C510(iVar3,*(char *)(param_1 + 0x11) + '\x01');
    if ((int)cVar2 == (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + iVar3 + 0x18a)) {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar4 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar4 = 8;
    }
    *(byte *)(param_1 + 0x41) = bVar1 & 0xf3 | bVar4;
    sub_080B914C(param_1);
  }
  return in_lr;
}

