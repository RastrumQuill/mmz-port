// sub_0801D520 at 0x0801D520 (thumb)

uint sub_0801D520(int param_1,uint param_2)

{
  int iVar1;
  
  param_2 = param_2 & 0xff;
  iVar1 = *(byte *)(param_1 + 0x11e) - param_2;
  if (iVar1 < 0) {
    param_2 = param_2 + iVar1 & 0xff;
    iVar1 = 0;
  }
  *(byte *)(param_1 + 0x11e) = (byte)iVar1;
  return param_2;
}

