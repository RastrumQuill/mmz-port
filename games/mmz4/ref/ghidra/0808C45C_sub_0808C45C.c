// sub_0808C45C at 0x0808C45C (thumb)

undefined4 sub_0808C45C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(int *)(*(int *)(param_1 + 0x28) + 0x2c) == 0) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885c284 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_0801D1F4(param_1);
    }
  }
  else if (*(char *)(param_1 + 0xb6) == -1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xb6);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_0808C724(param_1);
  }
  return in_lr;
}

