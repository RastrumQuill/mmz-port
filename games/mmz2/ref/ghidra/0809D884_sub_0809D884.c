// sub_0809D884 at 0x0809D884 (thumb)

undefined4 sub_0809D884(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0x1d0f);
      sub_080128D4(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == -1) {
      if (*(char *)(param_1 + 0xbd) == '\0') {
        sub_080127E4(param_1,0x1d10);
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      *(undefined *)(param_1 + 0x13) = 0xf;
      piVar4 = (int *)(iVar6 + 0xb4 +
                      ((byte)(&DAT_0833a28d)
                             [(uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x11) * 6
                              + (uint)*(byte *)(param_1 + 0xbc) * 0x12] + 4) * 4);
      *(undefined *)(*piVar4 + 0xd) = 0x1c;
      *(undefined *)(*piVar4 + 0xe) = 0;
      if (*(byte *)(param_1 + 0x12) < 4) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else {
        *(undefined *)(param_1 + 0xd) = 4;
      }
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 3:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == -1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0xf;
      iVar3 = (uint)*(byte *)(param_1 + 0x11) * 6;
      iVar5 = (uint)*(byte *)(param_1 + 0xbc) * 0x12;
      bVar1 = (&DAT_0833a28d)[(uint)*(byte *)(param_1 + 0x12) + iVar3 + iVar5];
      iVar6 = iVar6 + 0xb4;
      piVar4 = (int *)(iVar6 + ((byte)(&DAT_0833a28c)
                                      [(uint)*(byte *)(param_1 + 0x12) + iVar3 + iVar5] + 4) * 4);
      iVar3 = *(int *)(*piVar4 + 0x54);
      *(int *)(param_1 + 0x54) = iVar3;
      iVar5 = *(int *)(*piVar4 + 0x58);
      *(int *)(param_1 + 0x58) = iVar5 + 0x1400;
      piVar4 = (int *)(iVar6 + (bVar1 + 4) * 4);
      iVar3 = *(int *)(*piVar4 + 0x54) - iVar3;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      *(int *)(param_1 + 0x5c) = iVar3 >> 4;
      iVar5 = *(int *)(*piVar4 + 0x58) - iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xf;
      }
      *(int *)(param_1 + 0x60) = iVar5 >> 4;
      if (*(char *)(param_1 + 0xbd) == '\0') {
        sub_080127E4(param_1,0x1d0e);
        sub_080128D4(param_1);
        sub_080032EC(0x53);
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

