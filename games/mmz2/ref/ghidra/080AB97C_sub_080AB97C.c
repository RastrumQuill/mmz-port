// sub_080AB97C at 0x080AB97C (thumb)

undefined4 sub_080AB97C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
     (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\x1f')) {
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      bVar1 = *(byte *)(param_1 + 0x12);
      if ((bVar1 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x12) = bVar1 - 1;
      if (bVar1 == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(undefined *)(param_1 + 0x12) = 0x40;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 == -1) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
        sub_080ABA24(param_1);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080ABA24(param_1);
  }
  return in_lr;
}

