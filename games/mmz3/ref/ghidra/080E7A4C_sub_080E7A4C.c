// sub_080E7A4C at 0x080E7A4C (thumb)

undefined4 sub_080E7A4C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar7 + 0x64ac);
  bVar1 = *(byte *)(iVar7 + 0xe0b);
  if ((bVar1 & 0xfc) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  sub_08017BCC(param_1,0xb);
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_080177F4(param_1);
        if ((*(char *)(iVar7 + 3) == '\x02') &&
           (*(char *)(param_1 + 0x10) == *(char *)(iVar7 + 0xe04))) {
          return in_lr;
        }
      }
      else {
        if (bVar2 != 3) {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_080177F4(param_1);
        if ((*(char *)(param_1 + 0x10) == *(char *)(iVar7 + 0xe03)) &&
           (*(char *)(iVar7 + 3) == '\0')) {
          return in_lr;
        }
      }
      *(byte *)(param_1 + 0xd) = bVar1 & 0xfc;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    cVar3 = *(char *)(iVar7 + 3);
    if (cVar3 == '\0') {
      if ((*(char *)(iVar7 + 0xe03) != '\0') ||
         (uVar6 = (uint)*(byte *)(iVar4 + 0xb4), uVar6 == 0xff)) {
        if (*(char *)(iVar7 + 0xe03) != '\x01') {
          return in_lr;
        }
        uVar6 = (uint)*(byte *)(iVar4 + 0xb5);
        if (uVar6 == 0xff) {
          return in_lr;
        }
      }
      *(byte *)(param_1 + 0x10) =
           (&DAT_0836e960)[uVar6] - (byte)((uint)(*(int *)(DAT_0203063c + uVar6) << 0x1b) >> 0x1e);
      iVar4 = (uint)*(byte *)(param_1 + 0x10) * 0x14;
      sub_08003AB0(&UNK_08635f24 + iVar4,
                   (0x35f - (uint)(*(ushort *)(&DAT_08635f2a + iVar4) >> 6)) * 0x20 + 0x10000);
      iVar4 = (uint)*(byte *)(param_1 + 0x10) * 0x14;
      sub_08003E14(&UNK_08635f30 + iVar4,(0xb - (uint)(byte)(&DAT_08635f37)[iVar4]) * 0x20 + 0x200);
      *(undefined *)(param_1 + 0x10) = *(undefined *)(iVar7 + 0xe03);
      *(undefined *)(param_1 + 0xd) = 3;
      return in_lr;
    }
    if (cVar3 == '\x02') {
      *(undefined *)(param_1 + 0x10) = *(undefined *)(iVar7 + 0xe04);
      iVar4 = (uint)*(byte *)(iVar7 + 0xe04) * 0x14;
      sub_08003AB0(&UNK_08636280 + iVar4,
                   (0x35f - (uint)(*(ushort *)(&DAT_08636286 + iVar4) >> 6)) * 0x20 + 0x10000);
      iVar4 = (uint)*(byte *)(iVar7 + 0xe04) * 0x14;
      sub_08003E14(&UNK_0863628c + iVar4,(0xb - (uint)(byte)(&DAT_08636293)[iVar4]) * 0x20 + 0x200);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
      return in_lr;
    }
    if (cVar3 != '\x03') {
      return in_lr;
    }
    uVar6 = (uint)*(byte *)(iVar7 + 0xdfc + (uint)*(byte *)(iVar7 + 0xe05));
    *(byte *)(param_1 + 0x10) =
         (&DAT_0836e960)[uVar6] - (byte)((uint)(*(int *)(DAT_0203063c + uVar6) << 0x1b) >> 0x1e);
    if (uVar6 == 0xff) {
      return in_lr;
    }
    iVar5 = (uint)*(byte *)(param_1 + 0x10) * 0x14;
    sub_08003AB0(&UNK_08635f24 + iVar5,
                 (0x35f - (uint)(*(ushort *)(&DAT_08635f2a + iVar5) >> 6)) * 0x20 + 0x10000);
    iVar5 = (uint)*(byte *)(param_1 + 0x10) * 0x14;
    sub_08003E14(&UNK_08635f30 + iVar5,(0xb - (uint)(byte)(&DAT_08635f37)[iVar5]) * 0x20 + 0x200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080177F4(param_1);
  if (*(char *)(iVar7 + 3) == '\x03') {
    uVar6 = (uint)*(byte *)(iVar7 + 0xdfc + (uint)*(byte *)(iVar7 + 0xe05));
    bVar1 = (&DAT_0836e960)[uVar6];
    iVar7 = *(int *)(DAT_0203063c + uVar6);
    if ((*(byte *)(int *)(DAT_0203063c + uVar6) & 2) != 0) {
      if (*(char *)(iVar4 + 0xce) == '\x02') {
        cVar3 = sub_080E17C8(uVar6);
        if (cVar3 == '\0') {
          sub_08017BCC(param_1,0xc);
        }
      }
      else {
        sub_08017BCC(param_1,0xc);
      }
    }
    if ((uint)*(byte *)(param_1 + 0x10) == ((uint)bVar1 - ((uint)(iVar7 << 0x1b) >> 0x1e) & 0xffff))
    {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

