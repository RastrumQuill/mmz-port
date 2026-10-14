// sub_080FC3D4 at 0x080FC3D4 (thumb)

undefined4 sub_080FC3D4(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1000;
    iVar4 = param_1 + 0x54;
    sub_080D4898(iVar4,&DAT_08867964,0,*(byte *)(param_1 + 10) & 0x10);
    uVar3 = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x10;
    }
    sub_080D4898(iVar4,&DAT_08867980,0,uVar3);
    sub_080D4898(iVar4,&DAT_0886799c,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar4,&DAT_088679b8,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D0894(1,&local_1c);
    sub_08002B10(0xa6);
    cVar1 = *(char *)(param_1 + 0xbd);
    if (cVar1 != '\0') {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0xe) = cVar1;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0xf) = (byte)(uVar2 * 2 >> 0x11) & 1;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      local_18 = *(int *)(param_1 + 0x58) + -0x1000;
      if (*(char *)(param_1 + 0xf) == '\0') {
        local_1c = *(int *)(param_1 + 0x54) +
                   *(short *)((int)&DAT_08128c10 +
                             (((uint)*(byte *)(param_1 + 0x12) * -0x24 + 0x40) * 0x1000000 >> 0x17))
                   * 2 + (short)(&DAT_08128c10)
                                [(uint)*(byte *)(param_1 + 0x12) * -0x24000000 >> 0x18] * 2;
        sub_080E16B4(&local_1c,*(char *)(param_1 + 0x12) * -0x24,0x200);
      }
      else {
        local_1c = *(int *)(param_1 + 0x54) +
                   *(short *)((int)&DAT_08128c10 +
                             ((uint)*(byte *)(param_1 + 0x12) * 0x24000000 + 0x40000000 >> 0x17)) *
                   2 + *(short *)((int)&DAT_08128c10 +
                                 ((uint)*(byte *)(param_1 + 0x12) * 0x24000000 >> 0x17)) * 2;
        sub_080E16B4(&local_1c,*(char *)(param_1 + 0x12) * '$',0x200);
      }
    }
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      sub_08002B10(0xa6);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    sub_08002B10(0x35);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

