// sub_080BE00C at 0x080BE00C (thumb)

undefined4 sub_080BE00C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  uVar3 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if ((uVar3 & 0xff) < 0x21) {
    iVar2 = *(short *)((int)&DAT_080fe64c + (uVar3 * 0x2000000 >> 0x17)) * 0xdc;
  }
  else {
    if ((uVar3 & 0xff) < 0x7f) goto LAB_080be056;
    iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)bVar1 * 0x2000000 + 0x42000000 >> 0x17)) * -0xdc
            + 0x1b800;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_080be056:
  if (*(char *)(param_1 + 0x12) == -0x60) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

