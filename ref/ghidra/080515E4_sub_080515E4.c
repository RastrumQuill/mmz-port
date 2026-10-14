// sub_080515E4 at 0x080515E4 (thumb)

undefined4 sub_080515E4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) != '\a') {
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = *(int *)(param_1 + 0x50) + 0x800;
    sub_0808827C(2,&local_10);
    sub_08001EAC(2);
  }
  sub_08015698(0,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

