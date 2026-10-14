// sub_08074638 at 0x08074638 (thumb)

undefined4 sub_08074638(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) != '\0') && (*(char *)(param_1 + 0x73) == '\x04')) {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      sub_0800471C(0x3b);
      sub_08017700(param_1,0x2803);
      sub_080BB38C(param_1);
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      *(byte *)(param_1 + 0x13) = ((byte)(uVar4 * 2 >> 0x11) & 0xf) + 1;
    }
    else {
      sub_08017700(param_1,0x2801);
      sub_080BB344(param_1);
    }
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08007390(param_1 + 0x74,&DAT_0836367c);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017528(param_1);
    sub_08017700(param_1,0x2801);
    sub_080BB344(param_1);
    *(undefined *)(param_1 + 0x13) = 6;
    *(undefined *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x24) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    uVar4 = (uint)*(byte *)(param_1 + 0x24);
    sVar1 = (&DAT_080fe64c)[uVar4];
    iVar5 = FUN_080fe2f8(uVar4 - 0xc0,3);
    iVar6 = (iVar5 + 0x50) * (int)sVar1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (iVar6 >> 8);
    iVar5 = (iVar5 + 0x50) *
            (int)*(short *)((int)&DAT_080fe64c + ((uVar4 - 0x140) * 0x1000000 >> 0x17));
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (iVar5 >> 8);
    if (0x28 < (int)(uVar4 - 0xc0)) {
LAB_080747f8:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_080747fe:
    sub_08073CCC(param_1);
    sub_080177F4(param_1);
    break;
  case 2:
    if (-1 < (int)(*(byte *)(param_1 + 0x24) - 0xc0)) goto LAB_080747fe;
    goto LAB_080747f8;
  case 3:
    iVar7 = *(byte *)(param_1 + 0x24) - 0xc0;
    sVar1 = *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x24) - 0x80) * 0x1000000 >> 0x17)
                      );
    iVar5 = FUN_080fe2f8(iVar7,3);
    iVar6 = (0x50 - iVar5) * (int)sVar1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (iVar6 >> 8);
    iVar5 = (0x50 - iVar5) *
            (int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar7 * 0x1000000) >> 0x17));
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (iVar5 >> 8);
    if (iVar7 < -0x28) goto LAB_080747f8;
    goto LAB_080747fe;
  case 4:
    if (0 < (int)(*(byte *)(param_1 + 0x24) - 0xc0)) {
      bVar3 = *(byte *)(param_1 + 0xb8) + 1;
      *(byte *)(param_1 + 0xb8) = bVar3;
      if (3 < bVar3) {
        sub_08073E74(param_1);
      }
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_08073CCC(param_1);
    sub_080177F4(param_1);
  }
  return in_lr;
}

