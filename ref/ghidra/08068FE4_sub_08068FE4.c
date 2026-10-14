// sub_08068FE4 at 0x08068FE4 (thumb)

undefined4 sub_08068FE4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082b0cb0);
    *(undefined *)(param_1 + 0x12) = 0x1b;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar3 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar3;
    uVar4 = iVar3 * 0x1000000;
    goto LAB_0806909e;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    cVar2 = sub_080C8CB0(*(undefined *)(param_1 + 0x12),3);
    if (cVar2 == '\x02') {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    break;
  case 6:
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    cVar2 = sub_080C8CB0(*(undefined *)(param_1 + 0x12),3);
    if (cVar2 == '\x02') {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  default:
    goto switchD_08068ff8_caseD_8;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = (uint)*(byte *)(param_1 + 0x12);
LAB_0806909e:
  if (uVar4 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08068ff8_caseD_8:
  return in_lr;
}

