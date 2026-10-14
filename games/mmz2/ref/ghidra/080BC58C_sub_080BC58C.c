// sub_080BC58C at 0x080BC58C (thumb)

undefined4 sub_080BC58C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x180;
  if (*(byte *)(param_1 + 0x12) < 0x20) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BC36C(param_1);
  }
  return in_lr;
}

