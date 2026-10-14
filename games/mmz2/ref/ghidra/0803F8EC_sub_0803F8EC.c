// sub_0803F8EC at 0x0803F8EC (thumb)

undefined4 sub_0803F8EC(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    sub_080AE3DC(*param_2,*(undefined4 *)(iVar1 + 0x58),8);
    *(undefined *)(iVar1 + 0x13) = 1;
  }
  return in_lr;
}

