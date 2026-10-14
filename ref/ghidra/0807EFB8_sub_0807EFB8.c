// sub_0807EFB8 at 0x0807EFB8 (thumb)

undefined4 sub_0807EFB8(int param_1)

{
  undefined4 in_lr;
  
  sub_080033F0(param_1 + 0x6c,2);
  *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x12) + ' ';
  *(undefined *)(param_1 + 0xd) = 1;
  sub_0807EFDC(param_1);
  return in_lr;
}

