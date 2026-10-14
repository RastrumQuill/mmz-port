// sub_0803DB10 at 0x0803DB10 (thumb)

undefined4 sub_0803DB10(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar1 + 0x8c) & 4) != 0) {
      sub_080355C8(iVar1,*(undefined4 *)(iVar1 + 0x28),0);
    }
    sub_080AE3DC(*param_2,*(undefined4 *)(iVar1 + 0x58),10);
    if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) != 0) && (DAT_0202ec15 != -1)) {
      DAT_0202ec15 = DAT_0202ec15 + '\x01';
    }
  }
  return in_lr;
}

