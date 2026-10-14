// sub_0800EDD8 at 0x0800EDD8 (thumb)

undefined4 sub_0800EDD8(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 < 0x1e5000) || ((*param_1 < 0x23a000 && (0x10e000 < param_1[1])))) {
    uVar1 = 0;
  }
  else if (*param_1 < 0x2df001) {
    if (*param_1 < 0x2a3001) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

