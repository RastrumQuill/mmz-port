// sub_080AD948 at 0x080AD948 (thumb)

undefined4 sub_080AD948(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,(&DAT_08345bc4)[*(byte *)(param_1 + 0x78) & 1]);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if (*(char *)(param_1 + 0x78) < '\x02') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = 0x2c0;
    }
    else {
      uVar3 = 0xfffffd40;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar5 = -(uVar4 * 0x80 >> 0x17);
    }
    else {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar5 = uVar4 * 0x80 >> 0x17;
    }
    DAT_0202e188 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = uVar5;
  }
  uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar5 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) =
       ((uint)(byte)(&DAT_08345bc6)[*(char *)(param_1 + 0x78)] + (uVar5 * 2 >> 0x11 & 0xf)) * -0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AD86C(param_1);
  return in_lr;
}

