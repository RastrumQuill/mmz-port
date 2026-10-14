// sub_0805A8B0 at 0x0805A8B0 (thumb)

undefined4 sub_0805A8B0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08001D30(&DAT_08c4458c,(DAT_0202e0ce - 0x2b9) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44598,(DAT_0202dece - 7) * 0x20 + 0x200);
    if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\x01')) {
      iVar1 = sub_08094ED4(param_1,0);
      *(int *)(param_1 + 200) = iVar1;
      cVar2 = -1;
      if (iVar1 != 0) {
        cVar2 = '\x01';
      }
      *(char *)(param_1 + 0xbf) = cVar2;
    }
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    sub_0801CF00(param_1,0xa309);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

