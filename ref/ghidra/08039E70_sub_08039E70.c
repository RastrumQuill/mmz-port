// sub_08039E70 at 0x08039E70 (thumb)

undefined4 sub_08039E70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  byte abStack_c [4];
  
  sub_080C8D70(abStack_c,&DAT_080c9284,4);
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar3 = 0x1700;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar3 = -0x1700;
  }
  *(int *)(param_1 + 0x4c) = iVar1 + iVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  sub_08029778(param_1,2);
  *(ushort *)(param_1 + 0xc0) = (ushort)abStack_c[*(byte *)(param_1 + 0x11)];
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  sub_080297C0(param_1);
  return in_lr;
}

