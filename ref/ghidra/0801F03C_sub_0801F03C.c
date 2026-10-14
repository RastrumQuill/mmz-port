// sub_0801F03C at 0x0801F03C (thumb)

undefined4 sub_0801F03C(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if ((bVar1 & 0xc) == 0) {
    uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  else {
    bVar1 = bVar1 >> 3;
    uVar6 = bVar1 & 1;
    *(char *)(param_1 + 0x44) = (char)uVar6;
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x11e);
  if (uVar4 < 100) {
    iVar5 = sub_080C8AD0((uVar4 * 8 - (uint)*(byte *)(param_1 + 0x11e)) * 0x80,100);
    iVar5 = 0x380 - iVar5;
  }
  else {
    iVar5 = 0;
  }
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uVar6 * 2 + -1) * iVar5;
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  uVar3 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,1);
  if ((uVar3 & 0xf) == 0) {
    *(ushort *)(param_1 + 0x110) = uVar3 & 0xff;
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
  else {
    iVar5 = *(byte *)(param_1 + 0x118) - 1;
    bVar1 = (byte)iVar5;
    *(byte *)(param_1 + 0x118) = bVar1;
    if (iVar5 == 0) {
      bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      uVar3 = bVar2 & 0xc;
      if ((bVar2 & 0xc) == 0) {
        *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
        *(char *)(param_1 + 0xd) = (char)uVar3;
        *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
        *(ushort *)(param_1 + 0xe) = uVar3;
      }
      else {
        *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
        *(byte *)(param_1 + 0xd) = bVar1;
        *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 1;
      }
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
    }
  }
  return in_lr;
}

