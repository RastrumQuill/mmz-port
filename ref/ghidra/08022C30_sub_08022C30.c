// sub_08022C30 at 0x08022C30 (thumb)

/* WARNING: Removing unreachable block (ram,0x08022ca8) */

undefined4 sub_08022C30(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9cf8 + (uint)*(byte *)(param_1 + 0xc0) * 4));
  if (*(char *)(param_1 + 0x115) == '\x1a') {
    bVar1 = *(byte *)(param_1 + 0x121);
    uVar4 = (uint)bVar1;
    if (uVar4 == 0) {
      iVar3 = 0x200;
      if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
        iVar3 = 0x280;
      }
    }
    else {
      *(byte *)(param_1 + 0x121) = bVar1 - 1;
      if (uVar4 == 0x10) {
        return in_lr;
      }
      if (((*(byte *)(param_1 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
        iVar5 = uVar4 * 0x180;
      }
      else {
        iVar5 = uVar4 << 8;
      }
      if (((*(byte *)(param_1 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
        iVar3 = 0x200;
      }
      else {
        iVar3 = 0x280;
      }
      iVar3 = (iVar5 >> 4) + iVar3;
      *(int *)(param_1 + 0x54) = iVar3;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
  }
  if (*(byte *)(param_1 + 0x11e) < 100) {
    iVar5 = sub_080C8AD0(iVar3 * (uint)*(byte *)(param_1 + 0x11e),100);
    iVar3 = iVar3 - iVar5;
  }
  else {
    iVar3 = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               ((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1,1,1);
  uVar2 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,1);
  if ((uVar2 & 0xf) == 0) {
    *(ushort *)(param_1 + 0x110) = uVar2 & 0xff;
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_0801F1F0(param_1);
  }
  return in_lr;
}

