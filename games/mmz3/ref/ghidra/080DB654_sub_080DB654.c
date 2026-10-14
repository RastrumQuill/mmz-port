// sub_080DB654 at 0x080DB654 (thumb)

undefined4 sub_080DB654(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) != '\0') && ((DAT_02030104 & 0x10) != 0)) {
    if ((DAT_02002650 & 0x7f) == 10) {
      puVar2 = &DAT_020302e4;
      uVar1 = 0;
    }
    else {
      puVar2 = &DAT_020302e8;
      uVar1 = 0x3c0000;
    }
    *puVar2 = uVar1;
  }
  sub_080C9918(param_1);
  return in_lr;
}

