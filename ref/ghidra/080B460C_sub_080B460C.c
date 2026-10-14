// sub_080B460C at 0x080B460C (thumb)

char sub_080B460C(int param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 << 0x18) >> 0x17;
  if (param_2 < (byte)(&DAT_082b7259)[uVar2]) {
    cVar1 = (&DAT_082b7258)[uVar2] + param_2;
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}

