// sub_080AAEA4 at 0x080AAEA4 (thumb)

undefined4 sub_080AAEA4(int param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_0809C980();
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0xc0) = iVar5 + -0x6000;
    *(int *)(param_1 + 0x50) =
         iVar5 + -0x6000 +
         ((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0xc0 & 0xff] + 0xff) * -8;
    iVar5 = *(int *)(param_1 + 0x4c) + 0x100;
    *(int *)(param_1 + 0x4c) = iVar5;
    if (*(int *)(DAT_0202286c + 0x4c) + -0x8000 < iVar5) {
      sub_0809C930(param_1,0);
      sub_0809C980(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b65d0,param_1 + 0x4c,0x80);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      sub_080AAC78(param_1,3);
    }
    break;
  case 2:
    iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0xc0) = iVar5 + -0x6000;
    *(int *)(param_1 + 0x50) =
         iVar5 + -0x6000 +
         ((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0xc0 & 0xff] + 0xff) * -8;
    iVar5 = *(int *)(param_1 + 0x4c);
    if ((*(int *)(DAT_0202286c + 0x4c) + -0x8000 < iVar5) && (0x5a000 < iVar5)) {
      *(int *)(param_1 + 0x4c) = iVar5 + -0x100;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0809C930(param_1,1);
      sub_0809C980(param_1);
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 3:
    iVar5 = *(int *)(param_1 + 0x4c);
    if ((*(int *)(DAT_0202286c + 0x4c) + -0x8000 < iVar5) && (0x5a000 < iVar5)) {
      *(int *)(param_1 + 0x4c) = iVar5 + -0x100;
    }
    iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0xc0) = iVar5 + -0x6000;
    *(int *)(param_1 + 0x50) =
         iVar5 + -0x6000 +
         ((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0xc0 & 0xff] + 0xff) * -8;
    if (((DAT_02022ae0 & 2) == 0) && ((DAT_02022adf & 0x80) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar4 = *(ushort *)(param_1 + 200);
      if (uVar4 == 200) {
LAB_080ab0c2:
        if (!bVar1) {
          if ((DAT_02022ae0 & 0x10) == 0) goto LAB_080ab170;
          iVar5 = *(int *)(param_1 + 0x4c) + -0x400;
          goto LAB_080ab1a2;
        }
      }
      else {
        if (200 < uVar4) {
          if (uVar4 != 0x1cc) {
            if (uVar4 < 0x1cd) {
              if (uVar4 == 0x140) {
LAB_080ab0e4:
                if (!bVar1) {
                  if ((DAT_02022ae0 & 0x10) != 0) goto LAB_080ab19c;
                  goto LAB_080ab1bc;
                }
              }
            }
            else {
              sVar2 = 500;
              if (uVar4 == 500) goto LAB_080ab0e4;
LAB_080ab148:
              if (uVar4 == (ushort)(sVar2 + 0x20U)) {
                *(int *)(param_1 + 0x58) =
                     ((int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0xff & 0xff] -
                     (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)]) * 8;
                *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
              }
            }
            goto LAB_080ab1fc;
          }
          goto LAB_080ab0c2;
        }
        if (uVar4 == 0x28) goto LAB_080ab0c2;
        if (uVar4 < 0x29) {
          if (uVar4 == 0) goto LAB_080ab0c2;
        }
        else if (uVar4 == 0xa0) goto LAB_080ab0c2;
      }
    }
    else {
      uVar4 = *(ushort *)(param_1 + 200);
      if (uVar4 == 0xd2) {
LAB_080ab150:
        if (bVar1) goto LAB_080ab1fc;
        if ((DAT_02022ae0 & 0x10) != 0) {
          iVar5 = *(int *)(param_1 + 0x4c) + -0x400;
          goto LAB_080ab1a2;
        }
LAB_080ab170:
        sub_08049784(*(int *)(param_1 + 0x4c) + -0x400,*(int *)(param_1 + 0x50) + 0x1d00,7);
      }
      else {
        if (uVar4 < 0xd3) {
          if (uVar4 != 0x28) {
            if (uVar4 < 0x29) {
              if ((uVar4 == 0) || (uVar4 == 0x14)) goto LAB_080ab150;
            }
            else if ((uVar4 == 0x82) || (uVar4 == 0xaa)) goto LAB_080ab18c;
            goto LAB_080ab1fc;
          }
          goto LAB_080ab150;
        }
        if (uVar4 != 0x17c) {
          if (uVar4 < 0x17d) {
            if (uVar4 != 0xfa) {
              if (uVar4 != 0x154) goto LAB_080ab1fc;
              goto LAB_080ab150;
            }
          }
          else {
            sVar2 = 0x1a4;
            if (uVar4 != 0x1a4) goto LAB_080ab148;
          }
        }
LAB_080ab18c:
        if (bVar1) goto LAB_080ab1fc;
        if ((DAT_02022ae0 & 0x10) == 0) {
LAB_080ab1bc:
          sub_080527C4(*(int *)(param_1 + 0x4c) + -0x400,*(int *)(param_1 + 0x50) + 0x1d00);
          goto LAB_080ab1fc;
        }
LAB_080ab19c:
        iVar5 = *(int *)(param_1 + 0x4c) + -0x400;
LAB_080ab1a2:
        sub_080705EC(iVar5,*(int *)(param_1 + 0x50) + 0x1d00,1);
      }
    }
LAB_080ab1fc:
    *(short *)(param_1 + 200) = *(short *)(param_1 + 200) + 1;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    break;
  case 4:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -8;
    uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (0x8000 < uVar3) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

