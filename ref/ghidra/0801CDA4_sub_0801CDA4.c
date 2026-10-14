// sub_0801CDA4 at 0x0801CDA4 (thumb)

char sub_0801CDA4(byte *param_1)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = 0x10;
  do {
    uVar1 = uVar1 >> 1;
    if ((*param_1 & uVar1) != 0) {
      cVar2 = cVar2 + '\x01';
    }
  } while (uVar1 != 0);
  return cVar2;
}

