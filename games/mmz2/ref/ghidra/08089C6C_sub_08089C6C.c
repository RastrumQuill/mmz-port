// sub_08089C6C at 0x08089C6C (thumb)

undefined4 sub_08089C6C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 1;
  *(uint *)(param_1 + 0x5c) = (uVar3 ^ 1) * -0x300 + 0x180;
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  uVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x11) = 5;
  return in_lr;
}

