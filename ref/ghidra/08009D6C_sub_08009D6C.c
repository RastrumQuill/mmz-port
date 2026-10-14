// sub_08009D6C at 0x08009D6C (thumb)

int sub_08009D6C(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08007EE0();
  if (iVar1 == 0) {
    if (((((DAT_0200520c & 0x7f) == 5) && (DAT_02005208 != 0x400)) && (param_1 < 0xe1000)) &&
       (((0x6dfff < param_2 && (0x68fff < param_1)) && (param_2 < 0x8c000)))) {
      if (param_1 < 0xa5000) {
        iVar1 = 0xa5000;
      }
      else {
        iVar1 = 0x69000;
      }
      iVar1 = sub_08007EE0(param_1 + iVar1,(param_2 + 0x5a000) - DAT_0202164c);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

