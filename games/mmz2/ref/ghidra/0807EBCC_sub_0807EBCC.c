// sub_0807EBCC at 0x0807EBCC (thumb)

undefined4 sub_0807EBCC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  if ((DAT_0202ebbb & 0x20) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080032EC(0x2a);
      uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
      uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar1 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100 + -0xc00;
      local_1c = &DAT_0202e188;
      sub_080AC60C(1,&local_24);
      uVar1 = *local_1c * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
      uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
      *local_1c = uVar1 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100 + -0xc00;
      sub_080AC60C(2,&local_24);
      sub_0801DD2C(0,param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
    else {
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0834092c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

