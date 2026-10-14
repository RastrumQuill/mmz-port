// sub_08009E9C at 0x08009E9C (thumb)

int sub_08009E9C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08008360();
  if (((((DAT_0200520c & 0x7f) == 5) && (DAT_02005208 != 0x400)) && (param_1 < 0xe1000)) &&
     (((0x6dfff < param_2 && (0x68fff < param_1)) && (param_2 < 0x8c000)))) {
    if (param_1 < 0xa5000) {
      iVar2 = 0xa5000;
    }
    else {
      iVar2 = 0x69000;
    }
    iVar2 = sub_08008360(param_1 + iVar2,(param_2 + 0x5a000) - DAT_0202164c);
    if (iVar2 < iVar1) {
      return iVar2;
    }
  }
  return iVar1;
}

