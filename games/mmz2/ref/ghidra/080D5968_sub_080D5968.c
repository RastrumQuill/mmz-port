// sub_080D5968 at 0x080D5968 (thumb)

undefined8 sub_080D5968(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 - 1U < 0x51) {
    if ((char)(&DAT_0834a1d4)[param_2 * 0xc] == -1) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(char *)(param_1 + 0x270 + (int)(char)(&DAT_0834a1d4)[param_2 * 0xc]);
    }
  }
  else {
    iVar1 = -1;
  }
  return CONCAT44(in_lr,iVar1);
}

