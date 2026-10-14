// sub_080B470C at 0x080B470C (thumb)

int sub_080B470C(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0xff) - 1 < 0x4e) {
    if ((char)(&DAT_082b6ea4)[(param_2 & 0xff) * 0xc] == -1) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(char *)(param_1 + 0x1ea + (int)(char)(&DAT_082b6ea4)[(param_2 & 0xff) * 0xc]);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

