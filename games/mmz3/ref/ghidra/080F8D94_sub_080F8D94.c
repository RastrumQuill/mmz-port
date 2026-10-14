// sub_080F8D94 at 0x080F8D94 (thumb)

undefined4 sub_080F8D94(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838c1d4 + (uint)*(byte *)(param_1 + 1) * 4));
  if (iVar1 == 0) {
    sub_08008F34();
    sub_08003F54();
    sub_08002398();
  }
  return in_lr;
}

