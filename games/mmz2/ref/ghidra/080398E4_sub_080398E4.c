// sub_080398E4 at 0x080398E4 (thumb)

undefined4 sub_080398E4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar1 + 0x8c) & 4) != 0) {
      sub_080355C8(iVar1,*(undefined4 *)(iVar1 + 0x28),*(undefined *)(iVar1 + 0x11));
    }
    sub_080AE3DC(*param_2,*(undefined4 *)(iVar1 + 0x58),(&DAT_083363a8)[*(byte *)(iVar1 + 0x11)]);
    if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) != 0) {
      if (DAT_0202ec15 != -1) {
        DAT_0202ec15 = DAT_0202ec15 + '\x01';
      }
      if (*(char *)(iVar1 + 0x11) != '\0') {
        return in_lr;
      }
    }
    *(undefined *)(iVar1 + 0x13) = 1;
  }
  return in_lr;
}

