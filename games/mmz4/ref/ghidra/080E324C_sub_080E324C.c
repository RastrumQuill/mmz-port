// sub_080E324C at 0x080E324C (thumb)

undefined4 sub_080E324C(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (1 < *(byte *)(iVar4 + 0xc)) {
LAB_080e326a:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E32C4(param_1);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  bVar3 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  if (bVar3 == 0) goto LAB_080e326a;
  bVar2 = cVar1 - 1;
  if (bVar2 < 0xc) {
    if ((bVar3 & 1) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080e32ba;
    }
  }
  else {
    if (0x18 < bVar2) {
      return in_lr;
    }
    if ((bVar3 & 3) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080e32ba;
    }
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080e32ba:
  *(byte *)(param_1 + 10) = bVar3;
  return in_lr;
}

