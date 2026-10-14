// sub_080777A8 at 0x080777A8 (thumb)

undefined4 sub_080777A8(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b1984,param_1 + 0x4c,4);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(undefined *)(param_1 + 0x13) = 9;
    *(undefined4 *)(param_1 + 0xb8) = 300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                       ((*(int *)(DAT_0202286c + 0x50) + -0x1800) - *(int *)(param_1 + 0x50)) *
                       0x100 >> 0x10);
  uVar8 = (uint)*(byte *)(param_1 + 0x12);
  iVar4 = ((uint)(iVar3 << 0x10) >> 0x18) - uVar8;
  iVar5 = iVar4 * 0x1000000 >> 0x18;
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = -iVar5;
  }
  if (0x7f < iVar3) {
    iVar4 = iVar5;
  }
  iVar3 = (char)iVar4 * 0x18;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  uVar6 = uVar8 + (iVar3 >> 8);
  *(char *)(param_1 + 0x12) = (char)uVar6;
  iVar3 = (short)(&DAT_080c8e24)[uVar8 + 0x40] * 0x180;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar3 >> 8);
  iVar3 = (short)(&DAT_080c8e24)[uVar8] * 0x180;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar3 >> 8);
  uVar8 = (0xb - (((uVar6 & 0xff) - 0x10) * 0x1000000 >> 0x1d)) * 0x1000000 & 0x7000000;
  uVar6 = uVar8 >> 0x18;
  if (*(byte *)(param_1 + 0x13) != uVar6) {
    sub_080033F0(param_1 + 0x6c,uVar6 + 2);
  }
  *(char *)(param_1 + 0x13) = (char)(uVar8 >> 0x18);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  puVar7 = (uint *)(param_1 + 0xb8);
  uVar8 = *puVar7 - 1;
  *puVar7 = uVar8;
  if (uVar8 < 0x20) {
    if ((uVar8 & 2) == 0) {
      cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
  }
  bVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (((bVar2 != 0) && ((bVar2 & 0x80) == 0)) || (*puVar7 == 0)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_0808827C(1,param_1 + 0x4c);
  }
  return in_lr;
}

