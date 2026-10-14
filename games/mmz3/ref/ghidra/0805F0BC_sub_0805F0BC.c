// sub_0805F0BC at 0x0805F0BC (thumb)

undefined4 sub_0805F0BC(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_08060768(param_1,1);
  uVar2 = sub_08060800(param_1);
  uVar3 = uVar2 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(uint *)(param_1 + 0x5c) = ((uVar2 & 0xff) * 2 + -1) * 0x3c0;
  sub_080B322C(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
  *(undefined *)(param_1 + 0x13) = 3;
  sub_0805F148(param_1);
  return in_lr;
}

