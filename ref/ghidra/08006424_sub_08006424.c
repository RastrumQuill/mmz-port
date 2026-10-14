// sub_08006424 at 0x08006424 (thumb)

undefined4 sub_08006424(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = ((DAT_02005200 >> 8) + -0x78) * 0x100;
  local_14 = ((DAT_02005204 >> 8) + -0x50) * 0x100;
  uVar1 = sub_08006AA4();
  iVar4 = *(int *)((DAT_02005208 >> ((uVar1 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar1 & 0xff]);
  sub_080C8A98(&local_18,*(undefined4 *)(*(int *)(iVar4 + 4) + 8));
  iVar3 = 0;
  iVar2 = 2;
  do {
    if (*(int *)((int)&DAT_02004ff8 + iVar3) != 0) {
      sub_080C8A9C((int)&DAT_02004ff0 + iVar3,iVar4);
    }
    iVar3 = iVar3 + 0x70;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  DAT_02004f30 = DAT_02004f30 & 0xc1ff;
  return in_lr;
}

