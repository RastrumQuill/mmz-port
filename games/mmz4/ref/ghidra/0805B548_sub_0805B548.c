// sub_0805B548 at 0x0805B548 (thumb)

undefined4 sub_0805B548(int param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xc1);
    piVar6 = (int *)(param_1 + 200);
    iVar5 = *piVar6;
    if (iVar5 != 0) {
      pcVar3 = (char *)(param_1 + 0xbf);
      if (*pcVar3 == '\0') {
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
        *(undefined4 *)(iVar5 + 0x8c) = 0;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        *(undefined4 *)(iVar5 + 0xc) = 3;
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar5 + 9)] + 0xc)
        ;
        *piVar6 = 0;
        *pcVar3 = -1;
      }
      if (*piVar6 != 0) {
        if (*pcVar3 == '\x01') {
          *(undefined *)(*piVar6 + 0xb5) = 1;
        }
        if (*piVar6 != 0) {
          if (*pcVar3 == '\x02') {
            *(undefined *)(*piVar6 + 0xb5) = 1;
          }
          if (*piVar6 != 0) {
            if (*pcVar3 == '\x03') {
              *(undefined *)(*piVar6 + 0xb5) = 1;
            }
            if (*piVar6 != 0) {
              if (*pcVar3 == '\x04') {
                *(undefined *)(*piVar6 + 0xb6) = 1;
                *piVar6 = 0;
                *pcVar3 = -1;
              }
              if ((*piVar6 != 0) && (*pcVar3 == '\x05')) {
                *(undefined *)(*piVar6 + 0xb6) = 1;
                *piVar6 = 0;
                *pcVar3 = -1;
              }
            }
          }
        }
      }
    }
    sub_08005784(param_1 + 0x74,&DAT_088553c0);
    sub_0801CF00(param_1,0xa304);
    *(undefined *)(param_1 + 0xbd) = 1;
    bVar1 = *(byte *)(param_1 + 0xbc);
    *(char *)(param_1 + 0x4c) = (char)(bVar1 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    *(byte *)(param_1 + 0x12) = bVar1 * -0x30 + -0x28;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar4 = *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
          * iVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
  iVar4 = iVar5 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
  iVar5 = iVar5 + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar5;
  if (iVar5 < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

