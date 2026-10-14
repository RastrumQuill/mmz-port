// sub_08039348 at 0x08039348 (thumb)

undefined4 sub_08039348(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined *local_24;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    if (*(byte *)(param_1 + 0xc2) < 100) {
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) + 1;
    }
    bVar3 = *(byte *)(iVar4 + 0x136) & 8;
    if (((*(byte *)(iVar4 + 0x136) & 8) == 0) && (pbVar5 = (byte *)(iVar4 + 0x12e), *pbVar5 != 0xff)
       ) {
      cVar1 = sub_08034818(iVar4,0x2f);
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0xc0) == '\x01') {
          sub_08007390(param_1 + 0x74,&DAT_0835cac8 + (uint)*pbVar5 * 0x18);
          *(undefined *)(param_1 + 0xc0) = 0;
        }
      }
      else if (*(byte *)(param_1 + 0xc2) < 4) {
        if (*(char *)(param_1 + 0xc0) == '\0') {
          sub_08007390(param_1 + 0x74,&DAT_0835cb40 + (uint)*pbVar5 * 0x18);
          *(undefined *)(param_1 + 0xc0) = 1;
        }
        if (*(byte *)(param_1 + 0xc1) != 0) {
          bVar2 = 0;
          if (bVar3 < *(byte *)(param_1 + 0xc1)) {
            do {
              sub_080E04D8(3,param_1 + 100,0);
              bVar2 = bVar2 + 1;
            } while (bVar2 < *(byte *)(param_1 + 0xc1));
          }
          sub_0800471C(0x1c);
        }
      }
      else {
        sub_08007390(param_1 + 0x74,&DAT_0835cac8 + (uint)*pbVar5 * 0x18);
        *(byte *)(param_1 + 0xc0) = bVar3;
      }
      local_24 = (undefined *)(param_1 + 0x4c);
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) !=
          *(short *)(&DAT_0835cab8 + (uint)*pbVar5 * 2)) {
        sub_08017700(param_1,*(short *)(&DAT_0835cab8 + (uint)*pbVar5 * 2));
        sub_08007390(param_1 + 0x74,
                     &DAT_0835cac8 + (uint)*(byte *)(param_1 + 0xc0) * 0x78 + (uint)*pbVar5 * 0x18);
      }
      bVar3 = *(byte *)(iVar4 + 10) >> 4;
      uVar6 = bVar3 & 1;
      if ((bVar3 & 1) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *local_24 = (char)uVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
      sub_080177F4(param_1);
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835caa4 + (uint)*pbVar5 * 4));
      *(undefined *)(param_1 + 0xc1) = 0;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

