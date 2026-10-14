// sub_0809ED18 at 0x0809ED18 (thumb)

undefined4 sub_0809ED18(undefined4 param_1,undefined4 param_2,undefined param_3,uint param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0xb;
    *(undefined4 *)(iVar1 + 0x14) = 0x809ed75;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0x10) = (byte)(-(param_4 & 0xff) >> 0x1f);
    *(undefined *)(iVar1 + 0x12) = param_3;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
  }
  return in_lr;
}

