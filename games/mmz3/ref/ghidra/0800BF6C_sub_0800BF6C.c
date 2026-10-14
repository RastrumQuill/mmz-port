// sub_0800BF6C at 0x0800BF6C (thumb)

undefined4 sub_0800BF6C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  uint local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = ((param_1 >> 0xc) + -1) * 0x10000;
  uVar2 = ((param_2 >> 0xc) + -1) * 0x10000;
  local_c = iVar1 + 0x3c0000U >> 0x10 | uVar2;
  local_8 = 0x20002;
  uStack_4 = in_lr;
  sub_080092B4(iVar1 >> 0x10,(int)uVar2 >> 0x10,&local_c);
  return uStack_4;
}

