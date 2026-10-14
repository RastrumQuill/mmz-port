// sub_080CA6C8 at 0x080CA6C8 (thumb)

undefined4 sub_080CA6C8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (DAT_0202f8e2 != '\0') {
        return in_lr;
      }
      DAT_0202e138 = DAT_0202f8e2;
      *(undefined *)(param_1 + 0xd) = 1;
      sub_080127E4(param_1,0xc400);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = DAT_0202ebb5 & 0x40;
    if ((DAT_0202ebb5 & 0x40) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar2;
      *(uint *)(param_1 + 0x90) = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xc400);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08348fa4,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if ((((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0) && (DAT_0202e138 != '\0')) &&
     (DAT_03003908 == param_1 + 0x74)) {
    sub_080E0E64(&DAT_0202f8e0,0x10400);
    sub_080127E4(param_1,0xc406);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

