// sub_08061DEC at 0x08061DEC (thumb)

undefined8 sub_08061DEC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xbc) & 0x100) != 0) {
        uVar2 = 4;
        goto LAB_08061e9e;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      goto LAB_08061ea0;
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) &&
       ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0 || (*(short *)(param_1 + 0xa4) == 0)) &&
        ((DAT_020301a8 & 8) == 0)))) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
LAB_08061ea0:
      sub_08062214(param_1);
      uVar3 = 1;
      goto LAB_08061eb2;
    }
  }
  else if ((bVar1 == 2) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar2 = 3;
LAB_08061e9e:
    *(undefined *)(param_1 + 0xd) = uVar2;
    goto LAB_08061ea0;
  }
  uVar3 = 0;
LAB_08061eb2:
  return CONCAT44(in_lr,uVar3);
}

