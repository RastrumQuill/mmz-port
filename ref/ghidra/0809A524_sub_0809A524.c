// sub_0809A524 at 0x0809A524 (thumb)

undefined4 sub_0809A524(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_08088204();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,0);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  *(char *)(param_1 + 0x44) = (char)uVar2;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = uVar2 * 2 >> 0x11 & 0x7f | 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(short *)(param_1 + 0x48) = (short)uVar3;
  *(short *)(param_1 + 0x4a) = (short)(uVar3 >> 1);
  *(byte *)(param_1 + 0x1f) = *(char *)(param_1 + 0x11) * '@' + ((byte)(uVar2 * 2 >> 0x11) & 0x3f);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = (byte)(uVar2 * 2 >> 0x11) & 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809A120(param_1);
  return in_lr;
}

