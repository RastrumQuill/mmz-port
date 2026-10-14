// sub_081126EC at 0x081126EC (thumb)

undefined4 sub_081126EC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ea78;
  *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
  if (uVar1 != 0xffffffff) {
    sub_08002A98(uVar1 & 0xffff);
    DAT_0202ea78 = 0xffffffff;
  }
  *(undefined *)(param_1 + 0xdcd) = 1;
  *(undefined4 *)(param_1 + 0xdd4) = 0xfffffff;
  sub_08112080(param_1,5);
  return in_lr;
}

