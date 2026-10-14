// sub_08006E94 at 0x08006E94 (thumb)

undefined4 sub_08006E94(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (DAT_02000c80 == 4) {
    local_18 = sub_08128954(DAT_02000c78 + -0xf000,0x3c000);
    DAT_02000c78 = local_18 + 0xf000;
    local_18 = local_18 + 0x7800;
  }
  else {
    local_18 = ((DAT_02000c78 >> 8) + -0x78) * 0x100;
  }
  local_14 = ((DAT_02000c7c >> 8) + -0x50) * 0x100;
  iVar3 = *(int *)(&DAT_08829090 + (uint)(DAT_0202cac0 >> 4) * 4 + (DAT_02000c80 & 0x7f) * 8);
  sub_08128884(&local_18,*(undefined4 *)(*(int *)(iVar3 + 4) + 0xc));
  iVar2 = 0;
  iVar1 = 2;
  do {
    if (*(int *)((int)&DAT_02000ad8 + iVar2) != 0) {
      sub_08128888((int)&DAT_02000ad0 + iVar2,iVar3);
    }
    iVar2 = iVar2 + 0x88;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_02000a00 = DAT_02000a00 & 0xc1ff;
  return in_lr;
}

