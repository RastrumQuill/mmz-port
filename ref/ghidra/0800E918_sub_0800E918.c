// sub_0800E918 at 0x0800E918 (thumb)

undefined4 * sub_0800E918(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_02022aa8;
  if (DAT_02022ab6 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    DAT_02022ab6 = DAT_02022ab6 + -1;
    puVar1 = (undefined4 *)*DAT_02022aa8;
    *DAT_02022aa8 = DAT_02022aa4;
    DAT_02022aa8 = puVar1;
    DAT_02022aa4 = puVar2;
  }
  return puVar2;
}

