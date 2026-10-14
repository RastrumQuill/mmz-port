// sub_0800BF10 at 0x0800BF10 (thumb)

undefined4 sub_0800BF10(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  uint local_18;
  uint local_14;
  
  iVar2 = ((param_1 >> 0xc) + -1) * 0x10000;
  uVar3 = ((param_2 >> 0xc) + -1) * 0x10000;
  local_18 = iVar2 + 0x780000U >> 0x10 | uVar3;
  local_14 = 0x20002;
  sVar1 = sub_0800BED0(param_1,param_2 + 0x3000);
  if (sVar1 == 0) {
    local_14 = local_14 & 0xffff | 0x30000;
  }
  sub_080092B4(iVar2 >> 0x10,(int)uVar3 >> 0x10,&local_18);
  return in_lr;
}

