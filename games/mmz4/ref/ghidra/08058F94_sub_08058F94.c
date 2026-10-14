// sub_08058F94 at 0x08058F94 (thumb)

undefined4 sub_08058F94(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  uVar2 = 3;
  if (*(int *)(param_1 + 0xcc) + 0xf000 <= *(int *)(param_1 + 0x54) == (bool)(bVar1 >> 4 & 1)) {
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xe) = uVar2;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08854f80 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

