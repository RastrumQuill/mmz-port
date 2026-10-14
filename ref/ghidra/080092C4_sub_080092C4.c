// sub_080092C4 at 0x080092C4 (thumb)

uint sub_080092C4(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < 0x400) {
    iVar1 = (param_2 - 0x1000) + param_1 * 4;
    if (iVar1 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = -iVar1;
    }
  }
  else {
    param_2 = ~param_2;
  }
  return param_2;
}

