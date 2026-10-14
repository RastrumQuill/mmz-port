// sub_0806B610 at 0x0806B610 (thumb)

undefined4 sub_0806B610(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa03);
    sub_08002B10(0xc6);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      sub_08005784(param_1 + 0x74,&DAT_08858ca0);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar1 = 0xfffffcc0;
      }
      else {
        uVar1 = 0x340;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0 < iVar2) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

