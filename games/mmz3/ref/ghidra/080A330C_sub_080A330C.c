// sub_080A330C at 0x080A330C (thumb)

undefined4 sub_080A330C(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)
                        ((uint)*(byte *)(param_1 + 0xd) * 4 +
                        *(int *)(&DAT_08367cac + (uint)*(byte *)(param_1 + 0x10) * 4)));
  return in_lr;
}

