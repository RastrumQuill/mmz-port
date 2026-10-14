// sub_0801EE3C at 0x0801EE3C (thumb)

undefined4 sub_0801EE3C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) >> 3;
  uVar5 = bVar1 & 1;
  *(char *)(param_1 + 0x44) = (char)uVar5;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(byte *)(param_1 + 0x11e) < 100) {
    uVar4 = (uint)*(byte *)(param_1 + 0x11e);
    iVar6 = 0x200;
    if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
      iVar6 = 0x280;
    }
    if (((*(byte *)(param_1 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
      iVar3 = uVar4 << 9;
    }
    else {
      iVar3 = uVar4 * 0x280;
    }
    iVar3 = sub_080C8AD0(iVar3,100);
    iVar6 = iVar6 - iVar3;
  }
  else {
    iVar6 = 0;
  }
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uVar5 * 2 + -1) * iVar6;
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               *(byte *)(param_1 + 10) >> 4 & 1,1,1);
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

