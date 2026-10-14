// sub_08089650 at 0x08089650 (thumb)

undefined4 sub_08089650(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08088120();
  sub_080033F0(param_1 + 0x6c,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar2 = -0xd00;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar2 = 0x1000;
  }
  *(int *)(param_1 + 0x4c) = iVar1 + iVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080896B0(param_1);
  return in_lr;
}

