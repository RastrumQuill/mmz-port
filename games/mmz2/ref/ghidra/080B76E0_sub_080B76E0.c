// sub_080B76E0 at 0x080B76E0 (thumb)

undefined4 sub_080B76E0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

