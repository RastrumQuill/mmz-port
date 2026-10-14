// sub_080FCB2C at 0x080FCB2C (thumb)

void sub_080FCB2C(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  bVar3 = **(byte **)(param_2 + 0x40);
  if (bVar3 < 0x80) {
    *(byte *)(param_2 + 5) = bVar3;
    *(byte **)(param_2 + 0x40) = *(byte **)(param_2 + 0x40) + 1;
  }
  else {
    bVar3 = *(byte *)(param_2 + 5);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  while( true ) {
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    bVar1 = *pbVar2;
    if ((((bVar1 & 0x83) != 0) && ((bVar1 & 0x40) == 0)) && (pbVar2[0x11] == bVar3)) break;
    pbVar2 = *(byte **)(pbVar2 + 0x34);
  }
  *pbVar2 = bVar1 | 0x40;
  return;
}

