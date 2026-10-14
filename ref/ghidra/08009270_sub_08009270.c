// sub_08009270 at 0x08009270 (thumb)

uint sub_08009270(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < 0x800) {
    iVar1 = (param_2 - 0x1000) + param_1 * 2;
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

