// sub_08070378 at 0x08070378 (thumb)

undefined4 sub_08070378(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  uVar1 = sub_08073D1C(param_1);
  *(undefined *)(param_1 + 0xc3) = uVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

