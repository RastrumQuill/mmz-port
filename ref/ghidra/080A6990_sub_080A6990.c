// sub_080A6990 at 0x080A6990 (thumb)

undefined4 sub_080A6990(int param_1)

{
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    sub_080A6650(param_1,2);
    sub_080A6650(param_1,3);
    local_14 = *(int *)(param_1 + 0x4c) + -0x400;
    local_10 = *(int *)(param_1 + 0x50) + -0x1700;
    sub_0808827C(3,&local_14);
    local_14 = *(int *)(param_1 + 0x4c) + 0x400;
    local_10 = *(int *)(param_1 + 0x50) + -0x1900;
    sub_0808827C(3,&local_14);
    local_14 = *(int *)(param_1 + 0x4c) + -0x400;
    local_10 = *(int *)(param_1 + 0x50) + -0x3100;
    sub_0808827C(3,&local_14);
    local_14 = *(int *)(param_1 + 0x4c) + 0x400;
    local_10 = *(int *)(param_1 + 0x50) + -0x2f00;
    sub_0808827C(3,&local_14);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809C930(param_1,3);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2c00;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  sub_0809C980(param_1);
  return in_lr;
}

