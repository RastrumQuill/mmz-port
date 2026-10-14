// sub_0800F684 at 0x0800F684 (thumb)

undefined4 sub_0800F684(char param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  
  iVar4 = DAT_02022b20;
  cVar1 = *(char *)(DAT_02022b20 + 1);
  bVar2 = *(byte *)(DAT_02022b20 + 2);
  if ((DAT_02022b26 & 0xf) != 0) {
    *(undefined *)(DAT_02022b20 + 2) = 0x12;
    goto LAB_0800f7aa;
  }
  if (cVar1 == '\x06') {
    if (param_1 != '\x06') {
      *(undefined *)(DAT_02022b20 + 2) = 2;
      goto LAB_0800f7aa;
    }
    if (4 < bVar2) goto LAB_0800f7aa;
    bVar3 = *(byte *)(DAT_02022b20 + 3);
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(DAT_02022b20 + 4) == '\0') {
        if (DAT_02022b2c != 0) {
          uVar8 = (uint)DAT_02022b24;
          iVar6 = sub_080C8AD0(*(int *)(&DAT_0829fae4 + uVar8 * 4) * 10,DAT_02022b2c);
          if (iVar6 < 100) {
            uVar9 = sub_080C8C38(DAT_02022b28,0x3c);
            if (uVar9 < *(int *)(L"GHIJKLSMNOPQRTUVWXYL" + uVar8 * 2 + 0x14) - 10U) {
              *(undefined *)(iVar4 + 2) = 7;
            }
            else if (iVar6 < 6) {
              *(undefined *)(iVar4 + 2) = 8;
            }
            else {
              uVar8 = (uint)DAT_02022b3e;
              uVar9 = (uint)DAT_02022b3c;
              iVar6 = sub_080C8AD0(((uint)DAT_02022b42 + (uint)DAT_02022b40 + uVar8 + uVar9) * 9,10)
              ;
              if (iVar6 < (int)uVar8) {
                *(undefined *)(iVar4 + 2) = 9;
              }
              else if (iVar6 < (int)uVar9) {
                *(undefined *)(iVar4 + 2) = 10;
              }
              else {
                if (DAT_02022b37 == '\0') {
                  uVar5 = 0xc;
                }
                else {
                  uVar5 = 1;
                }
                *(undefined *)(DAT_02022b20 + 2) = uVar5;
              }
            }
            goto LAB_0800f7aa;
          }
        }
        *(undefined *)(iVar4 + 2) = 6;
      }
      else {
        *(undefined *)(DAT_02022b20 + 2) = 0x11;
      }
      goto LAB_0800f7aa;
    }
    if (((param_1 != '\0') || (bVar2 == 0)) || (0x10 < bVar2)) {
      *(undefined *)(DAT_02022b20 + 2) = 0xd;
      goto LAB_0800f7aa;
    }
    if (0xf < bVar2) goto LAB_0800f7aa;
    bVar3 = *(byte *)(DAT_02022b20 + 3);
  }
  if (bVar2 == bVar3) {
    *(byte *)(DAT_02022b20 + 2) = bVar2 + 1;
  }
LAB_0800f7aa:
  *(byte *)(DAT_02022b20 + 3) = bVar2;
  DAT_02023634 = &UNK_082b932a +
                 (ushort)(&DAT_082b8f3c)
                         [(ushort)L"GHIJKLSMNOPQRTUVWXYL"[*(byte *)(DAT_02022b20 + 2)]];
  pcVar7 = (char *)((uint)*(byte *)(DAT_02022b20 + 2) + DAT_02022b20 + 0x1c);
  *pcVar7 = *pcVar7 + '\x01';
  if ((cVar1 == '\x06') || (cVar1 == '\0')) {
    *(undefined *)(DAT_02022b20 + 5) = *(undefined *)(DAT_02022b20 + 2);
  }
  else if (*(char *)(DAT_02022b20 + 4) == '\0') {
    uVar9 = 0;
    uVar8 = 0;
    do {
      if (*(byte *)(DAT_02022b20 + 0x1c + uVar9) < *(byte *)(DAT_02022b20 + 0x1c + uVar8)) {
        uVar9 = uVar8 & 0xff;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0x14);
    *(char *)(DAT_02022b20 + 5) = (char)uVar9;
  }
  else {
    *(undefined *)(DAT_02022b20 + 5) = 0x11;
  }
  return in_lr;
}

