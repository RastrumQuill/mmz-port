// sub_0803D060 at 0x0803D060 (thumb)

undefined4 sub_0803D060(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar1 + 0x8c) & 4) != 0) {
      sub_080357CC(iVar1,*(undefined4 *)(iVar1 + 0x28),0);
    }
    if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) != 0) && (DAT_0202ec16 != -1)) {
      DAT_0202ec16 = DAT_0202ec16 + '\x01';
    }
  }
  return in_lr;
}

