// sub_08082824 at 0x08082824 (thumb)

undefined4 sub_08082824(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 10) >> 4 & 1;
    iVar5 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    cVar1 = (char)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = -cVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | cVar1 * -0x10;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x13) + 0x1614);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_0808333C(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == '\v') && (*(char *)(param_1 + 0x13) != '\0')) {
      cVar1 = (&DAT_0885b3e8)[*(byte *)(param_1 + 0x13)];
      bVar3 = *(byte *)(param_1 + 10);
      if ((bVar3 & 0x10) != 0) {
        cVar1 = -0x80 - cVar1;
      }
      if ((bVar3 & 0x20) != 0) {
        cVar1 = -1 - cVar1;
      }
      iVar5 = (*(byte *)(param_1 + 0x13) - 1) * 4;
      local_1c = *(int *)(&DAT_0885b3f0 + iVar5) + *(int *)(param_1 + 0x54);
      if ((bVar3 & 0x10) != 0) {
        local_1c = local_1c + *(int *)(&DAT_0885b3f0 + iVar5) * -2;
      }
      local_18 = *(int *)(&DAT_0885b404 + iVar5) + *(int *)(param_1 + 0x58);
      if ((bVar3 & 0x20) != 0) {
        local_18 = local_18 + *(int *)(&DAT_0885b404 + iVar5) * -2;
      }
      sub_08002B10(0x2c);
      sub_080BD058(&local_1c,0x280,cVar1);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + '\x01';
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == '\x06') {
        uVar2 = 3;
      }
      else {
        uVar2 = 1;
      }
      *(undefined *)(param_1 + 0xe) = uVar2;
    }
    sub_0801CFF0(param_1);
    break;
  case 3:
    sub_0801CF00(param_1,0x1600);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_0808333C(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      if (*(byte *)(param_1 + 0xbd) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      uVar4 = *(byte *)(param_1 + 0xbd) & 1;
      *(undefined *)(param_1 + 0x4c) = (char)uVar4;
      pbVar6 = (byte *)(param_1 + 0x4a);
      *pbVar6 = *pbVar6 & 0xef | (byte)(uVar4 << 4);
      if (*(int *)(param_1 + 0xc0) < 0x50) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10);
        uVar4 = ~(uint)(bVar3 >> 4) & 1;
        if (uVar4 == 0) {
          bVar3 = bVar3 & 0xef;
        }
        else {
          bVar3 = bVar3 | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(undefined *)(param_1 + 0x4c) = (char)uVar4;
        *pbVar6 = *pbVar6 & 0xef | (byte)(uVar4 << 4);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

