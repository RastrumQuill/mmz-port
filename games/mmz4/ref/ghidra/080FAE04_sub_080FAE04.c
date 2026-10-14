// sub_080FAE04 at 0x080FAE04 (thumb)

undefined4 sub_080FAE04(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08867444);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
    sub_0801CF00(param_1,0x9604);
    if ((DAT_0202cac0 & 0xf) == 0) {
      uVar1 = 200;
    }
    else {
      uVar1 = 100;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xe) == '\x02') {
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x20100) {
      sub_08005784(param_1 + 0x74,&DAT_0886742c);
    }
    cVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x12),6);
    if (cVar2 == '\0') {
      sub_08002B10(0x16e);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      sub_0801CF00(param_1,0x9605);
      sub_08005784(param_1 + 0x74,&DAT_08867444);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if ((*(char *)(param_1 + 0xe) == '\x03') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

