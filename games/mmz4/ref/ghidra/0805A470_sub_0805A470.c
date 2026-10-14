// sub_0805A470 at 0x0805A470 (thumb)

undefined4 sub_0805A470(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    sub_0801CF00(param_1,0xa307);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x71) == '\x04')) {
    sub_08001D30(&DAT_08c44564,(DAT_0202e0ca - 0x2b9) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44570,(DAT_0202deca - 7) * 0x20 + 0x200);
    if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\0')) {
      iVar1 = sub_080C2078(param_1);
      *(int *)(param_1 + 200) = iVar1;
      cVar2 = '\0';
      if (iVar1 == 0) {
        cVar2 = -1;
      }
      *(char *)(param_1 + 0xbf) = cVar2;
    }
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

