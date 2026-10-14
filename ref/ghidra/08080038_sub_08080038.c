// sub_08080038 at 0x08080038 (thumb)

undefined4 sub_08080038(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = param_1 + 0x6c;
  sub_08003458(iVar5);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    cVar2 = sub_080079CC();
    if (cVar2 == '\0') {
      return in_lr;
    }
    if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xc0)) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x20;
      return in_lr;
    }
    sub_0807FE50(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50),1,
                 *(byte *)(param_1 + 10) >> 4 & 1);
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sVar4 = *(byte *)(param_1 + 0x12) - 1;
      *(char *)(param_1 + 0x12) = (char)sVar4;
      *(ushort *)(param_1 + 0x48) = (sVar4 * 2 + (ushort)*(byte *)(param_1 + 0x12)) * -4 + 0x100;
      *(ushort *)(param_1 + 0x4a) = (ushort)*(byte *)(param_1 + 0x12) * -0xc + 0x100;
      if (*(char *)(param_1 + 0x12) != '\0') {
        return in_lr;
      }
      sub_08076590(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
      sub_080033F0(iVar5,0);
      sub_08003458(iVar5);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) < 2) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 9);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[bVar1] + 8);
  return in_lr;
}

