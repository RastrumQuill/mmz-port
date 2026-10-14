// sub_080DE148 at 0x080DE148 (thumb)

undefined4 sub_080DE148(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (bVar2 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if ((byte)(cVar1 - 1U) < 0xc) {
    if ((bVar2 & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080de1b2;
    }
  }
  else if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080de1b2;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080de1b2:
  *(byte *)(param_1 + 10) = bVar2;
  return in_lr;
}

