// sub_080C2D28 at 0x080C2D28 (thumb)

undefined4 sub_080C2D28(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
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
  *(undefined4 *)(param_1 + 0x54) =
       *(undefined4 *)(&DAT_08348dbc + (uint)*(byte *)(param_1 + 0x11) * 8);
  uVar3 = *(undefined4 *)(&DAT_08348dc0 + (uint)*(byte *)(param_1 + 0x11) * 8);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(uint *)(param_1 + 0x68) = (uint)DAT_02000fa0._2_2_;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08002638(&DAT_08433070,(DAT_0202e5e8 - 0x300) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_0843307c,(DAT_0202e3e8 - 10) * 0x20 + 0x200);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

