// sub_0805C604 at 0x0805C604 (thumb)

undefined4 sub_0805C604(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)
                        ((uint)*(byte *)(param_1 + 0xd) * 4 +
                        *(int *)(&DAT_0885546c + (uint)*(byte *)(param_1 + 0x10) * 4)));
  return in_lr;
}

