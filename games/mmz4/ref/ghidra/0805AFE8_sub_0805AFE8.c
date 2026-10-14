// sub_0805AFE8 at 0x0805AFE8 (thumb)

undefined4 sub_0805AFE8(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xbf);
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    sub_0801CF00(param_1,0xa30c);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0x13) != '\0') {
      sub_08001D30(&DAT_08c445a0,(DAT_0202e0d0 - 0x2b9) * 0x20 + 0x10000);
      sub_08002208(&DAT_08c445ac,(DAT_0202ded0 - 7) * 0x20 + 0x200);
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x4c00;
      if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\x04')) {
        iVar1 = sub_080C253C(param_1,&local_18,0);
        *(int *)(param_1 + 200) = iVar1;
        cVar2 = -1;
        if (iVar1 != 0) {
          cVar2 = '\x04';
        }
        *(char *)(param_1 + 0xbf) = cVar2;
      }
      *(undefined *)(param_1 + 0x13) = 0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

