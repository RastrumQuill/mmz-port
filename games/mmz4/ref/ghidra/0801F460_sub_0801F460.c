// sub_0801F460 at 0x0801F460 (thumb)

undefined4 sub_0801F460(char param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ea88;
  if (param_1 == '\0') {
    sub_0801F8CC(&DAT_0202e9f8);
  }
  if (DAT_0202ea10 != '\0') {
    sub_08006D2C(uVar1);
  }
  sub_08027690(&DAT_0202e920);
  sub_0801F8E8(&DAT_0202e9f8);
  return in_lr;
}

