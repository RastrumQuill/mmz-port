// sub_080136A0 at 0x080136A0 (thumb)

undefined8 sub_080136A0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_0202eb98;
  if (DAT_0202eba2 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    DAT_0202eba2 = DAT_0202eba2 + -1;
    puVar1 = (undefined4 *)*DAT_0202eb98;
    *DAT_0202eb98 = DAT_0202eb94;
    DAT_0202eb98 = puVar1;
    DAT_0202eb94 = puVar2;
  }
  return CONCAT44(in_lr,puVar2);
}

