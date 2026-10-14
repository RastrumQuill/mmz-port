// sub_0807E410 at 0x0807E410 (thumb)

undefined4 sub_0807E410(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x3800;
  iVar1 = *(int *)(param_1 + 0xb4) + 0x7800;
  *(int *)(param_1 + 200) = iVar1;
  *(bool *)(param_1 + 0xbe) = iVar1 < *(int *)(DAT_0202dbf0 + 0x54);
  *(undefined *)(param_1 + 0xd) = 0xc;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,0x807e5fd);
  return in_lr;
}

