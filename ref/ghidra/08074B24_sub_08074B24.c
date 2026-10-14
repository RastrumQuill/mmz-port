// sub_08074B24 at 0x08074B24 (thumb)

undefined4 sub_08074B24(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    goto LAB_08074d4a;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(byte *)(param_1 + 0x12) < 0xb) goto LAB_08074c9a;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = *(int *)(param_1 + 0x4c) + 0x1000;
      local_14 = *(undefined4 *)(param_1 + 0x50);
      sub_0808827C(1,&local_18);
      local_18 = *(int *)(param_1 + 0x4c) + 0x400;
      local_14 = *(int *)(param_1 + 0x50) + 0x800;
      sub_0808827C(2,&local_18);
      local_18 = *(int *)(param_1 + 0x4c) + 0x1c00;
      local_14 = *(int *)(param_1 + 0x50) + -0x800;
      sub_0808827C(2,&local_18);
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_18 = *(int *)(param_1 + 0x4c) + (uVar3 * 2 >> 0x11 & 0x1f) * 0x100;
    }
    else {
      local_18 = *(int *)(param_1 + 0x4c) + -0x1000;
      local_14 = *(undefined4 *)(param_1 + 0x50);
      sub_0808827C(1,&local_18);
      local_18 = *(int *)(param_1 + 0x4c) + -0x400;
      local_14 = *(int *)(param_1 + 0x50) + 0x800;
      sub_0808827C(2,&local_18);
      local_18 = *(int *)(param_1 + 0x4c) + -0x1c00;
      local_14 = *(int *)(param_1 + 0x50) + -0x800;
      sub_0808827C(2,&local_18);
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_18 = *(int *)(param_1 + 0x4c) + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
    }
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    local_14 = *(int *)(param_1 + 0x50) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    sub_0808827C(2,&local_18);
  }
  else if (*(byte *)(param_1 + 0x12) < 0xb) {
LAB_08074c9a:
    sub_0808827C(1,param_1 + 0x4c);
  }
  else {
    local_18 = *(int *)(param_1 + 0x4c);
    local_14 = *(int *)(param_1 + 0x50) + 0x1000;
    sub_0808827C(1,&local_18);
    local_18 = *(int *)(param_1 + 0x4c) + 0x800;
    local_14 = *(int *)(param_1 + 0x50) + 0x400;
    sub_0808827C(2,&local_18);
    local_18 = *(int *)(param_1 + 0x4c) + -0x800;
    local_14 = *(int *)(param_1 + 0x50) + 0x1c00;
    sub_0808827C(2,&local_18);
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_18 = *(int *)(param_1 + 0x4c) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    local_14 = *(int *)(param_1 + 0x50) + (uVar3 * 2 >> 0x11 & 0x1f) * 0x100;
    sub_0808827C(2,&local_18);
  }
  sub_08001EAC(0xe1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  bVar1 = *(byte *)(param_1 + 10);
LAB_08074d4a:
  *(byte *)(param_1 + 10) = bVar1 & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

