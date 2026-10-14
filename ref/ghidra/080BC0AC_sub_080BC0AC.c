// sub_080BC0AC at 0x080BC0AC (thumb)

undefined4 sub_080BC0AC(undefined4 param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_02023224;
  if (DAT_02023224 < 0x30) {
    (&DAT_02023228)[DAT_02023224] = param_1;
    (&DAT_020232e8)[iVar1] = param_2;
    (&DAT_02023318)[DAT_02023224] = param_3;
    (&DAT_02023348)[DAT_02023224] = 0xffff;
    DAT_02023224 = DAT_02023224 + 1;
  }
  return in_lr;
}

