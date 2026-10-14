// sub_0805AE04 at 0x0805AE04 (thumb)

undefined4 sub_0805AE04(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar6 = *(int *)(param_1 + 0xc4);
        iVar7 = *(int *)(param_1 + 0x4c) - iVar6;
        if (iVar7 < 0) {
          iVar7 = iVar6 - *(int *)(param_1 + 0x4c);
        }
        if (0x10000 < iVar7) {
          bVar1 = *(byte *)(param_1 + 10) >> 4;
          if (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc4) < 1) {
            if ((bVar1 & 1) != 0) goto LAB_0805aeb4;
          }
          else if ((bVar1 & 1) != 1) {
LAB_0805aeb4:
            bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
            *(byte *)(param_1 + 0x44) = bVar1;
            if (bVar1 == 0) {
              bVar1 = *(byte *)(param_1 + 10) & 0xef;
            }
            else {
              bVar1 = *(byte *)(param_1 + 10) | 0x10;
            }
            *(byte *)(param_1 + 10) = bVar1;
          }
        }
        sub_08048A54(param_1);
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
        sub_080033F0(param_1 + 0x6c,4);
        uVar5 = 0x180;
        *(undefined4 *)(param_1 + 0x54) = 0x180;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar5 = 0xfffffe80;
        }
        *(undefined4 *)(param_1 + 0x54) = uVar5;
        *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x600;
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      iVar7 = *(int *)(param_1 + 0x58) + 0x40;
      *(int *)(param_1 + 0x58) = iVar7;
      if (0x700 < iVar7) {
        *(undefined4 *)(param_1 + 0x58) = 0x700;
      }
      cVar2 = *(char *)(param_1 + 0x12) + '\n';
      *(char *)(param_1 + 0x12) = cVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(char *)(param_1 + 0x1f) = cVar2;
      }
      else {
        *(char *)(param_1 + 0x1f) = -cVar2;
      }
      sub_080599B0(param_1);
      cVar2 = sub_080598F0(param_1);
      if ((cVar2 == '\0') || (*(int *)(param_1 + 0x58) < 1)) goto LAB_0805affe;
      sub_0805998C(param_1);
      *(undefined *)(param_1 + 0xc1) = 0;
      sub_080489E4(param_1);
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
      *(undefined *)(param_1 + 0x1f) = 0;
      if (*(char *)(param_1 + 0x10) == '\0') {
        sVar4 = sub_080C8AD0((int)*(short *)(param_1 + 0x8c),3);
        uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar8 & 0x7fffffff;
        if ((uVar8 * 2 >> 0x11 & 0xf) < (uint)(byte)(&DAT_082afec4)[sVar4]) goto LAB_0805aff8;
        uVar3 = 9;
      }
      else {
LAB_0805aff8:
        uVar3 = 4;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_0805affe;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_0800561C(param_1 + 0x74,&DAT_082afdf4);
    sub_080033F0(param_1 + 0x6c,10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0x12) = 2;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0805affe:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

