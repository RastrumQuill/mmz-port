// sub_0807C980 at 0x0807C980 (thumb)

undefined4 sub_0807C980(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  iVar3 = *(int *)(param_1 + 0x20);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)*(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0x11) = 0;
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x4c) + -0x1000;
    }
    else {
      local_14 = *(int *)(param_1 + 0x4c) + 0x1000;
    }
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    local_10 = *(int *)(param_1 + 0x50) + (uVar2 * 2 >> 0x11 & 0x3f) * -0x100 + 0x1f00;
    sub_0807BD90(&local_14,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1,param_1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == -1) || (1 < *(byte *)(iVar3 + 0xc))) || (*(char *)(iVar3 + 0xd) == '\x13')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_0807BF04(param_1);
  }
  return in_lr;
}

