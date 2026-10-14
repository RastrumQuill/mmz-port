// sub_08044DE8 at 0x08044DE8 (thumb)

ulonglong sub_08044DE8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08044DC0();
  iVar2 = sub_08044DD0(param_1);
  if ((uint)(iVar1 << 0x18) < (uint)(iVar2 << 0x18)) {
    iVar2 = *(int *)(DAT_0202e130 + 0x54);
    iVar1 = 0x4000;
  }
  else {
    iVar2 = *(int *)(DAT_0202e130 + 0x54);
    iVar1 = -0x4000;
  }
  uVar3 = sub_08044CD4(param_1,iVar2 + iVar1);
  return CONCAT44(in_lr,uVar3) & 0xffffffff000000ff;
}

