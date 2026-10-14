// sub_0801ED28 at 0x0801ED28 (thumb)

undefined4 sub_0801ED28(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) >> 3;
  uVar4 = bVar1 & 1;
  *(char *)(param_1 + 0x44) = (char)uVar4;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(byte *)(param_1 + 0x11e) < 100) {
    iVar3 = sub_080C8AD0((uint)*(byte *)(param_1 + 0x11e) << 7,100);
    iVar3 = 0x80 - iVar3;
  }
  else {
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uVar4 * 2 + -1) * iVar3;
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

