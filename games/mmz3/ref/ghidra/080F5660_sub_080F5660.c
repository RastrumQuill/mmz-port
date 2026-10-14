// sub_080F5660 at 0x080F5660 (thumb)

undefined4 sub_080F5660(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xdf8) = 0;
  sub_0800393C(&DAT_08547438,(DAT_020023c6 & 0xc) << 0xc);
  sub_08003E14(&DAT_08547444,0);
  iVar1 = param_1 + 0xed8;
  sub_080FE110(&DAT_085250c8,iVar1,0x1e0);
  sub_080F5CE0(param_1,iVar1);
  sub_080040A8(0x43,0);
  sub_080041E4(0x43);
  sub_08004230(0x43);
  sub_080040A8(0x44,0);
  sub_080040A8(0x40,0);
  *(undefined *)(param_1 + 0xdf9) = 0x40;
  sub_08003B28(iVar1,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}

