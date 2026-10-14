// sub_080743EC at 0x080743EC (thumb)

undefined4 sub_080743EC(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    *(undefined *)(param_1 + 0x25) = 0x18;
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar2 + 9)] + 0xc);
    }
    iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar2 < 0) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

