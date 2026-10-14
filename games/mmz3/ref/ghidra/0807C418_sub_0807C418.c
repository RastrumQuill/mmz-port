// sub_0807C418 at 0x0807C418 (thumb)

undefined4 sub_0807C418(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083642b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0807C870(param_1);
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083642c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807C494(param_1);
  }
  return in_lr;
}

