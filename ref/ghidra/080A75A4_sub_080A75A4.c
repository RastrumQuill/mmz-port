// sub_080A75A4 at 0x080A75A4 (thumb)

undefined4 sub_080A75A4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  local_c = *(int *)(param_1 + 0x50) + -0x800;
  sub_0808827C(1,&local_10);
  sub_0808CCEC(param_1,&local_10);
  sub_08001EAC(2);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

