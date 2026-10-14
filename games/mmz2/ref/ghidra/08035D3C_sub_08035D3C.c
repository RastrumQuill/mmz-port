// sub_08035D3C at 0x08035D3C (thumb)

undefined4 sub_08035D3C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08035CD8(param_2);
  if ((iVar1 < 0) || (iVar1 = sub_08035D04(iVar1,param_2), iVar1 < 0)) {
    sub_0801E9FC(param_1,param_2);
  }
  else {
    sub_080EF120(param_1,param_2,param_3,*(undefined4 *)(&DAT_0833466c + iVar1 * 4));
  }
  return in_lr;
}

