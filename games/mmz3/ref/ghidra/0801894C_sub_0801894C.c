// sub_0801894C at 0x0801894C (thumb)

undefined8 sub_0801894C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_020300d8;
  if (DAT_020300e2 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    DAT_020300e2 = DAT_020300e2 + -1;
    puVar1 = (undefined4 *)*DAT_020300d8;
    *DAT_020300d8 = DAT_020300d4;
    DAT_020300d8 = puVar1;
    DAT_020300d4 = puVar2;
  }
  return CONCAT44(in_lr,puVar2);
}

