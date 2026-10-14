// sub_080B1004 at 0x080B1004 (thumb)

undefined4 sub_080B1004(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined *)(param_1 + 0x74) = 0;
    *(undefined *)(param_1 + 0x75) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x76) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  bVar5 = bVar2 & 1;
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -0x80) {
    sub_080128D4(param_1);
    cVar1 = sub_080B12C0(param_1,8);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x76) = 1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x76) == '\0') {
      if (*(byte *)(param_1 + 0x12) < 0x20) {
        return in_lr;
      }
      pcVar6 = (char *)(param_1 + 0x75);
      pbVar4 = (byte *)(param_1 + 0x74);
      cVar1 = (*pbVar4 >> 5) + *pcVar6;
      *pcVar6 = cVar1;
      iVar3 = ((int)(short)(&DAT_080ef450)[(byte)(*pbVar4 + cVar1 + 0x40)] -
              (int)(short)(&DAT_080ef450)[*pbVar4 + 0x40 & 0xff]) * 0x100000 >> 0x10;
      if ((bVar2 & 1) == 0) {
        *(int *)(param_1 + 0x5c) = iVar3;
        cVar1 = sub_080B13A0(param_1,0xc);
        if (cVar1 == '\0') {
          *(byte *)(param_1 + 0x24) = ~*pbVar4;
          bVar2 = *pcVar6 + *pbVar4;
          goto LAB_080b1144;
        }
        bVar5 = 0;
      }
      else {
        *(int *)(param_1 + 0x5c) = -iVar3;
        cVar1 = sub_080B13A0(param_1,0xc);
        if (cVar1 == '\0') {
          *(byte *)(param_1 + 0x24) = ~*pbVar4;
          bVar2 = *pcVar6 + *pbVar4;
LAB_080b1144:
          *pbVar4 = bVar2;
          if (*pbVar4 < 0x61) {
            return in_lr;
          }
          sub_080B1228(param_1,bVar5);
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
          sub_080B0FE4(param_1);
          return in_lr;
        }
      }
    }
  }
  sub_080B1228(param_1,bVar5);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  sub_080B0FE4(param_1);
  return in_lr;
}

