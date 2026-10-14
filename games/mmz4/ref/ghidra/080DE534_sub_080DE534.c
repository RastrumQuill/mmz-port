// sub_080DE534 at 0x080DE534 (thumb)

undefined4 sub_080DE534(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (bVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DE598(param_1);
  }
  else if ((byte)(cVar1 - 1U) < 0x20) {
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  return in_lr;
}

