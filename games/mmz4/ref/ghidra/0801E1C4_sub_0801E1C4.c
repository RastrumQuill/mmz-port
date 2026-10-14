// sub_0801E1C4 at 0x0801E1C4 (thumb)

undefined8 sub_0801E1C4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_0202e888;
  if (DAT_0202e892 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    DAT_0202e892 = DAT_0202e892 + -1;
    puVar1 = (undefined4 *)*DAT_0202e888;
    *DAT_0202e888 = DAT_0202e884;
    DAT_0202e888 = puVar1;
    DAT_0202e884 = puVar2;
  }
  return CONCAT44(in_lr,puVar2);
}

