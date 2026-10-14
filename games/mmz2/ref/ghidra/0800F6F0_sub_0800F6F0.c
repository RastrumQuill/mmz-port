// sub_0800F6F0 at 0x0800F6F0 (thumb)

undefined4 sub_0800F6F0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  uVar1 = 0x23000000;
  do {
    sub_08002EF0(uVar1 >> 0x18);
    uVar1 = uVar1 + 0x1000000;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return in_lr;
}

