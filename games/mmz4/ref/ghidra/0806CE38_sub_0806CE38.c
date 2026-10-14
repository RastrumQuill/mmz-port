// sub_0806CE38 at 0x0806CE38 (thumb)

undefined4 sub_0806CE38(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa16);
    sub_08002B10(0xd3);
    sub_08005784(param_1 + 0x74,&DAT_08858e08);
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0xdd);
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x02'))
    goto LAB_0806ce8e;
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806ce8e:
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xdc) + -1;
    *(char *)(param_1 + 0xdc) = cVar1;
    if (cVar1 != '\0') {
      sub_0801CF00(param_1,0xaa01);
      sub_0801CFF0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 3;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0x1e;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

