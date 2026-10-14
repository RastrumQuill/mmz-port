// sub_0803E920 at 0x0803E920 (thumb)

undefined4 sub_0803E920(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0x11) - 1;
  if (iVar2 < 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0803E98C(param_1);
  }
  else {
    *(char *)(param_1 + 0x11) = (char)iVar2;
    if ((0x30U - iVar2 & 7) == 0) {
      sub_08006E08(param_1 + 0x74,&DAT_08339eb0);
    }
    else {
      sub_08006E08(param_1 + 0x74,0);
    }
  }
  uVar1 = sub_080BF258(param_1,*(undefined *)(param_1 + 0x13));
  *(undefined *)(param_1 + 0x13) = uVar1;
  return in_lr;
}

