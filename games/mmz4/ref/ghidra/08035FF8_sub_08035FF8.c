// sub_08035FF8 at 0x08035FF8 (thumb)

undefined4 sub_08035FF8(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  bVar1 = false;
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x1902);
    sub_0803C490(param_1,9);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x153) & 1) == 0) {
    sub_0803A3BC(param_1,0x1902);
  }
  else if (*(byte *)(param_1 + 0x16e) < 8) {
    sub_0801CFC8(param_1,0x1902,*(byte *)(param_1 + 0x16e),*(undefined *)(param_1 + 0x16f));
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') || (bVar1)) {
    if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
      *(undefined *)(param_1 + 0x101) = 3;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_08035F84(param_1);
    }
    else {
      *(undefined *)(param_1 + 0x101) = 2;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_08035F34(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0x14d) = 2;
  }
  return in_lr;
}

