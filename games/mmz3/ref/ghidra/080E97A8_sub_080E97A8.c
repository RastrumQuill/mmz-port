// sub_080E97A8 at 0x080E97A8 (thumb)

void sub_080E97A8(byte *param_1,int param_2)

{
  byte bVar1;
  
  while ((bVar1 = *param_1, bVar1 < 0xfd && (param_2 != 0))) {
    if (bVar1 < 0xf0) {
      param_2 = param_2 + -1;
    }
    else if (bVar1 == 0xf0) {
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
    else if (bVar1 < 0xf9) {
      param_1 = param_1 + 1;
    }
    param_1 = param_1 + 1;
  }
  return;
}

