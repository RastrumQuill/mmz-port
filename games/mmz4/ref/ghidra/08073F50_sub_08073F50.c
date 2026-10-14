// sub_08073F50 at 0x08073F50 (thumb)

undefined4 sub_08073F50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202e918 & 8) != 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar1 = sub_0802AD94(0x18,param_1,&DAT_0885985c);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
    if ((*(int *)(param_1 + 0x2c) != 0) && (iVar2 = sub_0802B3CC(), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if ((int)(*(int *)(param_1 + 0xb4) + (uint)*(byte *)(param_1 + 0xe3) * 0xc00 + -0x6000) <
        *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x40;
    }
    if ((*(char *)(param_1 + 0xd) == '\x06') || (*(byte *)(param_1 + 0xe3) != 0)) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08859784 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08074024(param_1);
  }
  return in_lr;
}

