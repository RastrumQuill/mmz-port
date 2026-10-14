// sub_080810FC at 0x080810FC (thumb)

undefined4 sub_080810FC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar2 + 0xc)) || (1 < *(byte *)(DAT_0202f5c0 + 0xc))) {
    DAT_02002410 = DAT_02002410 & 0xbfff;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    *(uint *)(iVar2 + 0xb4) = *(uint *)(iVar2 + 0xb4) | 0x10;
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\x01') {
      sub_08080594(param_1);
      iVar6 = *(int *)(DAT_0202f5c0 + 0x54);
      iVar2 = *(int *)(param_1 + 0x54);
      if (iVar2 < iVar6) {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(bool *)(param_1 + 0x4c) = iVar2 < iVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (iVar2 < iVar6) << 4;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    sub_080048A0(param_1 + 0x34,0x808099d);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
    *(int *)(param_1 + 0x3c) = param_1;
    DAT_02002410 = DAT_02002410 | 0x4000;
    DAT_0200241d = 0x21;
    DAT_0200241e = DAT_0200241e | 0xe;
    *(undefined *)(param_1 + 0xb6) = 4;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(byte *)(param_1 + 0xb7) = (*(byte *)(param_1 + 0x13) >> 3) + 4;
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (0x10 < bVar1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    uVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    iVar2 = (uVar3 & 0xff) * 3;
    DAT_03002ac0 = (ushort)(byte)(&DAT_083648d2)[iVar2] |
                   (ushort)(byte)"??\n??\n?"[iVar2] << 10 |
                   (ushort)(byte)(&DAT_083648d3)[iVar2] << 5;
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0xb6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    uVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    iVar6 = (uVar3 & 0xff) * 3;
    DAT_03002ac0 = (ushort)(byte)(&DAT_083648d2)[iVar6] |
                   (ushort)(byte)"??\n??\n?"[iVar6] << 10 |
                   (ushort)(byte)(&DAT_083648d3)[iVar6] << 5;
    pbVar7 = (byte *)(param_1 + 0xb7);
    bVar1 = *pbVar7;
    *pbVar7 = bVar1 + 2;
    if (0x18 < (byte)(bVar1 + 2)) {
      *(uint *)(iVar2 + 0xb4) = *(uint *)(iVar2 + 0xb4) | 2;
    }
    iVar2 = (uint)*pbVar7 - (uint)*(byte *)(param_1 + 0x12);
    if (3 < iVar2) {
      *(byte *)(param_1 + 0x12) = *pbVar7 - 3;
    }
    bVar1 = *pbVar7;
    *(byte *)(param_1 + 0xb6) = bVar1;
    cVar5 = FUN_080fe2f8(iVar2 * ((uVar3 & 0xff) + 1),3);
    *(byte *)(param_1 + 0xb6) = bVar1 - cVar5;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*pbVar7 < 0x21) break;
    }
    else if (*pbVar7 < 0x79) break;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    bVar1 = *(byte *)(param_1 + 0xb6) + 1;
    *(byte *)(param_1 + 0xb6) = bVar1;
    if (*(byte *)(param_1 + 0xb7) <= bVar1) {
      *(uint *)(iVar2 + 0xb4) = *(uint *)(iVar2 + 0xb4) | 0x10;
      DAT_02002410 = DAT_02002410 & 0xbfff;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    uVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    iVar2 = (uVar3 & 0xff) * 3;
    DAT_03002ac0 = (ushort)(byte)(&DAT_083648d2)[iVar2] |
                   (ushort)(byte)"??\n??\n?"[iVar2] << 10 |
                   (ushort)(byte)(&DAT_083648d3)[iVar2] << 5;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  default:
    break;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb6);
    cVar5 = *(char *)(param_1 + 0xb7);
    pcVar4 = (char *)(param_1 + 0xb5);
  }
  else {
    *(char *)(param_1 + 0xb5) = -0x80 - *(char *)(param_1 + 0xb6);
    cVar5 = -0x80 - *(char *)(param_1 + 0xb7);
    pcVar4 = (char *)(param_1 + 0xb4);
  }
  *pcVar4 = cVar5;
  return in_lr;
}

