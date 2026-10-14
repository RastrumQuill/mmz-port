// sub_080B6284 at 0x080B6284 (thumb)

undefined4 sub_080B6284(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2))
  {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0886065c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_080B6528(param_1);
  }
  return in_lr;
}

