// sub_080CF62C at 0x080CF62C (thumb)

undefined4 sub_080CF62C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08433750,(DAT_0202e698 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_0843375c,(DAT_0202e498 - 5) * 0x20 + 0x200);
  sub_08002638(&DAT_08433764,(DAT_0202e69a - 0x310) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433770,(DAT_0202e49a - 6) * 0x20 + 0x200);
  sub_080126A0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x8400);
  iVar1 = sub_08012C64(param_1);
  sub_08002D68(0x4b,(uint)(iVar1 << 0x18) >> 0x13 | 0x200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = 0x17;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080CF56C(param_1,1);
    sub_080CF56C(param_1,1,1);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CF5E0(param_1);
  return in_lr;
}

