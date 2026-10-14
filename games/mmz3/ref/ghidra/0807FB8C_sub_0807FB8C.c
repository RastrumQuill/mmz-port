// sub_0807FB8C at 0x0807FB8C (thumb)

undefined4 sub_0807FB8C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xc0) & 0x100) == 0) {
    cVar1 = sub_0807FA88(param_1);
    if (cVar1 == '\0') {
      sub_0807FAD8(param_1);
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836464c + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836466c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0807FC04(param_1);
  }
  return in_lr;
}

