// sub_08057DB8 at 0x08057DB8 (thumb)

undefined4 sub_08057DB8(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_08017700(param_1,0xb200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,&DAT_083605ac);
  sub_080177F4(param_1);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (!bVar1) goto LAB_08057e20;
  }
  else if (bVar1) goto LAB_08057e20;
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_08057e20:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (((cVar2 == '\0') && ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0)) &&
     (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) {
    sub_080579A8(param_1);
  }
  return in_lr;
}

