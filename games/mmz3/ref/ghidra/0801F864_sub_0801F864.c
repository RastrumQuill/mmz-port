// sub_0801F864 at 0x0801F864 (thumb)

undefined8 sub_0801F864(uint param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  if (param_1 < 8) {
    bVar1 = (&DAT_02030334)[param_1];
  }
  else {
    bVar1 = (&DAT_02030334)[param_1];
  }
  return CONCAT44(in_lr,&UNK_08349590 + (uint)bVar1 * 8);
}

