// sub_08093DE4 at 0x08093DE4 (thumb)

undefined4 sub_08093DE4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      uVar4 = *(uint *)(&DAT_0885d114 + (uint)bVar1 * 4);
      (&DAT_0202e8b4)[(int)uVar4 >> 3] = (byte)(1 << (uVar4 & 7)) | (&DAT_0202e8b4)[(int)uVar4 >> 3]
      ;
      uVar4 = *(uint *)(&DAT_0885d114 + (uint)bVar1 * 4);
      (&DAT_02035880)[(int)uVar4 >> 3] = (byte)(1 << (uVar4 & 7)) | (&DAT_02035880)[(int)uVar4 >> 3]
      ;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0x400f);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar3 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x13) == '\0') {
    sub_080947EC(param_1);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') ||
     ((*(char *)(param_1 + 0x13) != '\0' &&
      (iVar3 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58))
      , iVar3 != 0)))) {
    sub_08002B10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_1c = *(int *)(param_1 + 0x54) + ((uVar4 * 2 >> 0x11 & 7) - 3) * 0x100;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + (uVar4 * 2 >> 0x11 & 7) * 0x100 + -0x1300;
    sub_080D0894(1,&local_1c);
    sub_08094BA4(param_1);
    sub_08094CB4(param_1);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

