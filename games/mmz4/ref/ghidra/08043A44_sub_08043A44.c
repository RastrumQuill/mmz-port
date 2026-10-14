// sub_08043A44 at 0x08043A44 (thumb)

undefined4 sub_08043A44(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xfa) == '\x02') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_080D0894(2,param_1 + 0x54);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = sub_08043BD0(param_1,3);
    if ((cVar1 != '\x01') && ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0)) {
      if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
        sub_080D0894(1,param_1 + 0x54);
LAB_08043b22:
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
        sub_08043B70(param_1);
        return in_lr;
      }
      goto LAB_08043b5c;
    }
    sub_0801CF00(param_1,0x8111);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08005794(param_1 + 0x74,&DAT_088527c4,7,0xffffffff,0xffffffff,0xffffffff);
    sub_08002B10(0x3d);
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      if (*(char *)(param_1 + 0x73) == '\x03') goto LAB_08043b22;
      goto LAB_08043b5c;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_08043b5c;
    sub_0801CF00(param_1,0x8112);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08043b5c:
  sub_0801CFF0(param_1);
  return in_lr;
}

