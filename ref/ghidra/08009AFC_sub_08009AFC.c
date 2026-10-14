// sub_08009AFC at 0x08009AFC (thumb)

undefined8 sub_08009AFC(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_080065AC();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 0) {
    if (((((DAT_0200520c & 0x7f) == 5) && (DAT_02005208 != 0x400)) && (param_1 < 0xe1000)) &&
       (((0x6dfff < param_2 && (0x68fff < param_1)) && (param_2 < 0x8c000)))) {
      if (param_1 < 0xa5000) {
        iVar2 = 0xa5000;
      }
      else {
        iVar2 = 0x69000;
      }
      uVar1 = sub_080065AC(param_1 + iVar2,(param_2 + 0x5a000) - DAT_0202164c);
      uVar1 = uVar1 & 0xff;
    }
    else {
      uVar1 = 0;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

