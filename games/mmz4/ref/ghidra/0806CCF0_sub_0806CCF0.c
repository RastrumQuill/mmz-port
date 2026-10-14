// sub_0806CCF0 at 0x0806CCF0 (thumb)

undefined4 sub_0806CCF0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa13);
    *(undefined4 *)(param_1 + 0x60) = 0xfffff9c0;
    *(undefined *)(param_1 + 0x12) = 6;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
      sub_0801CF00(param_1,0xaa1e);
      sub_0801CFF0(param_1);
      sub_08005784(param_1 + 0x74,&DAT_08858dd8);
      sub_080CA0E0(param_1,1,0);
      sub_08002B10(0xce);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (-0x180 < iVar2) {
      *(undefined *)(param_1 + 0xd) = 0x1f;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

