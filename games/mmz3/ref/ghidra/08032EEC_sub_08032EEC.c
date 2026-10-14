// sub_08032EEC at 0x08032EEC (thumb)

undefined8 sub_08032EEC(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (((*(byte *)(DAT_0203063c + param_2) & 1) == 0) ||
     (((((*(byte *)(DAT_0203063c + param_2) & 2) == 0 && (*(char *)(param_1 + 0x231) == '\0')) &&
       (*(byte *)(param_1 + 0xb4) != param_2)) && (*(byte *)(param_1 + 0xb5) != param_2)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

