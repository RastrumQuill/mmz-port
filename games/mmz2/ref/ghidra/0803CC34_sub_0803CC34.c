// sub_0803CC34 at 0x0803CC34 (thumb)

undefined4 sub_0803CC34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xc) & 0xffff00) == 0x20700) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0803CE30(param_1);
  }
  else {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08338d20 + (uint)*(byte *)(param_1 + 0xe) * 4));
    sub_080128D4(param_1);
    if ((1 < *(byte *)(param_1 + 0xe)) && (iVar1 = sub_0803D120(param_1), iVar1 != 0)) {
      sub_0803CEBC(param_1);
    }
  }
  return in_lr;
}

