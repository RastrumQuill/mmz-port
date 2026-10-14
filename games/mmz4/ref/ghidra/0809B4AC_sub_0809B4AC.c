// sub_0809B4AC at 0x0809B4AC (thumb)

undefined4 sub_0809B4AC(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  local_1c[0] = 0x18;
  local_1c[1] = 0x1a;
  bVar2 = *(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb6) = 0;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(char *)(param_1 + 0x25) = (char)local_1c[bVar2];
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = bVar1 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_0809B548(param_1);
  return in_lr;
}

