// sub_080FAC50 at 0x080FAC50 (thumb)

undefined4 sub_080FAC50(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FAFE8(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0886741c + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_0801CFF0(param_1);
    }
    else {
      sub_080FB06C(param_1);
      sub_0801D1F4(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080FACC0(param_1);
  }
  return in_lr;
}

