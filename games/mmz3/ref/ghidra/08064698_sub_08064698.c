// sub_08064698 at 0x08064698 (thumb)

undefined4 sub_08064698(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x1300);
  sub_080177F4(param_1);
  if (((DAT_02002438 & 8) == 0) || (uVar3 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar3 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = 6;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = 10;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08362394,param_1 + 0x54,uVar4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = 0x8065675;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0x11);
  }
  else {
    if ((*(char *)(param_1 + 0x10) == '\0') ||
       (sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar2 != 0)) {
      uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
    }
    *(undefined *)(param_1 + 0xd) = 6;
    *(bool *)(param_1 + 0xbd) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  if (*(byte *)(param_1 + 0xbd) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0xbd) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_080647FC(param_1);
  return in_lr;
}

