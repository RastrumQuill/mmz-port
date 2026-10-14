// sub_08075AD0 at 0x08075AD0 (thumb)

undefined8 sub_08075AD0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar3 = 0;
    goto LAB_08075b52;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0xb8) = 1;
    }
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar4 = *(uint *)(param_1 + 0x8c);
      if ((uVar4 & 0x10000) == 0) {
        if ((uVar4 & 0x20000) == 0) {
          *(undefined *)(param_1 + 0xd) = 0;
          goto LAB_08075b46;
        }
        uVar2 = 5;
      }
      else {
        uVar2 = 1;
      }
LAB_08075b44:
      *(undefined *)(param_1 + 0xd) = uVar2;
    }
  }
  else if (bVar1 == 2) {
    uVar2 = 4;
    goto LAB_08075b44;
  }
LAB_08075b46:
  sub_08075E60(param_1);
  uVar3 = 1;
LAB_08075b52:
  return CONCAT44(in_lr,uVar3);
}

