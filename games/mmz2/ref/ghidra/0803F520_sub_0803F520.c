// sub_0803F520 at 0x0803F520 (thumb)

undefined4 sub_0803F520(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar2 + 0x8c) & 4) != 0) {
      uVar1 = sub_0803F4A8(iVar2);
      sub_080355C8(iVar2,uVar1,0);
    }
    sub_080AE3DC(*param_2,*(undefined4 *)(iVar2 + 0x58),10);
    *(undefined *)(iVar2 + 0x13) = 1;
    if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) != 0) && (DAT_0202ec15 != -1)) {
      DAT_0202ec15 = DAT_0202ec15 + '\x01';
    }
  }
  return in_lr;
}

