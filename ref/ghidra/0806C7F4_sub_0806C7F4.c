// sub_0806C7F4 at 0x0806C7F4 (thumb)

undefined4 sub_0806C7F4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  sub_080A509C();
  local_20 = *(int *)(param_1 + 0x4c);
  local_1c = *(int *)(param_1 + 0x50) + -0x2800;
  sub_0808827C(1,&local_20);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x4c) + (uVar1 * 2 >> 0x11 & 0x1f) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x50) + ((uVar1 * 2 >> 0x11 & 0x1f) + 0x18) * -0x100;
  sub_0808827C(1,&local_20);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x4c) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x50) + ((uVar1 * 2 >> 0x11 & 0x1f) + 0x18) * -0x100;
  sub_0808827C(1,&local_20);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x4c) + (uVar1 * 2 >> 0x11 & 0x1f) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x50) + ((uVar1 * 2 >> 0x11 & 0x1f) + 0x18) * -0x100;
  sub_0808827C(2,&local_20);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x4c) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x50) + ((uVar1 * 2 >> 0x11 & 0x1f) + 0x18) * -0x100;
  sub_0808827C(2,&local_20);
  local_1c = *(int *)(param_1 + 0x50) + -0x3800;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_20 = *(int *)(param_1 + 0x4c) + 0x800;
    sub_0808827C(2,&local_20);
    local_20 = *(int *)(param_1 + 0x4c) + -0x1000;
    sub_0808827C(2,&local_20);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x400;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0xc00;
    sub_08095738(param_1,2,5,0);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1400;
    sub_08095738(param_1,2,5,0);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x400;
    sub_08095738(param_1,2,5,1);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1400;
    sub_08095738(param_1,2,5,1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2800;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0xc00;
    sub_08095738(param_1,2,2,0);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1000;
    sub_08095738(param_1,2,2,1);
  }
  else {
    local_20 = *(int *)(param_1 + 0x4c) + -0x800;
    sub_0808827C(2,&local_20);
    local_20 = *(int *)(param_1 + 0x4c) + 0x1000;
    sub_0808827C(2,&local_20);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x400;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0xc00;
    sub_08095738(param_1,2,5,1);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1400;
    sub_08095738(param_1,2,5,1);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x400;
    sub_08095738(param_1,2,5,0);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1400;
    sub_08095738(param_1,2,5,0);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2800;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0xc00;
    sub_08095738(param_1,2,2,1);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1000;
    sub_08095738(param_1,2,2,0);
  }
  sub_08001EAC(2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_08015698(1,param_1 + 0x4c);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

