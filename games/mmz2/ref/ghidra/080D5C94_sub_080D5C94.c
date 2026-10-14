// sub_080D5C94 at 0x080D5C94 (thumb)

undefined8 sub_080D5C94(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_02000d14 & 0xc0) != 0) {
    iVar1 = 1;
    if ((DAT_02000d14 & 0x40) != 0) {
      iVar1 = -1;
    }
    param_2 = param_2 + iVar1;
    if ((int)param_2 < 0) {
      param_2 = 0;
    }
    else if (2 < param_2) {
      param_2 = 2;
    }
  }
  return CONCAT44(in_lr,(int)(char)param_2);
}

