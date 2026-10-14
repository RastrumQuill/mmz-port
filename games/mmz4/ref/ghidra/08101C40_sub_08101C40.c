// sub_08101C40 at 0x08101C40 (thumb)

undefined4 sub_08101C40(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar3 = bVar3 & 0xef | 3;
  }
  else {
    bVar3 = bVar3 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar2 = *(byte *)(param_1 + 0x11) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  sub_08128884(param_1,*(undefined4 *)(&DAT_088685dc + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_08101CD0(param_1);
  return in_lr;
}

