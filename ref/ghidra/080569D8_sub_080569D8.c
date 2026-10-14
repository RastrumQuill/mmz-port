// sub_080569D8 at 0x080569D8 (thumb)

undefined4 sub_080569D8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(*(int *)(param_1 + 0xc4) + 0x90) & 0x10001) == 0) &&
     ((*(byte *)(*(int *)(param_1 + 0xc4) + 0x94) & 2) == 0)) {
    cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  return in_lr;
}

