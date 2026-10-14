// sub_0810D214 at 0x0810D214 (thumb)

undefined4 sub_0810D214(undefined4 param_1,undefined param_2,undefined param_3)

{
  undefined4 in_lr;
  
  if (DAT_0202edc4 < 0x60) {
    (&DAT_0202edc8)[DAT_0202edc4] = param_1;
    (&DAT_0202ef48)[DAT_0202edc4] = param_2;
    (&DAT_0202efa8)[DAT_0202edc4] = param_3;
    (&DAT_0202f008)[DAT_0202edc4] = 0xffff;
    DAT_0202edc4 = DAT_0202edc4 + 1;
  }
  return in_lr;
}

