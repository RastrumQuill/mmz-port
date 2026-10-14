// sub_080A6AC0 at 0x080A6AC0 (thumb)

undefined4 sub_080A6AC0(int param_1)

{
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  sub_0809C980();
  if (*(char *)(param_1 + 0x10) == '\x02') {
    local_10 = *(int *)(param_1 + 0x4c) + -0x400;
    local_c = *(int *)(param_1 + 0x50) + -0xb00;
    sub_0808827C(3,&local_10);
    local_10 = *(int *)(param_1 + 0x4c) + 0x400;
    local_c = *(int *)(param_1 + 0x50) + -0xd00;
    sub_0808827C(3,&local_10);
  }
  else {
    local_10 = *(int *)(param_1 + 0x4c) + -0x400;
    local_c = *(int *)(param_1 + 0x50) + 0xb00;
    sub_0808827C(3,&local_10);
    local_10 = *(int *)(param_1 + 0x4c) + 0x400;
    local_c = *(int *)(param_1 + 0x50) + 0xd00;
    sub_0808827C(3,&local_10);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

