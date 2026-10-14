// sub_080E2424 at 0x080E2424 (thumb)

undefined4 sub_080E2424(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (bVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E2480(param_1);
  }
  else if ((byte)(cVar1 - 1U) < 4) {
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  return in_lr;
}

