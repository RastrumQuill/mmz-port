// sub_08000A70 at 0x08000A70 (thumb)

undefined8 sub_08000A70(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_03000380 + (uint)DAT_03001582 * 0x900 + (uint)DAT_03001580 * 4;
  uVar1 = param_1 + 3U >> 2;
  if (0x240 - DAT_03001580 < uVar1) {
    puVar2 = (undefined *)0x0;
  }
  else {
    DAT_03001580 = DAT_03001580 + (short)uVar1;
  }
  return CONCAT44(in_lr,puVar2);
}

