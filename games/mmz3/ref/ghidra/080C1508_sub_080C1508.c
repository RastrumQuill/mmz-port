// sub_080C1508 at 0x080C1508 (thumb)

undefined4 sub_080C1508(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*(byte *)(param_1 + 0x11) + 0x6203);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) < 1);
    if (uVar2 != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_080c1586;
    }
  }
  else {
    uVar2 = (uint)(0 < *(int *)(param_1 + 0x5c));
    if (uVar2 != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_080c1586;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xef;
LAB_080c1586:
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined *)(param_1 + 0x12) = 0;
  sub_0800471C(0x3f);
  sub_080C144C(param_1);
  return in_lr;
}

