// sub_080D44FC at 0x080D44FC (thumb)

undefined4 sub_080D44FC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    if (0x7b < bVar2) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (0x14 < bVar2) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if ((cVar1 == '\x02') && (0x20 < bVar2)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D3B44(param_1);
  }
  return in_lr;
}

