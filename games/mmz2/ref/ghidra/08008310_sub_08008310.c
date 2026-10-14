// sub_08008310 at 0x08008310 (thumb)

undefined8 sub_08008310(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  param_2 = param_2 >> 0xc;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 < 0x4f6)) {
    iVar1 = (int)(short)(&DAT_020017e0)[param_2 * (uint)DAT_020017e0 + (param_1 >> 0xc) + 2];
  }
  else {
    iVar1 = -1;
  }
  return CONCAT44(in_lr,iVar1);
}

