// sub_080B9330 at 0x080B9330 (thumb)

undefined4 sub_080B9330(int param_1)

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
    cVar2 = sub_0801C564(iVar3,*(char *)(param_1 + 0x11) + '\x01');
    if ((int)cVar2 == (uint)*(byte *)(iVar3 + 0x19d)) {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar4 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar4 = 8;
    }
    *(byte *)(param_1 + 0x41) = bVar1 & 0xf3 | bVar4;
    sub_080B93A8(param_1);
  }
  return in_lr;
}

