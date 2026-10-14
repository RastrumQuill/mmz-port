// sub_080ACD14 at 0x080ACD14 (thumb)

undefined4 sub_080ACD14(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if ((DAT_02022ae9 & 0x40) == 0) {
      sub_0809C930(param_1,0);
    }
    else {
      sub_0809C930(param_1,3);
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  sub_0809C980(param_1);
  if (((DAT_02022ae9 & 0x40) != 0) &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

