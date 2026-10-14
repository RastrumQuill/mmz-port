// sub_08084978 at 0x08084978 (thumb)

undefined8 sub_08084978(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*(byte *)(param_1 + 0x10) < 2) && (uVar2 = *(uint *)(param_1 + 0x8c) & 0x10000, uVar2 != 0)
       ) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(char *)(param_1 + 0xd) = (char)uVar2;
    }
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

