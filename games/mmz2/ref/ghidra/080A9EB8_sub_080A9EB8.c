// sub_080A9EB8 at 0x080A9EB8 (thumb)

undefined4 sub_080A9EB8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A9BC4(param_1);
    return in_lr;
  }
  uVar2 = (*(byte *)(iVar3 + 0x12) & 0xf) + (uint)*(byte *)(param_1 + 0x11) & 0xff;
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar3 + 0x54) + (short)(&DAT_080ef450)[uVar2 + 0x40 & 0xff] * 0x16 + -0x3500;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + (short)(&DAT_080ef450)[uVar2] * 0x28;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x2301);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if (bVar1 < 5) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  return in_lr;
}

