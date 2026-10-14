// sub_080E9660 at 0x080E9660 (thumb)

undefined4 sub_080E9660(undefined4 param_1,undefined param_2,undefined param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  if (DAT_02030654 < 0x60) {
    (&DAT_02030658)[DAT_02030654] = param_1;
    (&DAT_020307d8)[DAT_02030654] = param_2;
    (&DAT_02030838)[DAT_02030654] = param_3;
    (&DAT_02030898)[DAT_02030654] = param_4;
    DAT_02030654 = DAT_02030654 + 1;
  }
  return in_lr;
}

