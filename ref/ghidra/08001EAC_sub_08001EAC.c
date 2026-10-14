// sub_08001EAC at 0x08001EAC (thumb)

undefined8 sub_08001EAC(ushort param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(&DAT_080d2c08 + (uint)param_1 * 8) == 2) {
    if ((DAT_02000019 == '\0') || (DAT_02000019 == '\x05')) {
      DAT_02000019 = (char)param_1;
    }
  }
  else {
    sub_080C74C0((uint)param_1);
  }
  return CONCAT44(in_lr,(int)(short)param_1);
}

