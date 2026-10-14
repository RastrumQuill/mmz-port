// sub_080424BC at 0x080424BC (thumb)

undefined4 sub_080424BC(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined uVar9;
  undefined4 in_lr;
  
  iVar5 = *(short *)(param_1 + 0x8c) + -1;
  if (iVar5 < 0) {
    iVar5 = *(short *)(param_1 + 0x8c) + 0xe;
  }
  uVar8 = 3U - (iVar5 >> 4) & 0xff;
  if (uVar8 == 2) {
    uVar8 = 1;
  }
  else if (uVar8 == 3) {
    uVar8 = 2;
  }
  uVar9 = 0;
  do {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    else {
      iVar5 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    iVar7 = iVar5 - *(int *)(DAT_0202286c + 0x4c);
    iVar5 = iVar5 - *(int *)(param_1 + 0x4c);
    iVar6 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    bVar2 = sub_080C8CB0(uVar3 * 2 >> 0x11,0x1f);
    uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar3 < 0x2001) {
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x7800) {
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (0x77ff < iVar7) goto LAB_0804260a;
        iVar7 = 0;
        iVar5 = uVar8 * 6;
        if ((byte)(&UNK_082ae796)[iVar5] <= bVar2) {
          do {
            iVar7 = iVar7 + 1;
            if (2 < iVar7) goto LAB_08042674;
            iVar5 = (uVar8 * 3 + iVar7) * 2;
          } while ((byte)(&UNK_082ae796)[iVar5] <= bVar2);
          puVar4 = &UNK_082ae797 + iVar5;
          goto LAB_08042670;
        }
        puVar4 = &UNK_082ae797;
      }
      else {
LAB_0804260a:
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        if (iVar6 < 0x6400) {
          iVar7 = 0;
          puVar4 = &DAT_082ae784;
          iVar5 = uVar8 * 6;
          bVar1 = (&DAT_082ae784)[iVar5];
          while (bVar1 <= bVar2) {
            iVar7 = iVar7 + 1;
            if (2 < iVar7) goto LAB_08042674;
            iVar5 = (uVar8 * 3 + iVar7) * 2;
            bVar1 = (&DAT_082ae784)[iVar5];
          }
        }
        else {
          iVar7 = 0;
          puVar4 = &DAT_082ae7a8;
          iVar5 = uVar8 * 5;
          while (iVar5 = iVar5 * 2, (byte)(&DAT_082ae7a8)[iVar5] <= bVar2) {
            iVar7 = iVar7 + 1;
            if (4 < iVar7) goto LAB_08042674;
            iVar5 = uVar8 * 5 + iVar7;
          }
        }
        puVar4 = puVar4 + 1;
      }
      puVar4 = puVar4 + iVar5;
    }
    else {
      iVar7 = 0;
      iVar5 = uVar8 * 4;
      if (bVar2 < (byte)(&DAT_082ae7c6)[iVar5]) {
        puVar4 = &UNK_082ae7c7 + iVar5;
      }
      else {
        do {
          iVar7 = iVar7 + 1;
          if (1 < iVar7) goto LAB_08042674;
          iVar6 = iVar7 * 2 + iVar5;
        } while ((byte)(&DAT_082ae7c6)[iVar6] <= bVar2);
        puVar4 = &UNK_082ae7c7 + iVar6;
      }
    }
LAB_08042670:
    uVar9 = *puVar4;
LAB_08042674:
    sub_0804248C(param_1,uVar9);
    if (*(byte *)(param_1 + 0xe6) < 2) {
      *(undefined *)(param_1 + 0xd) = uVar9;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  } while( true );
}

