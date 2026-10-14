// sub_0804B5D8 at 0x0804B5D8 (thumb)

undefined4 sub_0804B5D8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
  iVar2 = *(int *)(param_1 + 0x50) + 0x400;
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar4 < iVar2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + 0x1000;
  }
  iVar4 = iVar4 - *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xc0) + (iVar4 >> 1);
  iVar2 = (iVar4 >> 0xc) + -1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  sub_0800561C(param_1 + 0x74,&DAT_082aef48 + iVar2 * 0x1c);
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    cVar1 = sub_080C8CB0(uVar3 * 2 >> 0x11,0x18);
    *(char *)(param_1 + 0x12) = cVar1 + '\x10';
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080033F0(param_1 + 0x6c,0xd);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

