// sub_08051994 at 0x08051994 (thumb)

undefined4 sub_08051994(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088549d8);
    sub_0801CF00(param_1,0xa104);
    sub_0801FE64(4,param_1 + 0x54);
    sub_080C1694(*(int *)(param_1 + 0x54) + -0x1800,*(undefined4 *)(param_1 + 0xb8),0,8);
    sub_080C1694(*(int *)(param_1 + 0x54) + 0x1800,*(undefined4 *)(param_1 + 0xb8),1,8);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x02'))
    goto LAB_08051a12;
    sub_08005784(param_1 + 0x74,&DAT_08854918);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08051a12:
  sub_0801CFF0(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((0x18 < bVar1) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

