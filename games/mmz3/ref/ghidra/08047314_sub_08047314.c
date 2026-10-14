// sub_08047314 at 0x08047314 (thumb)

undefined4 sub_08047314(int param_1)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0xc9) = 0;
    *(short *)(param_1 + 0xc4) =
         (ushort)*(byte *)(param_1 + 199) * 6 + -3 + *(short *)(param_1 + 0xc4);
    if (*(char *)(iVar7 + 0xc9) != '\0') goto LAB_080473d4;
    goto LAB_080473da;
  case 1:
    sVar1 = *(short *)(param_1 + 0xc4);
    iVar7 = (int)sVar1;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0x1ff;
    }
    *(short *)(param_1 + 0xc4) = sVar1 + (short)(iVar7 >> 9) * -0x200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    pbVar6 = (byte *)(param_1 + 199);
    uVar3 = (ushort)*pbVar6 * 6 + -3 + *(ushort *)(param_1 + 0xc4);
    *(ushort *)(param_1 + 0xc4) = uVar3;
    if (((uVar3 < 0xfe80) && (*pbVar6 == 0)) || ((0x80 < uVar3 && (*pbVar6 == 1)))) {
LAB_080473d4:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_080473da:
    sub_08045E14(param_1);
    break;
  case 3:
    sub_0800471C(0x114);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x13) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      sub_0809F470(iVar7,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                   *(undefined *)(param_1 + 199));
      *(undefined *)(param_1 + 0x13) = 8;
      iVar7 = *(int *)(param_1 + 100) + 1;
      *(int *)(param_1 + 100) = iVar7;
      if (3 < iVar7) {
        *(undefined *)(param_1 + 0xc9) = 1;
        cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08047448:
        *(char *)(param_1 + 0xe) = cVar2;
      }
    }
    break;
  case 5:
    if (*(char *)(iVar7 + 0xd) == '\x05') break;
    cVar2 = '\x01';
    *(undefined *)(param_1 + 0xd) = 1;
    goto LAB_08047448;
  default:
    break;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar2 == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar4 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar5 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

