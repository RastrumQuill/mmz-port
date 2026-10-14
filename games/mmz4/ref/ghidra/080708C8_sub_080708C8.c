// sub_080708C8 at 0x080708C8 (thumb)

undefined4 sub_080708C8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined4 in_lr;
  short asStack_30 [4];
  short asStack_28 [4];
  
  sub_08128B5C(asStack_30,&DAT_08129240,6);
  sub_08128B5C(asStack_28,&DAT_08129246,6);
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  uVar5 = bVar3 & 1;
  cVar4 = '\0';
  bVar1 = *(byte *)(param_1 + 0xc3);
  cVar11 = *(char *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x127);
    sub_080735E0(param_1,4);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    iVar7 = uVar5 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar7 * 0x200;
    *(int *)(param_1 + 100) = iVar7 * asStack_28[bVar1];
    *(int *)(param_1 + 0x68) = iVar7 * asStack_30[bVar1];
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
    cVar11 = -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  pcVar10 = (char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,
               *(int *)(*pcVar10 * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*pcVar10) * 0x18);
  *(char *)(param_1 + 0x13) = *pcVar10;
  cVar2 = *pcVar10;
  iVar7 = sub_0807376C(param_1);
  if (iVar7 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar7 = sub_0807376C(param_1);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar7;
      if (0x700 < iVar7) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      sub_08073984(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    sub_08073984(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((cVar2 != cVar11) && ((cVar2 == '\x03' || (cVar2 == '\a')))) {
    sub_08002B10(0x136);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  piVar8 = (int *)(param_1 + 0xc4);
  *piVar8 = *piVar8 + *(int *)(param_1 + 0x5c);
  if ((bVar3 & 1) == 0) {
    iVar7 = sub_08073638(param_1);
    if (iVar7 == 0) goto LAB_08070a62;
    sub_080737D0(param_1);
  }
  else {
    iVar7 = sub_080736A0(param_1);
    if (iVar7 == 0) goto LAB_08070a62;
    sub_0807385C(param_1);
  }
  cVar4 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08070a62:
  iVar7 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar7;
  iVar9 = uVar5 * 2 + -1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (iVar9 * iVar7 < 1) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      cVar4 = *(char *)(param_1 + 0xe) + '\x02';
    }
  }
  else {
    iVar6 = iVar9 * *(int *)(param_1 + 0x68);
    if (iVar9 * iVar7 - iVar6 != 0 && iVar6 <= iVar9 * iVar7) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68);
    }
    if (0x4fff < iVar9 * *piVar8) {
      *(undefined *)(param_1 + 0x12) = 0;
      *(int *)(param_1 + 100) = iVar9 * -0x40;
    }
  }
  if (cVar4 != '\0') {
    *(char *)(param_1 + 0xe) = cVar4;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

