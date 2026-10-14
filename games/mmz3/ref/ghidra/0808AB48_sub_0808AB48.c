// sub_0808AB48 at 0x0808AB48 (thumb)

undefined4 sub_0808AB48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xb4) = DAT_020302c4 + -0x4000;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = 0x4600;
    sub_08017700(param_1,0x6e00);
    sub_08007390(param_1 + 0x74,&DAT_08365434);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x58) + 0x200;
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0xb4) < iVar1) {
    *(int *)(param_1 + 0x68) = iVar1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

