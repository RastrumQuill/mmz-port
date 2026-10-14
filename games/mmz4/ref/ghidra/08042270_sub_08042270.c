// sub_08042270 at 0x08042270 (thumb)

undefined4 sub_08042270(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar8 + 0x150) == -1) {
    *(byte *)(iVar8 + 0x153) = *(byte *)(iVar8 + 0x153) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_08042486;
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xe) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    cVar1 = sub_0803AAC8(iVar8);
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0804231a;
    }
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x2a);
  }
  else {
LAB_0804231a:
    bVar2 = *(byte *)(iVar8 + 10) >> 4;
    uVar6 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    uVar6 = (uint)(*(char *)(iVar8 + 0x71) == '\x03');
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = *(int *)(iVar8 + 0x54) +
              *(int *)(&DAT_08850010 + uVar6 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10);
    }
    else {
      iVar5 = *(int *)(iVar8 + 0x54) -
              *(int *)(&DAT_08850010 + uVar6 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10);
    }
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar8 + 0x58) +
         *(int *)(&UNK_08850014 + uVar6 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10);
    bVar2 = (&DAT_088500b0)[*(byte *)(iVar8 + 0x150)];
    *(byte *)(param_1 + 0x24) = bVar2;
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar5 = -0xe;
      psVar7 = (short *)((int)&DAT_08128c10 + ((bVar2 + 0x40) * 0x1000000 >> 0x17));
      do {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          local_20 = *(int *)(param_1 + 0x54) - iVar5 * *psVar7;
        }
        else {
          local_20 = *(int *)(param_1 + 0x54) + iVar5 * *psVar7;
        }
        local_1c = *(int *)(param_1 + 0x58) - iVar5 * (short)(&DAT_08128c10)[bVar2];
        sVar3 = sub_08042838(local_20);
        if (sVar3 != 0) {
          sub_08041F18(iVar8,param_1,&local_20,0);
          sub_08041F18(iVar8,param_1,&local_20,1);
          sub_08002B10(0x3c);
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          break;
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x13);
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if (bVar2 < 0x11) {
      return in_lr;
    }
  }
  *(byte *)(iVar8 + 0x153) = *(byte *)(iVar8 + 0x153) | 0x40;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
LAB_08042486:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

