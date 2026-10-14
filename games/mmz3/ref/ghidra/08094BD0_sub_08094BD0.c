// sub_08094BD0 at 0x08094BD0 (thumb)

undefined8 sub_08094BD0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar1 = 0;
    goto LAB_08094c1e;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  uVar2 = *(uint *)(param_1 + 0x8c);
  if ((uVar2 & 0x10000) == 0) {
    uVar2 = uVar2 & 0x20000;
    if (uVar2 == 0) goto LAB_08094c16;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    uVar2 = 1;
LAB_08094c16:
    *(char *)(param_1 + 0xd) = (char)uVar2;
  }
  uVar1 = 1;
LAB_08094c1e:
  return CONCAT44(in_lr,uVar1);
}

