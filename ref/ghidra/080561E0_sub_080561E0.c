// sub_080561E0 at 0x080561E0 (thumb)

undefined4 sub_080561E0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 2:
    *(int *)(param_1 + 0x54) = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1f) + 0x40] << 2;
    *(int *)(param_1 + 0x58) = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1f)] << 2;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x4c) + -0x1000;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x50) + 0x800;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == '\0') {
        sub_0808827C(1,param_1 + 0x4c);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
        sub_08001EAC(2);
      }
      sub_0808827C(2,param_1 + 0x5c);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if ((*(uint *)(param_1 + 0xbc) & 0x400) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

