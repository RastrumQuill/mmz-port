// sub_0807BF04 at 0x0807BF04 (thumb)

undefined4 sub_0807BF04(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + -7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xc0) < iVar1) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_0807BF90(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807BF90(param_1);
  }
  return in_lr;
}

