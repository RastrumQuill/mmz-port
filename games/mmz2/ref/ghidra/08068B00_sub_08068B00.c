// sub_08068B00 at 0x08068B00 (thumb)

undefined4 sub_08068B00(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08068B9C(param_1);
    return in_lr;
  }
  *(byte *)(param_1 + 0x49) =
       *(byte *)(param_1 + 0x49) & 0xf3 | (byte)((*(byte *)(iVar3 + 0xbd) & 3) << 2);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(param_1 + 0x71) == '\x01') goto LAB_08068b7e;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x71) != '\x01') goto LAB_08068b7e;
      sub_080032EC(0x46);
      uVar1 = 0;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
  }
LAB_08068b7e:
  if (*(int *)(iVar3 + 0x5c) != 0) {
    sub_080128D4(param_1);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return in_lr;
}

