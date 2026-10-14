// sub_0803C92C at 0x0803C92C (thumb)

undefined4 sub_0803C92C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xd) == '\0') {
LAB_0803c99a:
    if (*(byte *)(param_1 + 0x12) < 2) {
      sub_08005784(param_1 + 0x74,&DAT_088517e8);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    if ((CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70)) == 0x1900) &&
       (*(char *)(iVar3 + 0x71) == '\0')) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar2 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
      goto LAB_0803caa4;
    }
    if (*(char *)(param_1 + 0xd) == '\0') goto LAB_0803c99a;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    sub_0801CFF0(param_1);
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      if (CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70)) == 0x1900) {
        *(undefined *)(param_1 + 0xc1) = 10;
        cVar1 = sub_08038A84(iVar3);
        if (cVar1 != '\0') {
          *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xc1) << 1;
        }
        cVar1 = sub_0803A4F4(iVar3);
        *(char *)(param_1 + 0xc1) = cVar1 + *(char *)(param_1 + 0xc1);
        *(undefined *)(param_1 + 0xc0) = 0;
      }
      else {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    sub_08005794(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4)),
                 *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                 *(undefined *)(param_1 + 0xc2),0xffffffff);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\x02') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6a01);
    sub_08005784(param_1 + 0x74,&DAT_088517e8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
LAB_0803caa4:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

