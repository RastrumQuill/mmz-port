// sub_080DB854 at 0x080DB854 (thumb)

undefined4 sub_080DB854(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_1c = *(int *)(param_1 + 0x54) + (uVar1 * 2 + -1) * -0xc00;
  local_18 = *(int *)(param_1 + 0x58) + -0x1c00;
  iVar3 = 0;
  iVar2 = 1;
  do {
    sub_080D4898(&local_1c,&DAT_08865064 + iVar3,0,uVar1 | uVar1 << 4);
    iVar3 = iVar3 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}

