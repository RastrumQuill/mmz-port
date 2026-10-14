// sub_0803F1DC at 0x0803F1DC (thumb)

undefined4 sub_0803F1DC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      sub_080405D8(param_1);
      sub_080177F4(param_1);
      iVar4 = *(int *)(param_1 + 0x68) + 0x40;
      *(int *)(param_1 + 0x68) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x68) = 0x700;
      }
      iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x58) = iVar4;
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x58) = iVar3;
      }
      iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) != iVar3) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x13);
      if (cVar1 == '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0x13) = cVar1 + -1;
      if (cVar1 != '\x01') {
        return in_lr;
      }
      pbVar5 = (byte *)(param_1 + 0xb5);
      if (*pbVar5 == *(byte *)(param_1 + 0xb6)) {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar3 = sub_08040578(param_1);
          uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar6 & 0x7fffffff;
          iVar4 = sub_080FE4D8(uVar6 * 2 >> 0x11,(&DAT_080fe8cc)[iVar3 * 0x11]);
          bVar2 = (&UNK_080fe8cd)[iVar4 + iVar3 * 0x11];
          if ((uint)bVar2 == (int)(char)*pbVar5) {
            bVar2 = sub_08040510(param_1,(uint)bVar2,0);
          }
        }
        else {
          iVar3 = sub_08040578(param_1);
          uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar6 & 0x7fffffff;
          iVar4 = sub_080FE4D8(uVar6 * 2 >> 0x11,(&DAT_080fe8ff)[iVar3 * 0x11]);
          bVar2 = (&UNK_080fe900)[iVar4 + iVar3 * 0x11];
          if ((uint)bVar2 == (int)(char)*pbVar5) {
            bVar2 = sub_08040510(param_1,(uint)bVar2,1);
          }
        }
      }
      else {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar3 = sub_08040578(param_1);
          puVar7 = &DAT_080fe8cc;
        }
        else {
          iVar3 = sub_08040578(param_1);
          puVar7 = &DAT_080fe8ff;
        }
        uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar6 & 0x7fffffff;
        iVar4 = sub_080FE4D8(uVar6 * 2 >> 0x11,puVar7[iVar3 * 0x11]);
        bVar2 = puVar7[iVar4 + iVar3 * 0x11 + 1];
      }
      *(byte *)(param_1 + 0xd) = bVar2;
      *(char *)(param_1 + 0xe) = cVar1 + -1;
      *(byte *)(param_1 + 0xb6) = *pbVar5;
      *pbVar5 = bVar2;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (*(int *)(param_1 + 0x58) == iVar3) {
      sub_08017700(param_1,*(ushort *)(param_1 + 200) | 0xa200);
    }
    else {
      sub_080177CC(param_1,*(short *)(param_1 + 200) + 1U | 0xa200,1,0);
    }
    sub_08007390(param_1 + 0x74,&DAT_0835e448);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    if (*(char *)(param_1 + 0xf) == -1) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0x24;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = *(int *)(param_1 + 0x68) + 0x40;
  *(int *)(param_1 + 0x68) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x68) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x58) = iVar4;
  if (iVar3 < iVar4) {
    sub_08017700(param_1,*(ushort *)(param_1 + 200) | 0xa200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

