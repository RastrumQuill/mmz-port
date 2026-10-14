// sub_0806BD9C at 0x0806BD9C (thumb)

undefined4 sub_0806BD9C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (((*(uint *)(iVar2 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar2 + 0x94) & 2) == 0)) {
    if (*(byte *)(param_1 + 0x10) < 2) {
      cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) =
           *(byte *)(param_1 + 0x41) & 0xf |
           ((&DAT_02022f30)[*(byte *)(param_1 + 9)] + '\x01') * '\x10';
      *(char *)(param_1 + 0x1e) = (&DAT_02022f30)[*(byte *)(param_1 + 9)] + '\x01';
    }
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  if (1 < *(byte *)(iVar2 + 0xf)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

