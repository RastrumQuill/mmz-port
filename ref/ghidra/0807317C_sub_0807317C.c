// sub_0807317C at 0x0807317C (thumb)

undefined4 sub_0807317C(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  if (((*(ushort *)(param_1 + 0x90) & 0x40) == 0) || (*(byte *)(param_1 + 0xd) < 2)) {
    if (*(char *)(param_1 + 0xc4) != '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
    if (*(byte *)(param_1 + 0x13) < 0x40) {
      if ((*(byte *)(param_1 + 0x13) & 3) < 2) {
        cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
        *(char *)(param_1 + 0x1e) = cVar1;
      }
      else {
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
        *(undefined *)(param_1 + 0x1e) = 0xd;
      }
    }
    if (*(char *)(param_1 + 0x13) == '\0') {
      local_14 = *(undefined4 *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50) + -0xa00;
      sub_0800561C(param_1 + 0x74,&DAT_082b1574);
      sub_0808827C(1,&local_14);
      sub_08001EAC(2);
      if (*(char *)(param_1 + 0x10) == '\0') {
        pcVar2 = (char *)(*(int *)(param_1 + 0x20) + 0xe4);
        *pcVar2 = *pcVar2 + -1;
      }
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    else {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1524 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0xa00;
    sub_0808827C(1,&local_1c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080732A0(param_1);
  }
  return in_lr;
}

