// sub_0804B7DC at 0x0804B7DC (thumb)

undefined4 sub_0804B7DC(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      sub_0804CE80(param_1);
      sub_080177F4(param_1);
      cVar1 = *(char *)(param_1 + 0x13);
      if (cVar1 == '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0x13) = cVar1 + -1;
      if (cVar1 != '\x01') {
        return in_lr;
      }
      pbVar3 = (byte *)(param_1 + 0xb5);
      if (*pbVar3 == *(byte *)(param_1 + 0xb6)) {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar5 = sub_0804CE48(param_1);
          uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar4 & 0x7fffffff;
          iVar6 = sub_080FE4D8(uVar4 * 2 >> 0x11,(&DAT_080fea70)[iVar5 * 0x11]);
          bVar2 = (&UNK_080fea71)[iVar6 + iVar5 * 0x11];
          if ((uint)bVar2 == (int)(char)*pbVar3) {
            bVar2 = sub_0804CDF0(param_1,(uint)bVar2,0);
          }
        }
        else {
          iVar5 = sub_0804CE48(param_1);
          uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar4 & 0x7fffffff;
          iVar6 = sub_080FE4D8(uVar4 * 2 >> 0x11,(&DAT_080fea92)[iVar5 * 0x11]);
          bVar2 = (&UNK_080fea93)[iVar6 + iVar5 * 0x11];
          if ((uint)bVar2 == (int)(char)*pbVar3) {
            bVar2 = sub_0804CDF0(param_1,(uint)bVar2,1);
          }
        }
      }
      else {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar5 = sub_0804CE48(param_1);
          puVar7 = &DAT_080fea70;
        }
        else {
          iVar5 = sub_0804CE48(param_1);
          puVar7 = &DAT_080fea92;
        }
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        iVar6 = sub_080FE4D8(uVar4 * 2 >> 0x11,puVar7[iVar5 * 0x11]);
        bVar2 = puVar7[iVar6 + iVar5 * 0x11 + 1];
      }
      *(byte *)(param_1 + 0xd) = bVar2;
      *(char *)(param_1 + 0xe) = cVar1 + -1;
      *(byte *)(param_1 + 0xb6) = *pbVar3;
      *pbVar3 = bVar2;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_08017700(param_1,0xa804);
    sub_08007390(param_1 + 0x74,&DAT_0835f730);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x13) = 0x17;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar6 = *(int *)(param_1 + 0xd4) + -0x4800;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + ((iVar6 - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
  sub_080177F4(param_1);
  iVar5 = iVar6 - *(int *)(param_1 + 0x58);
  if (iVar5 < 1) {
    iVar5 = *(int *)(param_1 + 0x58) - iVar6;
  }
  if (iVar5 < 0x400) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

