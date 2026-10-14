// sub_0806865C at 0x0806865C (thumb)

undefined4 sub_0806865C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa91c);
    sub_08002B5C(0x61);
    *(undefined2 *)(param_1 + 0xe0) = 0;
    sub_08002B10(0x67);
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') ||
       ((*(char *)(param_1 + 0x71) != '\x03' && ('\x01' < *(char *)(param_1 + 0x72)))))
    goto LAB_080686ba;
    sub_080C844C(param_1,4,0,0);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080686ba:
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(undefined *)(param_1 + 0xd) = 0x27;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

