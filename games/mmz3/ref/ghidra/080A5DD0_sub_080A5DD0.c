// sub_080A5DD0 at 0x080A5DD0 (thumb)

undefined4 sub_080A5DD0(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)
                        ((uint)*(byte *)(param_1 + 0xd) * 4 +
                        *(int *)(&DAT_0836835c + (uint)*(byte *)(param_1 + 0x10) * 4)));
  return in_lr;
}

