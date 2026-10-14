// sub_080ECE5C at 0x080ECE5C (thumb)

undefined4 sub_080ECE5C(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    bVar2 = sub_08128A9C(uVar3 * 2 >> 0x11,9);
    *(byte *)(param_1 + 0x12) = (bVar2 & 3) + 1;
    sub_080ECF00(param_1 + 0x54);
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    sub_080E8F60(param_1);
  }
  return in_lr;
}

