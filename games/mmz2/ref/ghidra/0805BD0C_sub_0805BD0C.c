// sub_0805BD0C at 0x0805BD0C (thumb)

undefined4 sub_0805BD0C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa90d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((((*(uint *)(param_1 + 0x8c) & 0x800) != 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c), *(char *)(iVar1 + 8) == '\0')) &&
      ((*(uint *)(iVar1 + 0x8c) & 0x200) == 0)) && (*(short *)(iVar1 + 0xa4) != 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0833cda8 + *(char *)(param_1 + 0x71) * 4);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_0833cda8 + *(char *)(param_1 + 0x71) * 4);
    }
    *(int *)(iVar1 + 0x54) = iVar2;
    *(int *)(iVar1 + 0x58) =
         *(int *)(param_1 + 0x58) + *(int *)(&DAT_0833cdb8 + *(char *)(param_1 + 0x71) * 4);
    sub_0802311C(iVar1,0,~(*(byte *)(param_1 + 10) >> 4) & 1,0);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x1e;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

