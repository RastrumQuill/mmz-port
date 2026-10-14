// sub_0805FF7C at 0x0805FF7C (thumb)

undefined4 sub_0805FF7C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = sub_080608A8(param_1);
  if (cVar2 != '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

