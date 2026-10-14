// sub_080A4FDC at 0x080A4FDC (thumb)

undefined4 sub_080A4FDC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_0809C980();
  if (*(char *)(param_1 + 0x11) == '\0') {
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_0808827C(2,param_1 + 0x4c);
      sub_08001EAC(2);
      sub_080A4F10(param_1);
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_0808827C(2,param_1 + 0x4c);
      sub_08001EAC(2);
      sub_080A4F10(param_1);
    }
  }
  return in_lr;
}

