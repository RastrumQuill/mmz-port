// sub_0803E470 at 0x0803E470 (thumb)

undefined4 sub_0803E470(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar2 + 0x8c) & 4) != 0) {
      uVar1 = sub_0803E3F8(iVar2);
      sub_080355C8(iVar2,uVar1,0);
    }
    sub_080AE3DC(*param_2,*(undefined4 *)(iVar2 + 0x58),10);
    if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) == 0) {
      *(undefined *)(iVar2 + 0x13) = 1;
    }
    else if (DAT_0202ec15 != -1) {
      DAT_0202ec15 = DAT_0202ec15 + '\x01';
    }
  }
  return in_lr;
}

